#ifndef UE4SS_SDK_PRJ_Base_Spider_Lobber_Projectile_HPP
#define UE4SS_SDK_PRJ_Base_Spider_Lobber_Projectile_HPP

class APRJ_Base_Spider_Lobber_Projectile_C : public AGooGunProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* P_SpiderLobber_Projecitle_Trail_TEMP_Converted;
    class UNiagaraComponent* GooParticle;
    class UAudioComponent* audio;
    class UDamageComponent* Damage;
    int32 MaxBounces;
    bool HasGravityOverclock;
    bool HasBuckShotOverclock;
    class AGooGunPuddle* SpawnedPuddle;
    bool ExplosivePuddles;
    class USoundBase* CreatureImpactSound;

    void BndEvt__MovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(const FHitResult& ImpactResult, const FVector& ImpactVelocity);
    void MakeBouncy();
    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void DestroyProjectile();
    void SpawnEffects(const FVector& Location, const FVector& Normal);
    void ExecuteUbergraph_PRJ_Base_Spider_Lobber_Projectile(int32 EntryPoint);
};

#endif
