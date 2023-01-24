#ifndef UE4SS_SDK_PRJ_PatrolBotRocket_HPP
#define UE4SS_SDK_PRJ_PatrolBotRocket_HPP

class APRJ_PatrolBotRocket_C : public AHomingDroneBomb
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* Sphere;
    class UParticleSystemComponent* Particle_Trail1;
    class UStaticMeshComponent* MeshRocket1;
    class UPointLightComponent* Light_Exhaust1;
    class UParticleSystemComponent* Particle_Exhaust;
    class USceneComponent* Visuals;
    class UAudioComponent* HomingDroneIdle_Cue;
    class UOutlineComponent* outline;
    class UProjectileExplosion* ProjectileExplosion;
    class UDamageComponent* Damage;
    bool Explode;
    class AActor* Target;

    bool GetIsTargetable();
    FVector GetTargetCenterMass();
    class UHealthComponentBase* GetTargetHealthComponent();
    void ShowDamageEffects(class UParticleSystem* Particles, FVector Location, FRotator Orientation);
    void OnRep_Explode();
    void BndEvt__Health_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void ReceiveBeginPlay();
    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void ExecuteUbergraph_PRJ_PatrolBotRocket(int32 EntryPoint);
};

#endif
