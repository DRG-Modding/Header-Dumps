#ifndef UE4SS_SDK_BP_CombatShotgun_PoisonPlatforms_HPP
#define UE4SS_SDK_BP_CombatShotgun_PoisonPlatforms_HPP

class ABP_CombatShotgun_PoisonPlatforms_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* Niagara;
    class UStatusEffectTriggerComponent* StatusEffectTrigger;
    class USphereComponent* Sphere;
    class USceneComponent* DefaultSceneRoot;
    float LifeTime;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_CombatShotgun_PoisonPlatforms(int32 EntryPoint);
};

#endif
