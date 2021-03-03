

#include "MetalInMotionGameModeBase.h"
#include "BallBearingHUD.h"


/**
Construct the game mode, assigning a debugging HUD class.
*********************************************************************************/

AMetalInMotionGameModeBase::AMetalInMotionGameModeBase()
{
	PrimaryActorTick.bCanEverTick = true;

	HUDClass = ABallBearingHUD::StaticClass();
}
