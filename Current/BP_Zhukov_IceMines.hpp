#ifndef UE4SS_SDK_BP_Zhukov_IceMines_HPP
#define UE4SS_SDK_BP_Zhukov_IceMines_HPP

class ABP_Zhukov_IceMines_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPointLightComponent* PointLight;
    class UExplosionComponent* Explosion;
    class USphereComponent* Area Trigger;
    class UDamageComponent* Damage;
    class UStaticMeshComponent* Sphere;
    class USceneComponent* DefaultSceneRoot;
    bool Triggered;
    bool Exploded;
    class USoundCue* ExplosionSound;
    class UParticleSystem* ExplosionParticles;
    class USoundMix* ExplosionMixModifier;
    float ExplosionDuckMinDistance;
    float ExplosionDuckMaxDistance;
    float ExplosionDuckingTime;
    bool ready;
    float ArmingDelay;

    void OnRep_Ready();
    void OnRep_Triggered();
    void UserConstructionScript();
    void TriggerExplosion();
    void GetArmed();
    void BndEvt__Area Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Zhukov_IceMines(int32 EntryPoint);
};

#endif
