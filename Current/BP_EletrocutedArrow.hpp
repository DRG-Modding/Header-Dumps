#ifndef UE4SS_SDK_BP_EletrocutedArrow_HPP
#define UE4SS_SDK_BP_EletrocutedArrow_HPP

class ABP_EletrocutedArrow_C : public AActor
{
    class UNiagaraComponent* Niagara;
    class USphereComponent* Sphere;
    class UStatusEffectTriggerComponent* StatusEffectTrigger;
    class UAudioComponent* audio;
    class USceneComponent* DefaultSceneRoot;

    void UserConstructionScript();
};

#endif
