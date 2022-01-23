#ifndef UE4SS_SDK_PRJ_BigGooProjectile_HPP
#define UE4SS_SDK_PRJ_BigGooProjectile_HPP

class APRJ_BigGooProjectile_C : public APRJ_BaseBigGooProjectile_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    float Timeline_0_NewTrack_0_74F2130944154F0318A73A910B7DD01B;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_74F2130944154F0318A73A910B7DD01B;
    class UTimelineComponent* Timeline_0;
    float ClusterEjectionForce;
    TSubclassOf<class AProjectileBase> FragmentClass;

    void SpawnSmallGoo(FVector InVec, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, FRotator CallFunc_MakeRotFromZ_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue, int32 Temp_int_Variable, FVector K2Node_MathExpression_ReturnValue, float K2Node_MathExpression_ReturnValue_1, int32 CallFunc_Percent_IntInt_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_SelectFloat_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, FVector CallFunc_Conv_RotatorToVector_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FVector CallFunc_GreaterGreater_VectorRotator_ReturnValue, FRotator CallFunc_MakeRotFromX_ReturnValue, class AProjectileBase* CallFunc_SpawnProjectileFromSelf_ReturnValue);
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void SpawnSmallGooBalls(FVector ImpactNormal);
    void OnUpgradeElementAdded(class UProjectileUpgradeElement* element);
    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void OnInitialized();
    void ExecuteUbergraph_PRJ_BigGooProjectile(int32 EntryPoint, float CallFunc_Add_FloatFloat_ReturnValue, class UProjectileUpgradeElement* K2Node_Event_element, float CallFunc_Add_FloatFloat_ReturnValue_1, bool CallFunc_ElementOf_ReturnValue, bool CallFunc_ElementOf_ReturnValue_1, FVector K2Node_CustomEvent_ImpactNormal, bool K2Node_Event_PredictedImpact, const FHitResult K2Node_Event_HitResult, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, float CallFunc_Add_FloatFloat_ReturnValue_2, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, FRotator CallFunc_Conv_VectorToRotator_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_3, FVector CallFunc_MakeVector_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, class AGooGunPuddle* CallFunc_SpawnPuddle_ReturnValue, bool CallFunc_HasAuthority_ReturnValue);
};

#endif
