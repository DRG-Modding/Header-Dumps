// BlueprintGeneratedClass ENE_Spider_Tank_Generic.ENE_Spider_Tank_Generic_C
// Size: 0x558 (Inherited: 0x53c)
struct AENE_Spider_Tank_Generic_C : AENE_Spider_Tank_Base_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x540(0x08)
	UMeleeAttackComponent* BiteAttack; // 0x548(0x08)
	UMeleeAttackComponent* StabAttack; // 0x550(0x08)

	void ReceiveBeginPlay();
	void MakeElite();
	void ExecuteUbergraph_ENE_Spider_Tank_Generic(int32_t EntryPoint);
};

