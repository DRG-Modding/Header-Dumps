// BlueprintGeneratedClass ENE_BoughWasp_Swarm.ENE_BoughWasp_Swarm_C
// Size: 0x3e0 (Inherited: 0x3a0)
struct AENE_BoughWasp_Swarm_C : AInsectSwarmEnemy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3a0(0x08)
	struct UStatusEffectTriggerComponent* StatusEffectTrigger1; // 0x3a8(0x08)
	struct USphereComponent* DamageReceiveCollider; // 0x3b0(0x08)
	struct USphereComponent* DamageInflictCollider; // 0x3b8(0x08)
	struct UParticleSystemComponent* P_InsectSwarm01_Death; // 0x3c0(0x08)
	struct UAudioComponent* Audio; // 0x3c8(0x08)
	struct UEnemyComponent* enemy; // 0x3d0(0x08)
	struct UParticleSystemComponent* P_InsectSwarm; // 0x3d8(0x08)

	bool GetIsTargetable(); // Function ENE_BoughWasp_Swarm.ENE_BoughWasp_Swarm_C.GetIsTargetable
	void UserConstructionScript(); // Function ENE_BoughWasp_Swarm.ENE_BoughWasp_Swarm_C.UserConstructionScript
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function ENE_BoughWasp_Swarm.ENE_BoughWasp_Swarm_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature(float amount); // Function ENE_BoughWasp_Swarm.ENE_BoughWasp_Swarm_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature
	void ReceiveBeginPlay(); // Function ENE_BoughWasp_Swarm.ENE_BoughWasp_Swarm_C.ReceiveBeginPlay
	void ExecuteUbergraph_ENE_BoughWasp_Swarm(int32_t EntryPoint); // Function ENE_BoughWasp_Swarm.ENE_BoughWasp_Swarm_C.ExecuteUbergraph_ENE_BoughWasp_Swarm
};

