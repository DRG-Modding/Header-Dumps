#ifndef UE4SS_SDK_BP_SMG_ElectrifiedPlatforms_HPP
#define UE4SS_SDK_BP_SMG_ElectrifiedPlatforms_HPP

class ABP_SMG_ElectrifiedPlatforms_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystemComponent* PlaceholderParticle;
    class UNiagaraComponent* Niagara;
    class UStatusEffectTriggerComponent* StatusEffectTrigger;
    class USphereComponent* Sphere;
    class USceneComponent* DefaultSceneRoot;
    float LifeTime;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_SMG_ElectrifiedPlatforms(int32 EntryPoint);
};

#endif
