#ifndef UE4SS_SDK_TSK_SetExternallyControlled_HPP
#define UE4SS_SDK_TSK_SetExternallyControlled_HPP

class UTSK_SetExternallyControlled_C : UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool IsControlledExternally;

    void ReceiveExecuteAI(UAIController* OwnerController, APawn* ControlledPawn);
    void ExecuteUbergraph_TSK_SetExternallyControlled(int32 EntryPoint, UAIController* K2Node_Event_OwnerController, APawn* K2Node_Event_ControlledPawn, UAFlyingBug* K2Node_DynamicCast_AsAFlying_Bug, bool K2Node_DynamicCast_bSuccess);
}

#endif
