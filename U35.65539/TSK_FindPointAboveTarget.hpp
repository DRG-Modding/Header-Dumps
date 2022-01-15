#ifndef UE4SS_SDK_TSK_FindPointAboveTarget_HPP
#define UE4SS_SDK_TSK_FindPointAboveTarget_HPP

class UTSK_FindPointAboveTarget_C : UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector LocationKey;
    float Distance;
    FBlackboardKeySelector TargetKey;
    float Height;
    FVector ManualOffset;

    void ReceiveExecuteAI(UAIController* OwnerController, APawn* ControlledPawn);
    void ExecuteUbergraph_TSK_FindPointAboveTarget(int32 EntryPoint, AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, UAIController* K2Node_Event_OwnerController, APawn* K2Node_Event_ControlledPawn, bool CallFunc_IsValid_ReturnValue, UDeepPathfinderMovement* CallFunc_GetComponentByClass_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_GetRandomReachablePointAtApproximateDistance_Async_success, FVector CallFunc_GetRandomReachablePointAtApproximateDistance_Async_outPos, FVector CallFunc_FindPathfinderPointAbove_ReturnValue);
}

#endif
