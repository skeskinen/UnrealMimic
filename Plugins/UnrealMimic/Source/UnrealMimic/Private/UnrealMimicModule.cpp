#include "UnrealMimicModule.h"
#include "Modules/ModuleManager.h"

#include "usenglish/usenglish.h"
#include "cmulex/cmu_lex.h"

void usenglish_init(cst_voice *v);
cst_lexicon* cmulex_init(void);

class FUnrealMimicModule : public IUnrealMimicModule
{
	virtual void StartupModule() override
	{
		mimic_init();

		//mimic_set_lang_list();
		//hack around their gnu make tricks (make_lang_list)
		//try to fix this if you are really bored or want to support more languages (easily?)
		mimic_add_lang("eng", usenglish_init, cmu_lex_init);
		mimic_add_lang("usenglish", usenglish_init, cmu_lex_init);
	}

	virtual void ShutdownModule() override
	{
		mimic_exit();
	}
};

IMPLEMENT_MODULE(FUnrealMimicModule, UnrealMimic);