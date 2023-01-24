#ifndef UE4SS_SDK_PRJ_FacilityTentacleProjectile_HPP
#define UE4SS_SDK_PRJ_FacilityTentacleProjectile_HPP

class APRJ_FacilityTentacleProjectile_C : public AProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* Niagara;
    class UDamageComponent* Damage;
    class USoundCue* FireSound;
    class USoundCue* ImpactSound;
    class UParticleSystem* ImpactParticles;

    void ReceiveBeginPlay();
    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void ExecuteUbergraph_PRJ_FacilityTentacleProjectile(int32 EntryPoint);
};

#endif
