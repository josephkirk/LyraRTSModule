// Copyright 2022, Jesus Bracho, All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CameraBlockingVolume.h"
#include "RTSCameraBoundsVolume.generated.h"

UCLASS()
class RTSMODULERUNTIME_API ARTSCameraBoundsVolume : public ACameraBlockingVolume
{
	GENERATED_BODY()

	ARTSCameraBoundsVolume();
};
