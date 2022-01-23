#ifndef UE4SS_SDK_TSK_DashTo_HPP
#define UE4SS_SDK_TSK_DashTo_HPP

class UTSK_DashTo_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UDashPoints* DashPoints;

    void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void CustomEvent();
    void ExecuteUbergraph_TSK_DashTo(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AAIController* K2Node_Event_OwnerController_1, class APawn* K2Node_Event_ControlledPawn_1, FName CallFunc_MakeLiteralName_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_1, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class UDashPoints* CallFunc_GetComponentByClass_ReturnValue, FExecuteUbergraph_TSK_DashToK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate);
};

#endif
