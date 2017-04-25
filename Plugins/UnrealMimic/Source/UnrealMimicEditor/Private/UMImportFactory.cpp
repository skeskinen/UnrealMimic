#include "UnrealMimicEditorModule.h"

#include "UMImportFactory.h"
#include "MimicVoice.h"

UUMImportFactory::UUMImportFactory(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{
	bEditorImport = true;
	SupportedClass = UMimicVoice::StaticClass();

	Formats.Add(TEXT("flitevox;Flitevox"));
}

UObject* UUMImportFactory::FactoryCreateFile(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, const FString& Filename, const TCHAR* Parms, FFeedbackContext* Warn, bool& bOutOperationCanceled)
{
	UMimicVoice* Voice = NewObject<UMimicVoice>(InParent, InClass, InName, Flags);
	Voice->FilePath = Filename;

	//TODO: Should load the binary and store that instead of path (if the serialization was working)
	
	return Voice;
}
