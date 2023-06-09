#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"

#include "ZVRPawn.generated.h"


UCLASS()
class ZVRMOTIONSEQUENCER_API AZVRPawn : public APawn
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "ZVR")
		void SetWorldToMeterScale(float NewScale);
};