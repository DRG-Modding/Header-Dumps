#ifndef UE4SS_SDK_TSK_FindPointNearTarget_HPP
#define UE4SS_SDK_TSK_FindPointNearTarget_HPP

class UTSK_FindPointNearTarget_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector ManualOffset;
    float Distance;
    FBlackboardKeySelector TargetKey;
    FBlackboardKeySelector LocationKey;

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_TSK_FindPointNearTarget(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class UDeepPathfinderMovement* CallFunc_GetComponentByClass_ReturnValue, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_GetRandomReachablePointAtApproximateDistance_Async_success, FVector CallFunc_GetRandomReachablePointAtApproximateDistance_Async_outPos);
};

#endif
