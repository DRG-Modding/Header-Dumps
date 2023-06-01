#ifndef UE4SS_SDK_PRJ_Spider_Shooter_Rockpox_Plague_HPP
#define UE4SS_SDK_PRJ_Spider_Shooter_Rockpox_Plague_HPP

class APRJ_Spider_Shooter_Rockpox_Plague_C : public AProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UDamageComponent* Damage;
    class UStaticMeshComponent* Mesh;
    class UParticleSystemComponent* ParticleComponent;
    class UAudioComponent* audio;

    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void ExecuteUbergraph_PRJ_Spider_Shooter_Rockpox_Plague(int32 EntryPoint);
};

#endif
