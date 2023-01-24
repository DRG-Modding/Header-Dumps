#ifndef UE4SS_SDK_BP_EletrocutedSentry_HPP
#define UE4SS_SDK_BP_EletrocutedSentry_HPP

class ABP_EletrocutedSentry_C : public AActor
{
    class USphereComponent* Sphere;
    class UStatusEffectTriggerComponent* StatusEffectTrigger;
    class UAudioComponent* audio;
    class UParticleSystemComponent* ParticleSystem;
    class USceneComponent* DefaultSceneRoot;

    void UserConstructionScript();
};

#endif
