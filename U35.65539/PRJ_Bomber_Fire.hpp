#ifndef UE4SS_SDK_PRJ_Bomber_Fire_HPP
#define UE4SS_SDK_PRJ_Bomber_Fire_HPP

class APRJ_Bomber_Fire_C : UProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    UProjectileExplosion* ProjectileExplosion;
    UDamageComponent* Damage;
    UStaticMeshComponent* ProjectileMesh;
    UPointLightComponent* AreaLight;
    bool HasExploded;
    UAudioComponent* AlarmSound;
    float TimeToExplode;

    void OnRep_HasExploded(FVector CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue);
    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void BndEvt__MovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(const FHitResult& ImpactResult, const FVector& ImpactVelocity);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_PRJ_Bomber_Fire(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, bool K2Node_Event_PredictedImpact, const FHitResult K2Node_Event_HitResult, const FHitResult K2Node_ComponentBoundEvent_ImpactResult, const FVector K2Node_ComponentBoundEvent_ImpactVelocity, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, FVector CallFunc_BreakHitResult_Location_1, FVector CallFunc_BreakHitResult_ImpactPoint_1, FVector CallFunc_BreakHitResult_Normal_1, FVector CallFunc_BreakHitResult_ImpactNormal_1, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, AActor* CallFunc_BreakHitResult_HitActor_1, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, FName CallFunc_BreakHitResult_HitBoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_FaceIndex_1, FVector CallFunc_BreakHitResult_TraceStart_1, FVector CallFunc_BreakHitResult_TraceEnd_1, FVector CallFunc_Add_VectorFloat_ReturnValue, ADeepCSGSection* K2Node_DynamicCast_AsDeep_CSGSection, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_Add_VectorVector_ReturnValue, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue);
}

#endif
