#ifndef UE4SS_SDK_TSK_StopAttackStance_HPP
#define UE4SS_SDK_TSK_StopAttackStance_HPP

class UTSK_StopAttackStance_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_TSK_StopAttackStance(int32 EntryPoint);
};

#endif
