#ifndef UE4SS_SDK_TSK_BackOff_HPP
#define UE4SS_SDK_TSK_BackOff_HPP

class UTSK_BackOff_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector DangerKey;
    float Distance;
    float WaitAfterFleeing;
    float RandomWaitTime;

    void SetBackOffFalse(class AController* Controller);
    void OutsideDanger(class AActor* Pawn, bool& res);
    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void PathDone(bool success);
    void RefreshDest();
    void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_TSK_BackOff(int32 EntryPoint);
};

#endif
