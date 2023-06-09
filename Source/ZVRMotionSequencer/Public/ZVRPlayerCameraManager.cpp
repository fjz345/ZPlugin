#include "ZVRPlayerCameraManager.h"
#include "Camera/CameraActor.h"

AZVRPlayerCameraManager::AZVRPlayerCameraManager()
{
	UObject* NewObj = UObject::CreateDefaultSubobject(
		TEXT("DefaultZCameraActor"),
		ACameraActor::StaticClass(),
		nullptr,	// No class to create by default
		false,		// Not required
		false		// Not transient
	);

	ACameraActor* CamActor = static_cast<ACameraActor*>(NewObj);

	ViewTarget.SetNewTarget(CamActor);
}
