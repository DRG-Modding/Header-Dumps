#ifndef UE4SS_SDK_BP_Coilgun_HellfireSegment_OLD_HPP
#define UE4SS_SDK_BP_Coilgun_HellfireSegment_OLD_HPP

class ABP_Coilgun_HellfireSegment_OLD_C : public ABP_Coilgun_Trailsegment_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* Sphere;
    class UStatusEffectTriggerComponent* StatusEffectTrigger;
    class UObjectTemperatureComponent* ObjectTemperature;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class UAudioComponent* audio;
    class UParticleSystemComponent* ParticleSystem;

    void ReceiveBeginPlay();
    void OnEndEffects();
    void OnStartEffects();
    void ExecuteUbergraph_BP_Coilgun_HellfireSegment_OLD(int32 EntryPoint);
};

#endif
