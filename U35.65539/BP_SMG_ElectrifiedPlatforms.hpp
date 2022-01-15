#ifndef UE4SS_SDK_BP_SMG_ElectrifiedPlatforms_HPP
#define UE4SS_SDK_BP_SMG_ElectrifiedPlatforms_HPP

class ABP_SMG_ElectrifiedPlatforms_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UParticleSystemComponent* PlaceholderParticle;
    UNiagaraComponent* Niagara;
    UStatusEffectTriggerComponent* StatusEffectTrigger;
    USphereComponent* Sphere;
    USceneComponent* DefaultSceneRoot;
    float LifeTime;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_SMG_ElectrifiedPlatforms(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue);
}

#endif
