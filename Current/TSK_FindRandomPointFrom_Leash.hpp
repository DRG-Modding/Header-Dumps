#ifndef UE4SS_SDK_TSK_FindRandomPointFrom_Leash_HPP
#define UE4SS_SDK_TSK_FindRandomPointFrom_Leash_HPP

class UTSK_FindRandomPointFrom_Leash_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    float MaxHeightDiff;
    float Distance;
    TArray<float> HazLeashDistanceFactor;
    bool SnapToCeiling;
    bool FindAtDistance;
    FBlackboardKeySelector FromLocationKey;
    FBlackboardKeySelector NewLocationKey;
    FVector Temp;
    int32 CheckAttempts;
    int32 MaxCheckAttempts;
    FVector Origin;
    float FlatGroundRadius;
    float MinPathLength;
    float maxPathLength;
    float MinHeightToCeiling;
    class ADeepPathfinderCharacter* Character;
    bool Debug;
    TArray<FVector> AllNavPoints;

    void Prune Bad Points(TArray<FVector>& InArr, TArray<FVector>& PrunedArr);
    void PassCeilingCheck(FVector Candidate, bool& pass);
    void GetBestFlatGround(FVector Location, FVector& Array Element);
    void PassHeightCheck(FVector Candidate, FVector Origin, bool& pass);
    FVector GetLocation();
    void snap(bool SnapToCeiling, class UDeepPathfinderMovement* Pathfinder, FVector& Location);
    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void CheckAgain();
    void ContinueWithBadVal();
    void Debug_Sphere(const FVector Center, FLinearColor LineColor, float Radius);
    void Debug_SphereLine(const FVector Origin, FVector Target, FLinearColor LineColor, float Radius);
    void Debug_Write(FString inString);
    void ExecuteUbergraph_TSK_FindRandomPointFrom_Leash(int32 EntryPoint);
};

#endif
