#include "ZVRPawn.h"

#include "GameFramework/WorldSettings.h"

void AZVRPawn::SetWorldToMeterScale(float NewScale)
{
	GetWorld()->GetWorldSettings()->WorldToMeters = NewScale;
}