#ifndef UE4SS_SDK_TSK_FindRandomPointFrom_HPP
#define UE4SS_SDK_TSK_FindRandomPointFrom_HPP

class UTSK_FindRandomPointFrom_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    float Distance;
    bool SnapToCeiling;
    bool FindAtDistance;
    FBlackboardKeySelector FromLocationKey;
    FBlackboardKeySelector NewLocationKey;
    float FlatGroundRadius;
    float maxPathLength;
    int32 MaxTries;
    int32 CurrentTries;

    void GetBestFlatGround(FVector Origin, FVector& Array Element);
    FVector GetLocation();
    void snap(bool SnapToCeiling, class UDeepPathfinderMovement* Pathfinder, FVector& Location);
    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_TSK_FindRandomPointFrom(int32 EntryPoint);
};

#endif
