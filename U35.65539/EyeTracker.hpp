#ifndef UE4SS_SDK_EyeTracker_HPP
#define UE4SS_SDK_EyeTracker_HPP

#include "EyeTracker_enums.hpp"

class UEyeTrackerFunctionLibrary : UBlueprintFunctionLibrary
{

    void SetEyeTrackedPlayer(UPlayerController* PlayerController);
    bool IsStereoGazeDataAvailable();
    bool IsEyeTrackerConnected();
    bool GetStereoGazeData(FEyeTrackerStereoGazeData& OutGazeData);
    bool GetGazeData(FEyeTrackerGazeData& OutGazeData);
}

struct UEyeTrackerStereoGazeData
{
    FVector LeftEyeOrigin;
    FVector LeftEyeDirection;
    FVector RightEyeOrigin;
    FVector RightEyeDirection;
    FVector FixationPoint;
    float ConfidenceValue;
}

struct UEyeTrackerGazeData
{
    FVector GazeOrigin;
    FVector GazeDirection;
    FVector FixationPoint;
    float ConfidenceValue;
}

#endif
