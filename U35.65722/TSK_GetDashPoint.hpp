#ifndef UE4SS_SDK_TSK_GetDashPoint_HPP
#define UE4SS_SDK_TSK_GetDashPoint_HPP

class UTSK_GetDashPoint_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector TargetKey;

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_TSK_GetDashPoint(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, class UDashPoints* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_GetDashPoint_success, FVector CallFunc_GetDashPoint_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

#endif
