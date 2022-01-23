#ifndef UE4SS_SDK_ENE_Spider_Swarmer_HPP
#define UE4SS_SDK_ENE_Spider_Swarmer_HPP

class AENE_Spider_Swarmer_C : public AENE_PF_SpiderBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UMeleeAttackComponent* JumpAttack;
    class UMeleeAttackComponent* MeleeAttack;
    class UStaticMeshComponent* DropShadow;
    class USphereComponent* Sphere;
    class UAudioComponent* SwarmerIdle_Cue;

    void OnDeathBase();
    void ChangeVisibility(bool bNewVisibility);
    void OnFrozen(class AActor* Source);
    void PlayDeathEffects();
    void ExecuteUbergraph_ENE_Spider_Swarmer(int32 EntryPoint, FTransform CallFunc_GetSocketTransform_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, bool K2Node_Event_bNewVisibility, FRotator CallFunc_GetSocketRotation_ReturnValue, FVector CallFunc_GetSocketLocation_ReturnValue, class AActor* K2Node_Event_source, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UDecalComponent* CallFunc_SpawnDecalAtActor_ReturnValue);
};

#endif
