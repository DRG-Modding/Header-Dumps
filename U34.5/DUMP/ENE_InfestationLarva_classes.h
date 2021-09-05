// BlueprintGeneratedClass ENE_InfestationLarva.ENE_InfestationLarva_C
// Size: 0x3d8 (Inherited: 0x398)
struct AENE_InfestationLarva_C : AEnemyDeepPathfinderCharacter {
	FPointerToUberGraphFrame UberGraphFrame; // 0x398(0x08)
	UMeleeAttackComponent* MeleeAttack; // 0x3a0(0x08)
	UEnemyComponent* enemy; // 0x3a8(0x08)
	UCapsuleComponent* Capsule; // 0x3b0(0x08)
	UOutlineComponent* outline; // 0x3b8(0x08)
	UStaticMeshComponent* DropShadow; // 0x3c0(0x08)
	UParticleSystemComponent* P_Larva_Move_Spray; // 0x3c8(0x08)
	UDamageComponent* Damage; // 0x3d0(0x08)

	void OnMessageAI(FName TriggerName);
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void ExecuteUbergraph_ENE_InfestationLarva(int32_t EntryPoint);
};

