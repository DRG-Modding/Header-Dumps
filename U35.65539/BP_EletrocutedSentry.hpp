#ifndef UE4SS_SDK_BP_EletrocutedSentry_HPP
#define UE4SS_SDK_BP_EletrocutedSentry_HPP

class ABP_EletrocutedSentry_C : AActor
{
    USphereComponent* Sphere;
    UStatusEffectTriggerComponent* StatusEffectTrigger;
    UAudioComponent* Audio;
    UParticleSystemComponent* ParticleSystem;
    USceneComponent* DefaultSceneRoot;

    void UserConstructionScript();
}

#endif
