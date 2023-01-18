#ifndef UE4SS_SDK_TSK_PlayMontage_HPP
#define UE4SS_SDK_TSK_PlayMontage_HPP

class UTSK_PlayMontage_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAnimMontage* Montage;
    bool WaitForCompletion;
    bool FreezeAlignment;

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_TSK_PlayMontage(int32 EntryPoint);
};

#endif
