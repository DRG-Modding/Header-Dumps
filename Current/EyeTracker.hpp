#ifndef UE4SS_SDK_EyeTracker_HPP
#define UE4SS_SDK_EyeTracker_HPP

#include "EyeTracker_enums.hpp"

struct FEyeTrackerGazeData
{
    FVector GazeOrigin;
    FVector GazeDirection;
    FVector FixationPoint;
    float ConfidenceValue;

};

struct FEyeTrackerStereoGazeData
{
    FVector LeftEyeOrigin;
    FVector LeftEyeDirection;
    FVector RightEyeOrigin;
    FVector RightEyeDirection;
    FVector FixationPoint;
    float ConfidenceValue;

};

class UEyeTrackerFunctionLibrary : public UBlueprintFunctionLibrary
{

    void SetEyeTrackedPlayer(class APlayerController* PlayerController);
    bool IsStereoGazeDataAvailable();
    bool IsEyeTrackerConnected();
    bool GetStereoGazeData(FEyeTrackerStereoGazeData& OutGazeData);
    bool GetGazeData(FEyeTrackerGazeData& OutGazeData);
};

#endif
