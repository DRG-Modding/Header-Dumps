// BlueprintGeneratedClass AIC_Spider_Tank_Base.AIC_Spider_Tank_Base_C
// Size: 0x381 (Inherited: 0x374)
struct AAIC_Spider_Tank_Base_C : AAIC_Spider_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x378(0x08)
	bool HasSpecialAttack; // 0x380(0x01)

	void ReceiveBeginPlay();
	void ExecuteUbergraph_AIC_Spider_Tank_Base(int32_t EntryPoint);
};

