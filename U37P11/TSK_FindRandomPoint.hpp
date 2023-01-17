#ifndef UE4SS_SDK_TSK_FindRandomPoint_HPP
#define UE4SS_SDK_TSK_FindRandomPoint_HPP

class UTSK_FindRandomPoint_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector LocationKey;
    float Distance;
    bool SnapToCeiling;
    EOffsetFrom offsetFrom;
    float OffsetFromDistance;

    void snap(bool SnapToCeiling, class UDeepPathfinderMovement* Pathfinder, FVector& Location);
    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_TSK_FindRandomPoint(int32 EntryPoint);
};

#endif
