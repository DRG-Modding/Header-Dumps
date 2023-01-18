#ifndef UE4SS_SDK_PRJ_Facility_Laser_Base_HPP
#define UE4SS_SDK_PRJ_Facility_Laser_Base_HPP

class APRJ_Facility_Laser_Base_C : public AProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* Niagara;
    class UParticleSystemComponent* Trail;
    class UDamageComponent* Damage;
    class UStaticMeshComponent* Body;
    class USoundCue* FireSound;
    class USoundCue* ImpactSound;
    class UParticleSystem* ImpactParticles;

    void ReceiveBeginPlay();
    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void ExecuteUbergraph_PRJ_Facility_Laser_Base(int32 EntryPoint);
};

#endif
