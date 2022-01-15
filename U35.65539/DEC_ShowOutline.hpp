#ifndef UE4SS_SDK_DEC_ShowOutline_HPP
#define UE4SS_SDK_DEC_ShowOutline_HPP

class UDEC_ShowOutline_C : UBTDecorator_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    UOutlineComponent* outline;

    bool PerformConditionCheckAI(UAIController* OwnerController, APawn* ControlledPawn);
    void ReceiveExecutionStartAI(UAIController* OwnerController, APawn* ControlledPawn);
    void ReceiveExecutionFinishAI(UAIController* OwnerController, APawn* ControlledPawn, uint8 NodeResult);
    void ExecuteUbergraph_DEC_ShowOutline(int32 EntryPoint, UAIController* K2Node_Event_OwnerController_1, APawn* K2Node_Event_ControlledPawn_1, UOutlineComponent* CallFunc_GetComponentByClass_ReturnValue, UAIController* K2Node_Event_OwnerController, APawn* K2Node_Event_ControlledPawn, uint8 K2Node_Event_NodeResult, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
}

#endif
