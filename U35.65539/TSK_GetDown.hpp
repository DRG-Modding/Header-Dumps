#ifndef UE4SS_SDK_TSK_GetDown_HPP
#define UE4SS_SDK_TSK_GetDown_HPP

class UTSK_GetDown_C : UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool Down;

    void ReceiveExecuteAI(UAIController* OwnerController, APawn* ControlledPawn);
    void ExecuteUbergraph_TSK_GetDown(int32 EntryPoint, UAIController* K2Node_Event_OwnerController, APawn* K2Node_Event_ControlledPawn, UMULE* K2Node_DynamicCast_AsMULE, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_BoolBool_ReturnValue);
}

#endif
