#ifndef UE4SS_SDK_PRJ_Spider_Spitter_HPP
#define UE4SS_SDK_PRJ_Spider_Spitter_HPP

class APRJ_Spider_Spitter_C : public AProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UDamageComponent* Damage;
    class UParticleSystemComponent* ParticleComponent;
    class UAudioComponent* audio;

    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void ExecuteUbergraph_PRJ_Spider_Spitter(int32 EntryPoint);
};

#endif
