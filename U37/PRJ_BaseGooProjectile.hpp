#ifndef UE4SS_SDK_PRJ_BaseGooProjectile_HPP
#define UE4SS_SDK_PRJ_BaseGooProjectile_HPP

class APRJ_BaseGooProjectile_C : public AGooGunProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UDamageComponent* Damage_PuddleSizeDisplayHack;
    class UAudioComponent* GooCannonProjectileIdle_Cue;
    class UNiagaraComponent* Niagara;
    class UProjectileExplosion* ProjectileExplosion;
    class UDamageComponent* Damage;
    class UStaticMeshComponent* StaticMesh;
    int32 MaxBounces;
    TSubclassOf<class AGooGunPuddle> puddle;
    FVector PuddleSize;
    bool HasGravityOverclock;
    bool HasBuckShotOverclock;
    class AGooGunPuddle* SpawnedPuddle;
    bool ExplosivePuddles;
    class USoundBase* CreatureImpactSound;

    void BndEvt__MovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(const FHitResult& ImpactResult, const FVector& ImpactVelocity);
    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void MakeBouncy();
    void DoEffects(FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal);
    void OnUpgradeElementAdded(class UProjectileUpgradeElement* element);
    void DestroyProjectile();
    void ExecuteUbergraph_PRJ_BaseGooProjectile(int32 EntryPoint);
};

#endif
