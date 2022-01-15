#ifndef UE4SS_SDK_TSK_SetConditionTo_HPP
#define UE4SS_SDK_TSK_SetConditionTo_HPP

class UTSK_SetConditionTo_C : UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector Condition;
    bool SetConditionTo;

    void ReceiveExecute(AActor* OwnerActor);
    void ExecuteUbergraph_TSK_SetConditionTo(int32 EntryPoint, AActor* K2Node_Event_OwnerActor);
}

#endif
