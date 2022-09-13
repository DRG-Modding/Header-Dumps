#ifndef UE4SS_SDK_BP_CaretakerActionBase_HPP
#define UE4SS_SDK_BP_CaretakerActionBase_HPP

class UBP_CaretakerActionBase_C : public UCaretakerActionComponent
{
    TArray<FName> DroneLaunchSockets;
    TArray<FName> PhaseBombSockets;
    float EstimatedStartDuration;
    float InitialDelay;

    void SpawnPatrolBots();
    void GetEstimatedStartDuration(float& StartDuration);
    void GetClosestPhaseBombSocket(FVector Location, FName& Result);
    bool HasAutority();
    void GetClosestLaunchLocation(FVector& TargetLocation, FVector& Result);
    FVector GetRandomLaunchLocation();
};

#endif
