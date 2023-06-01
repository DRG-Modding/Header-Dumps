#ifndef UE4SS_SDK_TSK_FindRandomPointFrom_WIthinHeight_HPP
#define UE4SS_SDK_TSK_FindRandomPointFrom_WIthinHeight_HPP

class UTSK_FindRandomPointFrom_WithinHeight_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    float MaxHeightDiff;
    float Distance;
    bool SnapToCeiling;
    bool FindAtDistance;
    FBlackboardKeySelector FromLocationKey;
    FBlackboardKeySelector NewLocationKey;
    FVector Temp;
    int32 CheckAttempts;
    int32 MaxCheckAttempts;
    FVector Origin;
    float FlatGroundRadius;
    float maxPathLength;
    float MinHeightToCeiling;
    class ADeepPathfinderCharacter* Character;

    void PassCeilingCheck(FVector Candidate, bool& pass);
    void GetBestFlatGround(FVector Location, FVector& Array Element);
    void PassHeightCheck(FVector Candidate, FVector Origin, bool& pass);
    FVector GetLocation();
    void snap(bool SnapToCeiling, class UDeepPathfinderMovement* Pathfinder, FVector& Location);
    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void CheckAgain();
    void ContinueWithBadVal();
    void ExecuteUbergraph_TSK_FindRandomPointFrom_WithinHeight(int32 EntryPoint);
};

#endif
