#ifndef UE4SS_SDK_TSK_RandomPointFromOrigin_HPP
#define UE4SS_SDK_TSK_RandomPointFromOrigin_HPP

class UTSK_RandomPointFromOrigin_C : UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool FindAtDistance;
    FBlackboardKeySelector Origin;
    float Distance;
    FBlackboardKeySelector LocationKey;
    FVector OriginVec;
    FVector Vector;

    void ActorOrVector(UObject* CallFunc_GetBlackboardValueAsObject_ReturnValue, FVector CallFunc_GetBlackboardValueAsVector_ReturnValue, AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_K2_GetActorLocation_ReturnValue);
    void snap(bool snap, UDeepPathfinderMovement* Path, FVector Origin, FVector CallFunc_FindPathfinderPointAbove_ReturnValue);
    void ReceiveExecuteAI(UAIController* OwnerController, APawn* ControlledPawn);
    void ExecuteUbergraph_TSK_RandomPointFromOrigin(int32 EntryPoint, UAIController* K2Node_Event_OwnerController, APawn* K2Node_Event_ControlledPawn, UDeepPathfinderMovement* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_GetRandomReachablePointAtApproximateDistance_Async_success, FVector CallFunc_GetRandomReachablePointAtApproximateDistance_Async_outPos);
}

#endif
