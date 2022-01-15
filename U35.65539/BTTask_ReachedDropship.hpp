#ifndef UE4SS_SDK_BTTask_ReachedDropship_HPP
#define UE4SS_SDK_BTTask_ReachedDropship_HPP

class UBTTask_ReachedDropship_C : UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveExecuteAI(UAIController* OwnerController, APawn* ControlledPawn);
    void ExecuteUbergraph_BTTask_ReachedDropship(int32 EntryPoint, UAIController* K2Node_Event_OwnerController, APawn* K2Node_Event_ControlledPawn, UMolly* K2Node_DynamicCast_AsMolly, bool K2Node_DynamicCast_bSuccess);
}

#endif
