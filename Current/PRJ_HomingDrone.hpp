#ifndef UE4SS_SDK_PRJ_HomingDrone_HPP
#define UE4SS_SDK_PRJ_HomingDrone_HPP

class APRJ_HomingDrone_C : public AHomingDroneBomb
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystemComponent* P_Homing_Drone_Jets2;
    class UParticleSystemComponent* P_Homing_Drone_Jets1;
    class UParticleSystemComponent* particle_Trail;
    class UParticleSystemComponent* P_Homing_Drone_Jets;
    class UAudioComponent* HomingDroneIdle_Cue;
    class UEnemyComponent* enemy;
    class UOutlineComponent* outline;
    class USceneComponent* Scene;
    class UPointLightComponent* Light_Exhaust;
    class UStaticMeshComponent* MeshRocket;
    class UProjectileExplosion* ProjectileExplosion;
    class UDamageComponent* Damage;
    bool Explode;

    bool GetIsTargetable();
    FVector GetTargetCenterMass();
    class UHealthComponentBase* GetTargetHealthComponent();
    void ShowDamageEffects(class UParticleSystem* Particles, FVector Location, FRotator Orientation);
    void OnRep_Explode();
    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void BndEvt__Health_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void ExecuteUbergraph_PRJ_HomingDrone(int32 EntryPoint);
};

#endif
