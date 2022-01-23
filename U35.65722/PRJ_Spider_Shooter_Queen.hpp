#ifndef UE4SS_SDK_PRJ_Spider_Shooter_Queen_HPP
#define UE4SS_SDK_PRJ_Spider_Shooter_Queen_HPP

class APRJ_Spider_Shooter_Queen_C : public AProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UProjectileExplosion* ProjectileExplosion;
    class UDamageComponent* DamageComponent;
    class UStaticMeshComponent* ProjectileMesh;
    class UParticleSystemComponent* ParticleComponent;
    class UAudioComponent* Audio;
    float DamageAmmount;

    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void ExecuteUbergraph_PRJ_Spider_Shooter_Queen(int32 EntryPoint, bool K2Node_Event_PredictedImpact, const FHitResult K2Node_Event_HitResult, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, bool CallFunc_HasAuthority_ReturnValue, const FTransform CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_ShooterQueen_Projectile_AcidCloud_C* CallFunc_FinishSpawningActor_ReturnValue);
};

#endif
