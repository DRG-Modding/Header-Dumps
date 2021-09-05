// BlueprintGeneratedClass ENE_Spider_Tank_Ice.ENE_Spider_Tank_Ice_C
// Size: 0x570 (Inherited: 0x558)
struct AENE_Spider_Tank_Ice_C : AENE_Spider_Tank_Generic_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x558(0x08)
	UCapsuleComponent* ConeCapsule; // 0x560(0x08)
	UBP_ConeAttackBase_C* ConeAttack; // 0x568(0x08)

	void ReceiveBeginPlay();
	void ExecuteUbergraph_ENE_Spider_Tank_Ice(int32_t EntryPoint);
};

