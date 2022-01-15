#ifndef UE4SS_SDK_ENE_FacilityTurret_Sniper_HPP
#define UE4SS_SDK_ENE_FacilityTurret_Sniper_HPP

class AENE_FacilityTurret_Sniper_C : UENE_FacilityTurret_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBoxComponent* AoECollision;
    UParticleSystemComponent* BeamLockOn;
    UProjectileAttackComponent* SniperAttack;
    UPointLightComponent* PointLight;
    UPointLightComponent* PointLight2;
    UPointLightComponent* PointLight1;
    UNiagaraComponent* LockonParticles;
    UParticleSystemComponent* Beam;
    float Timer;

    void OnEngagedChanged(bool engaged);
    void ReceiveBeginPlay();
    void OnLockedOn(bool lockedOn);
    void BndEvt__Attack_K2Node_ComponentBoundEvent_0_ProjectileAttackDelegate__DelegateSignature();
    void OnAttack();
    void All_SpawnMuzzleFlash();
    void ExecuteUbergraph_ENE_FacilityTurret_Sniper(int32 EntryPoint, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool K2Node_Event_engaged, bool K2Node_Event_lockedOn, UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue);
}

#endif
