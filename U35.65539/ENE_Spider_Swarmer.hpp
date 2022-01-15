#ifndef UE4SS_SDK_ENE_Spider_Swarmer_HPP
#define UE4SS_SDK_ENE_Spider_Swarmer_HPP

class AENE_Spider_Swarmer_C : UENE_PF_SpiderBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UMeleeAttackComponent* JumpAttack;
    UMeleeAttackComponent* MeleeAttack;
    UStaticMeshComponent* DropShadow;
    USphereComponent* Sphere;
    UAudioComponent* SwarmerIdle_Cue;

    void OnDeathBase();
    void ChangeVisibility(bool bNewVisibility);
    void OnFrozen(AActor* Source);
    void ExecuteUbergraph_ENE_Spider_Swarmer(int32 EntryPoint, bool K2Node_Event_bNewVisibility, FRotator CallFunc_GetSocketRotation_ReturnValue, FVector CallFunc_GetSocketLocation_ReturnValue, AActor* K2Node_Event_source, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
}

#endif
