#ifndef UE4SS_SDK_TSK_GetDown_HPP
#define UE4SS_SDK_TSK_GetDown_HPP

class UTSK_GetDown_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool Down;

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_TSK_GetDown(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class AMULE* K2Node_DynamicCast_AsMULE, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_BoolBool_ReturnValue);
};

#endif
