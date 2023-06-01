#ifndef UE4SS_SDK_PRJ_Spider_Lobber_NOTINUSE_HPP
#define UE4SS_SDK_PRJ_Spider_Lobber_NOTINUSE_HPP

class APRJ_Spider_Lobber_NOTINUSE_C : public AProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USpawnActorWithDebrisPosComponent* SpawnActorWithDebrisPos;
    class UNiagaraComponent* GooParticle;
    class UDamageComponent* Damage;
    class UStaticMeshComponent* SK_ShootingPlant_Projectile;
    class UParticleSystemComponent* TrailParticle;
    class UAudioComponent* audio;
    FVector PuddleScale;
    float PlacementRadius;

    void SpawnPuddle(FVector impactLocation, FVector ImpactNormal, class AActor* hitActor);
    void SpawnEffects(FVector ImpactNormal, FVector Location);
    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void ExecuteUbergraph_PRJ_Spider_Lobber_NOTINUSE(int32 EntryPoint);
};

#endif
