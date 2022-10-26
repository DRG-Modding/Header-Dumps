#ifndef UE4SS_SDK_ENE_FacilityTurret_Barrier_HPP
#define UE4SS_SDK_ENE_FacilityTurret_Barrier_HPP

class AENE_FacilityTurret_Barrier_C : public AENE_FacilityTurret_Spinning_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCapsuleComponent* BlockPlayers;
    class UStaticMeshComponent* Base;
    class UAudioComponent* BarrierTurretFire_Cue;
    class UProjectileAttackComponent* ProjectileAttack;
    TArray<FName> MuzzleSockets;

    void OnAttack();
    void BndEvt__ProjectileAttack_K2Node_ComponentBoundEvent_0_ProjectileAttackDelegate__DelegateSignature();
    void ExecuteUbergraph_ENE_FacilityTurret_Barrier(int32 EntryPoint);
};

#endif
