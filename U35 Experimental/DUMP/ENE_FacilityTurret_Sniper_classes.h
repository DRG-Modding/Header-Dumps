// BlueprintGeneratedClass ENE_FacilityTurret_Sniper.ENE_FacilityTurret_Sniper_C
// Size: 0x5ac (Inherited: 0x568)
struct AENE_FacilityTurret_Sniper_C : AENE_FacilityTurret_Base_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x568(0x08)
	UParticleSystemComponent* BeamLockOn; // 0x570(0x08)
	UProjectileAttackComponent* SniperAttack; // 0x578(0x08)
	UPointLightComponent* PointLight; // 0x580(0x08)
	UPointLightComponent* PointLight2; // 0x588(0x08)
	UPointLightComponent* PointLight1; // 0x590(0x08)
	UNiagaraComponent* LockonParticles; // 0x598(0x08)
	UParticleSystemComponent* Beam; // 0x5a0(0x08)
	float Timer; // 0x5a8(0x04)

	void OnEngagedChanged(bool engaged);
	void ReceiveBeginPlay();
	void OnLockedOn(bool lockedOn);
	void BndEvt__Attack_K2Node_ComponentBoundEvent_0_ProjectileAttackDelegate__DelegateSignature();
	void OnAttack();
	void All_SpawnMuzzleFlash();
	void ExecuteUbergraph_ENE_FacilityTurret_Sniper(int32_t EntryPoint);
};

