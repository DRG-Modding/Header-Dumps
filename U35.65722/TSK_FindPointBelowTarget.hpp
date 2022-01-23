#ifndef UE4SS_SDK_TSK_FindPointBelowTarget_HPP
#define UE4SS_SDK_TSK_FindPointBelowTarget_HPP

class UTSK_FindPointBelowTarget_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector LocationKey;
    float Distance;
    FBlackboardKeySelector TargetKey;
    float Height;
    FVector ManualOffset;

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_TSK_FindPointBelowTarget(int32 EntryPoint, class ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, bool CallFunc_IsValid_ReturnValue, class UDeepPathfinderMovement* CallFunc_GetComponentByClass_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_GetRandomReachablePointAtApproximateDistance_Async_success, FVector CallFunc_GetRandomReachablePointAtApproximateDistance_Async_outPos, FCSGRaycastHitInfo CallFunc_Raycast_hitInfo, bool CallFunc_Raycast_ReturnValue);
};

#endif
