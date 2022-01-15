#ifndef UE4SS_SDK_ENE_FacilityTurret_Barrier_HPP
#define UE4SS_SDK_ENE_FacilityTurret_Barrier_HPP

class AENE_FacilityTurret_Barrier_C : UENE_FacilityTurret_Spinning_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UCapsuleComponent* BlockPlayers;
    UStaticMeshComponent* Base;
    UAudioComponent* BarrierTurretFire_Cue;
    UProjectileAttackComponent* ProjectileAttack;

    void OnAttack();
    void BndEvt__ProjectileAttack_K2Node_ComponentBoundEvent_0_ProjectileAttackDelegate__DelegateSignature();
    void ExecuteUbergraph_ENE_FacilityTurret_Barrier(int32 EntryPoint, UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue_1, UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue_2);
}

#endif
