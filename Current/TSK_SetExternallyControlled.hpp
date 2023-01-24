#ifndef UE4SS_SDK_TSK_SetExternallyControlled_HPP
#define UE4SS_SDK_TSK_SetExternallyControlled_HPP

class UTSK_SetExternallyControlled_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool IsControlledExternally;

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_TSK_SetExternallyControlled(int32 EntryPoint);
};

#endif
