#ifndef UE4SS_SDK_TSK_GetDashPoint_HPP
#define UE4SS_SDK_TSK_GetDashPoint_HPP

class UTSK_GetDashPoint_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector TargetKey;

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_TSK_GetDashPoint(int32 EntryPoint);
};

#endif
