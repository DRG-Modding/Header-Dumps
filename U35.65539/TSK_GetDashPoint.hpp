#ifndef UE4SS_SDK_TSK_GetDashPoint_HPP
#define UE4SS_SDK_TSK_GetDashPoint_HPP

class UTSK_GetDashPoint_C : UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector TargetKey;

    void ReceiveExecuteAI(UAIController* OwnerController, APawn* ControlledPawn);
    void ExecuteUbergraph_TSK_GetDashPoint(int32 EntryPoint, UAIController* K2Node_Event_OwnerController, APawn* K2Node_Event_ControlledPawn, AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, UDashPoints* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_GetDashPoint_success, FVector CallFunc_GetDashPoint_ReturnValue, bool CallFunc_IsValid_ReturnValue);
}

#endif
