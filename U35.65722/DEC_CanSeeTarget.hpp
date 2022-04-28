#ifndef UE4SS_SDK_DEC_CanSeeTarget_HPP
#define UE4SS_SDK_DEC_CanSeeTarget_HPP

class UDEC_CanSeeTarget_C : public UBTDecorator_BlueprintBase
{
    float MaxDistance;
    FBlackboardKeySelector TargetKey;
    FVector EyeLocationOffset;

    bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawnFVector EyeLocation, TScriptInterface<class ITargetable> K2Node_DynamicCast_AsTargetable, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DoesImplementInterface_ReturnValue, FVector CallFunc_GetTargetCenterMass_ReturnValue, const TArray<class AActor*>& K2Node_MakeArray_Array, FVector CallFunc_K2_GetActorLocation_ReturnValue, class ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue, bool CallFunc_IsPointInsideTerrain_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FVector Temp_struct_Variable, FVector CallFunc_Add_VectorVector_ReturnValue_1, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, FHitResult CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
};

#endif