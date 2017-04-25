#include "UnrealMimicModule.h"

#include "MimicVoice.h"
#include "Sound/SoundWaveProcedural.h"
//#include "UnrealMemory.h"

void UMimicVoice::Serialize(FArchive& Ar)
{
	Super::Serialize(Ar);

	//TODO: Serialize voice, move Init's functionality to importer?
	//this would fix the packaging problem (voice files are not packaged)
	
	//alternative fix, do the same thing as UFileMediaSource
	//FString UFileMediaSource::GetFullPath() const
	//{
	//	FString FullPath = FPaths::ConvertRelativePathToFull(
	//		FPaths::IsRelative(FilePath)
	//			? FPaths::GameContentDir() / FilePath
	//			: FilePath
	//	);
	//	return FullPath;
	//}

	//This approach probably won't be useful because the features are stored in deep C-pointer structure, but I'll leave it here anyways.
	//if (!BulkData.bAllocated && Ar.IsSaving())
	//{
	//	BulkData.Lock(LOCK_READ_WRITE);
	//	FMemory::Memcpy();
	//	BulkData.Unlock();
	//}
	//BulkData.Serialize(Ar, this);
	//if (Ar.IsLoading())
	//{
	//}
}

void UMimicVoice::Init()
{
	if (!Vox)
	{
		char* ccharFilename = new char[2048];

		size_t charsConverted = 0;
		wcstombs_s(&charsConverted, ccharFilename, 2048, *FilePath, FilePath.Len());

		cst_voice* vox = mimic_voice_load(ccharFilename);
		delete[] ccharFilename;

		Vox = vox;
	}
}

//naive wchar to single char http://stackoverflow.com/a/36875023
size_t to_narrow(const wchar_t * src, char * dest, size_t dest_len) {
	size_t i;
	wchar_t code;

	i = 0;

	while (src[i] != '\0' && i < (dest_len - 1)) {
		code = src[i];
		if (code < 128)
			dest[i] = char(code);
		else {
			dest[i] = '?';
			if (code >= 0xD800 && code <= 0xD8FF)
				// lead surrogate, skip the next code unit, which is the trail
				i++;
		}
		i++;
	}

	dest[i] = '\0';

	return i - 1;

}

class FSayTask : public FNonAbandonableTask
{
	friend class FAutoDeleteAsyncTask<FSayTask>;
public:
	FSayTask(cst_voice* InVox, FString InText, TWeakObjectPtr<class USoundWaveProcedural> InSoundWave)
		: Vox(InVox), Text(InText), SoundWave(InSoundWave)
	{
	}
	
	void DoWork()
	{
		char* str = static_cast<char*>(FMemory::Malloc(1024));
		to_narrow(*Text, str, 1024); //mimic probably can't handle wchars so do naive convert

		cst_wave* wave = nullptr;
		if(Vox)
			wave = mimic_text_to_wave(str, Vox);
		FMemory::Free(str);

		if (SoundWave.IsValid() && wave)
		{
			SoundWave->Duration = wave->num_samples / static_cast<float>(wave->sample_rate);

			SoundWave->QueueAudio((const uint8*)wave->samples, wave->num_samples * sizeof(int16));
		}

		if(wave)
			cst_free(wave);
	}

	FORCEINLINE TStatId GetStatId() const
	{
		RETURN_QUICK_DECLARE_CYCLE_STAT(FSayTask, STATGROUP_ThreadPoolAsyncTasks);
	}

private:

	cst_voice* Vox;
	FString Text;
	TWeakObjectPtr<USoundWaveProcedural> SoundWave;
};

USoundWaveProcedural* UMimicVoice::Say(FString Text)
{
	if (!Vox)
	{
		Init();
	}

	USoundWaveProcedural* SoundWave = NewObject<USoundWaveProcedural>(this);
	(new FAutoDeleteAsyncTask<FSayTask>(Vox, Text, SoundWave))->StartBackgroundTask();

	SoundWave->SoundGroup = SOUNDGROUP_Voice;
	SoundWave->bLooping = false;

	//this stuff is needed so that the sound system beliefs we are actually going to give some data eventually (I think?)
	//something related might cause the seemingly random halfway cutoff effect
	SoundWave->SampleRate = feat_int(Vox->features, "sample_rate");
	SoundWave->Duration = INDEFINITELY_LOOPING_DURATION; //possible leak? some reasonably big number instead?
	SoundWave->NumChannels = 1; // can we get this from some feature?

	return SoundWave;
}
