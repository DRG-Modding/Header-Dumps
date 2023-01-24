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
    void ExecuteUbergraph_ENE_Spider_Swarmer(int32 EntryPoint);
};

#endif
