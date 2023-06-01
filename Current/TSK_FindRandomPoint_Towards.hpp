#ifndef UE4SS_SDK_TSK_FindRandomPoint_Towards_HPP
#define UE4SS_SDK_TSK_FindRandomPoint_Towards_HPP

class UTSK_FindRandomPoint_Towards_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector LocationKey;
    float Distance;
    bool SnapToCeiling;
    EOffsetFrom offsetFrom;
    float OffsetFromDistance;
    FBlackboardKeySelector TowardsLocationKey;
    FVector ToTarget;
    int32 Attempts;
    int32 MaxAttempts;
    FVector Temp;
    float MinDot;
    float MaxDot;

    void IsFacing(FVector NewPosition, FVector SelfPosition, bool& IsFacing);
    void snap(bool SnapToCeiling, class UDeepPathfinderMovement* Pathfinder, FVector& Location);
    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_TSK_FindRandomPoint_Towards(int32 EntryPoint);
};

#endif
