#ifndef UE4SS_SDK_PRJ_HydraWeed_Shooter_HPP
#define UE4SS_SDK_PRJ_HydraWeed_Shooter_HPP

class APRJ_HydraWeed_Shooter_C : public AProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UDamageComponent* Damage;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class USimpleHealthComponent* SimpleHealth;
    class URotatingMovementComponent* RotatingMovement;
    class UStaticMeshComponent* SK_ShootingPlant_Projectile;
    class UProjectileExplosion* ProjectileExplosion;
    class UParticleSystemComponent* ParticleComponent;
    class UAudioComponent* Audio;
    class UPointLightComponent* PointLight;

    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void GoBoom();
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void ExecuteUbergraph_PRJ_HydraWeed_Shooter(int32 EntryPoint, class UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, bool K2Node_Event_PredictedImpact, const FHitResult K2Node_Event_HitResult, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_GetActorForwardVector_ReturnValue, bool CallFunc_HasAuthority_ReturnValue);
};

#endif
