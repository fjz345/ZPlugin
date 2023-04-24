#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"

#include "ZPluginBlueprintLibrary.generated.h"

class UObject;

UCLASS()
class ZPLUGIN_API UZPluginBlueprintLibrary :
    public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

    /** Tells the content browser to browse to the asset */
    UFUNCTION(BlueprintCallable, Category = "Content Browser")
    static bool BrowseToAsset(UObject* Asset);

};