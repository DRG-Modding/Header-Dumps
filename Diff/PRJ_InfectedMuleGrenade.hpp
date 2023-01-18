#ifndef UE4SS_SDK_PRJ_InfectedMuleGrenade_HPP
#define UE4SS_SDK_PRJ_InfectedMuleGrenade_HPP

class APRJ_InfectedMuleGrenade_C : public AProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* Mesh_Range;
    class UAudioComponent* InfectedMuleGrenadeAlarm;
    class UDamageComponent* Damage;
    class UExplosionComponent* Explosion;
    class UStaticMeshComponent* StaticMesh;
    bool HasExploaded;
    float TimeToExplode;
    class UParticleSystem* ExplosionParticles;
    class USoundBase* ExplosionSound;

    void OnRep_HasExploaded();
    void ReceiveBeginPlay();
    void Delayed Sine();
    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void BndEvt__MovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(const FHitResult& ImpactResult, const FVector& ImpactVelocity);
    void ExecuteUbergraph_PRJ_InfectedMuleGrenade(int32 EntryPoint);
};

#endif
