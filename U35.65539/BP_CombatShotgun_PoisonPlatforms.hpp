#ifndef UE4SS_SDK_BP_CombatShotgun_PoisonPlatforms_HPP
#define UE4SS_SDK_BP_CombatShotgun_PoisonPlatforms_HPP

class ABP_CombatShotgun_PoisonPlatforms_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UNiagaraComponent* Niagara;
    UStatusEffectTriggerComponent* StatusEffectTrigger;
    USphereComponent* Sphere;
    USceneComponent* DefaultSceneRoot;
    float LifeTime;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_CombatShotgun_PoisonPlatforms(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue);
}

#endif
