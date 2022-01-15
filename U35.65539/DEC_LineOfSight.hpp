#ifndef UE4SS_SDK_DEC_LineOfSight_HPP
#define UE4SS_SDK_DEC_LineOfSight_HPP

class UDEC_LineOfSight_C : UBTDecorator_BlueprintBase
{
    FVector StartOffsetVector;
    FVector EndOffsetVector;
    FBlackboardKeySelector TargetKey;
    FVector TraceToLocation;

    void ActorOrVector(FVector CallFunc_GetBlackboardValueAsVector_ReturnValue, AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, const FVector CallFunc_GetActorTargetCenter_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_DoesImplementInterface_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue);
    bool PerformConditionCheckAI(UAIController* OwnerController, APawn* ControlledPawnFVector Temp_struct_Variable, InterfaceProperty K2Node_DynamicCast_AsTargetable, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_GetTargetCenterMass_ReturnValue, bool CallFunc_DoesImplementInterface_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, const TArray<AActor*>& K2Node_MakeArray_Array, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue_1, FVector CallFunc_SelectVector_ReturnValue, FHitResult CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
}

#endif
