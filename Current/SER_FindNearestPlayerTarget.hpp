#ifndef UE4SS_SDK_SER_FindNearestPlayerTarget_HPP
#define UE4SS_SDK_SER_FindNearestPlayerTarget_HPP

class USER_FindNearestPlayerTarget_C : public UBTService_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector TargetKey;
    class APlayerCharacter* NewTarget;
    float MaxRange;
    bool MustBeAlive;
    bool ChangeTarget;
    bool ClearIfNone;
    bool accountForAttackers;
    bool ChangeTargeOnlyBasedOnDistance;
    class APawn* MyPawn;

    void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_SER_FindNearestPlayerTarget(int32 EntryPoint);
};

#endif
