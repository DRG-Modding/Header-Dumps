#ifndef UE4SS_SDK_PRJ_Spider_Boss_Twin_Mine_HPP
#define UE4SS_SDK_PRJ_Spider_Boss_Twin_Mine_HPP

class APRJ_Spider_Boss_Twin_Mine_C : public AProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystemComponent* P_Twins_Mine_Trail;
    class UAudioComponent* Twin_B_ProjectileBarrage_Cue;
    class UStaticMeshComponent* Mesh_Range_hidden;
    class UDamageComponent* Damage;
    class UFirstPersonStaticMeshComponent* ProjectileMesh;
    class UPointLightComponent* AreaLight;
    FPRJ_Spider_Boss_Twin_Mine_CNewEventDispatcher_0_0 NewEventDispatcher_0_0;
    void NewEventDispatcher_0_0();
    bool HasExploded;
    class UParticleSystem* Explosion Particles;
    class USoundBase* ExplosionSound;
    float TimeToExplode;
    class USoundBase* ImpactSound;
    class USoundBase* WarningLoopCue;

    void OnRep_HasExploded();
    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void ReceiveBeginPlay();
    void All_Impact(FVector_NetQuantize Location);
    void ExecuteUbergraph_PRJ_Spider_Boss_Twin_Mine(int32 EntryPoint);
    void NewEventDispatcher_0_0__DelegateSignature();
};

#endif
