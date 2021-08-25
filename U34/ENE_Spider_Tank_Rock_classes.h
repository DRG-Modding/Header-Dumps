// BlueprintGeneratedClass ENE_Spider_Tank_Rock.ENE_Spider_Tank_Rock_C
// Size: 0x558 (Inherited: 0x53c)
struct AENE_Spider_Tank_Rock_C : AENE_Spider_Tank_Base_C {
	char UnknownData_53C[0x4]; // 0x53c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x540(0x08)
	struct UMeleeAttackComponent* BiteAttack; // 0x548(0x08)
	struct UMeleeAttackComponent* StabAttack; // 0x550(0x08)

	bool GetIsTargetable(); // Function ENE_Spider_Tank_Rock.ENE_Spider_Tank_Rock_C.GetIsTargetable
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSigDetailed__DelegateSignature(struct UHealthComponent* HealthComponent, float damageAmount, struct UDamageClass* DamageClass, struct AActor* damageCause, struct AController* Instigator, struct UFSDPhysicalMaterial* PhysicalMaterial); // Function ENE_Spider_Tank_Rock.ENE_Spider_Tank_Rock_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSigDetailed__DelegateSignature
	void Play Body Death Effects(); // Function ENE_Spider_Tank_Rock.ENE_Spider_Tank_Rock_C.Play Body Death Effects
	void ExecuteUbergraph_ENE_Spider_Tank_Rock(int32_t EntryPoint); // Function ENE_Spider_Tank_Rock.ENE_Spider_Tank_Rock_C.ExecuteUbergraph_ENE_Spider_Tank_Rock
};

