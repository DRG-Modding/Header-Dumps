#ifndef UE4SS_SDK_TSK_FaceTargetToCarve_HPP
#define UE4SS_SDK_TSK_FaceTargetToCarve_HPP

class UTSK_FaceTargetToCarve_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector TargetActorKey;
    float Angle;
    int32 Tries;
    bool FailIfCantTurn;
    int32 MaxTries;

    bool IsFacingTarget(class AActor* Tank);
    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_TSK_FaceTargetToCarve(int32 EntryPoint);
};

#endif
