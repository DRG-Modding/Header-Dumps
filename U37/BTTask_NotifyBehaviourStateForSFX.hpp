#ifndef UE4SS_SDK_BTTask_NotifyBehaviourStateForSFX_HPP
#define UE4SS_SDK_BTTask_NotifyBehaviourStateForSFX_HPP

class UBTTask_NotifyBehaviourStateForSFX_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    int32 New State ID;

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTTask_NotifyBehaviourStateForSFX(int32 EntryPoint);
};

#endif
