#ifndef UE4SS_SDK_TSK_RandomPointFromOrigin_HPP
#define UE4SS_SDK_TSK_RandomPointFromOrigin_HPP

class UTSK_RandomPointFromOrigin_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool FindAtDistance;
    FBlackboardKeySelector Origin;
    float Distance;
    FBlackboardKeySelector LocationKey;
    FVector OriginVec;
    FVector Vector;

    void ActorOrVector(class UObject* CallFunc_GetBlackboardValueAsObject_ReturnValue, FVector CallFunc_GetBlackboardValueAsVector_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_K2_GetActorLocation_ReturnValue);
    void snap(bool snap, class UDeepPathfinderMovement* Path, FVector Origin, FVector CallFunc_FindPathfinderPointAbove_ReturnValue);
    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_TSK_RandomPointFromOrigin(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class UDeepPathfinderMovement* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_GetRandomReachablePointAtApproximateDistance_Async_success, FVector CallFunc_GetRandomReachablePointAtApproximateDistance_Async_outPos);
};

#endif
