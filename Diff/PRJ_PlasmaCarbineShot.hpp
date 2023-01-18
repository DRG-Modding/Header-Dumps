#ifndef UE4SS_SDK_PRJ_PlasmaCarbineShot_HPP
#define UE4SS_SDK_PRJ_PlasmaCarbineShot_HPP

class APRJ_PlasmaCarbineShot_C : public AProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystemComponent* P_ElectricPlasma;
    class UNiagaraComponent* Niagara_Shield;
    class UNiagaraComponent* Niagara_HOT;
    class UNiagaraComponent* Niagara;
    class UParticleSystemComponent* P_ShieldPlasma;
    class UProjectileExplosion* ProjectileExplosionHot;
    class UProjectileExplosion* ProjectileExplosionElectric;
    class UProjectileExplosion* ProjectileExplosionSplash;
    class UProjectileExplosion* ProjectileExplosion;
    class UDamageComponent* Damage;
    class UStaticMeshComponent* StaticMesh;
    int32 MaxBounces;
    bool IsElectric;
    bool IsBouncy;
    bool IsHot;

    bool ShouldBreakArmorBeforeDamage(class AActor* Target);
    void HandleImpact(FHitResult& HitResult);
    void BounceFeedback();
    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void MakeBouncy();
    void BndEvt__MovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(const FHitResult& ImpactResult, const FVector& ImpactVelocity);
    void DoEffects(FVector Location, FVector Normal);
    void DoOnSpawn();
    void OnInitialized();
    void OnUpgradeElementAdded(class UProjectileUpgradeElement* element);
    void CustomEvent(const class UItemUpgrade* Event);
    void BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_PRJ_PlasmaCarbineShot(int32 EntryPoint);
};

#endif
