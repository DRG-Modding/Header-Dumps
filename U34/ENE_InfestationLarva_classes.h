// BlueprintGeneratedClass ENE_InfestationLarva.ENE_InfestationLarva_C
// Size: 0x3d8 (Inherited: 0x398)
struct AENE_InfestationLarva_C : AEnemyDeepPathfinderCharacter {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x398(0x08)
	struct UMeleeAttackComponent* MeleeAttack; // 0x3a0(0x08)
	struct UEnemyComponent* enemy; // 0x3a8(0x08)
	struct UCapsuleComponent* Capsule; // 0x3b0(0x08)
	struct UOutlineComponent* outline; // 0x3b8(0x08)
	struct UStaticMeshComponent* DropShadow; // 0x3c0(0x08)
	struct UParticleSystemComponent* P_Larva_Move_Spray; // 0x3c8(0x08)
	struct UDamageComponent* Damage; // 0x3d0(0x08)

	void OnMessageAI(struct FName TriggerName); // Function ENE_InfestationLarva.ENE_InfestationLarva_C.OnMessageAI
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function ENE_InfestationLarva.ENE_InfestationLarva_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature
	void ExecuteUbergraph_ENE_InfestationLarva(int32_t EntryPoint); // Function ENE_InfestationLarva.ENE_InfestationLarva_C.ExecuteUbergraph_ENE_InfestationLarva
};

