#ifndef UE4SS_SDK_ENE_FacilityTurret_Sniper_HPP
#define UE4SS_SDK_ENE_FacilityTurret_Sniper_HPP

class AENE_FacilityTurret_Sniper_C : public AENE_FacilityTurret_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* AoECollision;
    class UParticleSystemComponent* BeamLockOn;
    class UProjectileAttackComponent* SniperAttack;
    class UPointLightComponent* PointLight;
    class UPointLightComponent* PointLight2;
    class UPointLightComponent* PointLight1;
    class UNiagaraComponent* LockonParticles;
    class UParticleSystemComponent* Beam;
    float Timer;

    void OnEngagedChanged(bool engaged);
    void ReceiveBeginPlay();
    void OnLockedOn(bool lockedOn);
    void BndEvt__Attack_K2Node_ComponentBoundEvent_0_ProjectileAttackDelegate__DelegateSignature();
    void OnAttack();
    void All_SpawnMuzzleFlash();
    void ExecuteUbergraph_ENE_FacilityTurret_Sniper(int32 EntryPoint);
};

#endif
