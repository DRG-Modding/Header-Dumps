#ifndef UE4SS_SDK_PRJ_HydraWeedSpawn_HPP
#define UE4SS_SDK_PRJ_HydraWeedSpawn_HPP

class APRJ_HydraWeedSpawn_C : public AHydraWeedSpawnProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* audio;
    class UParticleSystemComponent* ParticleSystem;
    class UParticleSystem* SeedImpactParticles;
    class USoundBase* SeedImpactSound;

    bool NewFunction_0();
    void ReceiveBeginPlay();
    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void ExecuteUbergraph_PRJ_HydraWeedSpawn(int32 EntryPoint);
};

#endif
