#ifndef UE4SS_SDK_TSK_DashTo_HPP
#define UE4SS_SDK_TSK_DashTo_HPP

class UTSK_DashTo_C : UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    UDashPoints* DashPoints;

    void ReceiveAbortAI(UAIController* OwnerController, APawn* ControlledPawn);
    void ReceiveExecuteAI(UAIController* OwnerController, APawn* ControlledPawn);
    void CustomEvent();
    void ExecuteUbergraph_TSK_DashTo(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, UAIController* K2Node_Event_OwnerController_1, APawn* K2Node_Event_ControlledPawn_1, FName CallFunc_MakeLiteralName_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_1, UAIController* K2Node_Event_OwnerController, APawn* K2Node_Event_ControlledPawn, UDashPoints* CallFunc_GetComponentByClass_ReturnValue, DashSig__DelegateSignature K2Node_CreateDelegate_OutputDelegate);
}

#endif
