// BlueprintGeneratedClass ENE_BoughWasp_Swarm.ENE_BoughWasp_Swarm_C
// Size: 0x3e0 (Inherited: 0x3a0)
struct AENE_BoughWasp_Swarm_C : AInsectSwarmEnemy {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3a0(0x08)
	UStatusEffectTriggerComponent* StatusEffectTrigger1; // 0x3a8(0x08)
	USphereComponent* DamageReceiveCollider; // 0x3b0(0x08)
	USphereComponent* DamageInflictCollider; // 0x3b8(0x08)
	UParticleSystemComponent* P_InsectSwarm01_Death; // 0x3c0(0x08)
	UAudioComponent* Audio; // 0x3c8(0x08)
	UEnemyComponent* enemy; // 0x3d0(0x08)
	UParticleSystemComponent* P_InsectSwarm; // 0x3d8(0x08)

	bool GetIsTargetable();
	void UserConstructionScript();
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature(float amount);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_ENE_BoughWasp_Swarm(int32_t EntryPoint);
};

