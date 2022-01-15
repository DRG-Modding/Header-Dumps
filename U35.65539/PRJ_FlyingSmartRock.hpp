#ifndef UE4SS_SDK_PRJ_FlyingSmartRock_HPP
#define UE4SS_SDK_PRJ_FlyingSmartRock_HPP

class APRJ_FlyingSmartRock_C : UProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    UPointLightComponent* PointLight;
    USpikeSkeletalMesh_C* SkeletalMesh;
    UStaticMeshComponent* Core;
    UDamageComponent* Damage;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    USimpleHealthComponent* SimpleHealth;
    URotatingMovementComponent* RotatingMovement;
    UProjectileExplosion* ProjectileExplosion;
    UParticleSystemComponent* ParticleComponent;
    UAudioComponent* Audio;
    UMaterialInstanceDynamic* DynamicMaterial_Core;

    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature(float Damage, UDamageClass* DamageClass, AActor* DamageCauser, bool anyHealthLost);
    void GoBoom();
    void ExecuteUbergraph_PRJ_FlyingSmartRock(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, bool K2Node_Event_PredictedImpact, const FHitResult K2Node_Event_HitResult, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, float K2Node_ComponentBoundEvent_Damage, UDamageClass* K2Node_ComponentBoundEvent_damageClass, AActor* K2Node_ComponentBoundEvent_DamageCauser, bool K2Node_ComponentBoundEvent_anyHealthLost, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_GetActorForwardVector_ReturnValue);
}

#endif
