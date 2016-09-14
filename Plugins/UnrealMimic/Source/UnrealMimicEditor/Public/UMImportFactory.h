#pragma once
#include "Factories/Factory.h"
#include "UMImportFactory.generated.h"

UCLASS(hidecategories=Object)
class UUMImportFactory : public UFactory
{
	GENERATED_BODY()

public:

	UUMImportFactory(const FObjectInitializer& ObjectInitializer);

	virtual UObject* FactoryCreateFile(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, const FString& Filename, const TCHAR* Parms, FFeedbackContext* Warn, bool& bOutOperationCanceled);
};