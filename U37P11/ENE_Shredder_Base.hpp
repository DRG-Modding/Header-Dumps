#ifndef UE4SS_SDK_ENE_Shredder_Base_HPP
#define UE4SS_SDK_ENE_Shredder_Base_HPP

class AENE_Shredder_Base_C : public AShredder
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* FacilityShredderDeath2nd_Cue;
    class UAudioComponent* FacilityShredderDeath1st_Cue;
    class UNiagaraComponent* SpawnParticles;
    class UParticleSystemComponent* P_TMP_Shredder_Trail;
    class UPawnStatsComponent* PawnStats;
    class UNiagaraComponent* NS_Trail;
    class UMeleeAttackComponent* MeleeAttack;
    class UPawnAlertComponent* PawnAlert;
    class UAudioComponent* IdleSound;
    class UOutlineComponent* outline;
    class UPawnSensingComponent* PawnSensing;
    class USphereComponent* Sphere;

    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void OnFrozen(class AActor* Source);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_ENE_Shredder_Base(int32 EntryPoint);
};

#endif
