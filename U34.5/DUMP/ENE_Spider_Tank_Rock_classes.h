// BlueprintGeneratedClass ENE_Spider_Tank_Rock.ENE_Spider_Tank_Rock_C
// Size: 0x558 (Inherited: 0x53c)
struct AENE_Spider_Tank_Rock_C : AENE_Spider_Tank_Base_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x540(0x08)
	UMeleeAttackComponent* BiteAttack; // 0x548(0x08)
	UMeleeAttackComponent* StabAttack; // 0x550(0x08)

	bool GetIsTargetable();
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSigDetailed__DelegateSignature(UHealthComponent* HealthComponent, float damageAmount, UDamageClass* DamageClass, AActor* damageCause, AController* Instigator, UFSDPhysicalMaterial* PhysicalMaterial);
	void Play Body Death Effects();
	void ExecuteUbergraph_ENE_Spider_Tank_Rock(int32_t EntryPoint);
};

