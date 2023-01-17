#ifndef UE4SS_SDK_TSK_GetDown_HPP
#define UE4SS_SDK_TSK_GetDown_HPP

class UTSK_GetDown_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool Down;

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_TSK_GetDown(int32 EntryPoint);
};

#endif
