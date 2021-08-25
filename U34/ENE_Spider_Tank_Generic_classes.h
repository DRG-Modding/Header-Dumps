// BlueprintGeneratedClass ENE_Spider_Tank_Generic.ENE_Spider_Tank_Generic_C
// Size: 0x558 (Inherited: 0x53c)
struct AENE_Spider_Tank_Generic_C : AENE_Spider_Tank_Base_C {
	char UnknownData_53C[0x4]; // 0x53c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x540(0x08)
	struct UMeleeAttackComponent* BiteAttack; // 0x548(0x08)
	struct UMeleeAttackComponent* StabAttack; // 0x550(0x08)

	void ReceiveBeginPlay(); // Function ENE_Spider_Tank_Generic.ENE_Spider_Tank_Generic_C.ReceiveBeginPlay
	void MakeElite(); // Function ENE_Spider_Tank_Generic.ENE_Spider_Tank_Generic_C.MakeElite
	void ExecuteUbergraph_ENE_Spider_Tank_Generic(int32_t EntryPoint); // Function ENE_Spider_Tank_Generic.ENE_Spider_Tank_Generic_C.ExecuteUbergraph_ENE_Spider_Tank_Generic
};

