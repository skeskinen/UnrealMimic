#include "UnrealMimicEditorModule.h"

class FUnrealMimicEditorModule : public IUnrealMimicEditorModule
{
	virtual void StartupModule() override
	{
		//FModuleManager::LoadModuleChecked<IModuleInterface>("GeometryCache");
		
	}

	virtual void ShutdownModule() override
	{

	}
};

IMPLEMENT_MODULE(FUnrealMimicEditorModule, UnrealMimicEditor);