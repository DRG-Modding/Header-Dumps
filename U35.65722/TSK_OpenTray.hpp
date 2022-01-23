#ifndef UE4SS_SDK_TSK_OpenTray_HPP
#define UE4SS_SDK_TSK_OpenTray_HPP

class UTSK_OpenTray_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FName TrayOpen;
    bool Open;

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_TSK_OpenTray(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class ABP_Donkey_C* K2Node_DynamicCast_AsBP_Donkey, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_BoolBool_ReturnValue);
};

#endif
