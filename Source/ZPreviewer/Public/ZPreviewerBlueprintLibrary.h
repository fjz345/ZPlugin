#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"

#include "ZPreviewerBlueprintLibrary.generated.h"

UCLASS()
class ZPREVIEWER_API UZPreviewerBlueprintLibrary :
    public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

    /** Tells the content browser to browse to the asset */
    UFUNCTION(BlueprintCallable, Category = "Content Browser")
    static bool BrowseToAsset(UObject* Asset);

};