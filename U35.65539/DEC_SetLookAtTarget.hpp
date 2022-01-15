#ifndef UE4SS_SDK_DEC_SetLookAtTarget_HPP
#define UE4SS_SDK_DEC_SetLookAtTarget_HPP

class UDEC_SetLookAtTarget_C : UBTDecorator_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector TargetKey;

    bool PerformConditionCheckAI(UAIController* OwnerController, APawn* ControlledPawn);
    void ReceiveExecutionStartAI(UAIController* OwnerController, APawn* ControlledPawn);
    void ReceiveExecutionFinishAI(UAIController* OwnerController, APawn* ControlledPawn, uint8 NodeResult);
    void ExecuteUbergraph_DEC_SetLookAtTarget(int32 EntryPoint, AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, UAIController* K2Node_Event_OwnerController_1, APawn* K2Node_Event_ControlledPawn_1, UAIController* K2Node_Event_OwnerController, APawn* K2Node_Event_ControlledPawn, uint8 K2Node_Event_NodeResult, UENE_Spider_Shooter_C* K2Node_DynamicCast_AsENE_Spider_Shooter, bool K2Node_DynamicCast_bSuccess, UENE_Spider_Shooter_C* K2Node_DynamicCast_AsENE_Spider_Shooter_1, bool K2Node_DynamicCast_bSuccess_1);
}

#endif
