// BlueprintGeneratedClass AIC_Spider_ExploderTank.AIC_Spider_ExploderTank_C
// Size: 0x380 (Inherited: 0x374)
struct AAIC_Spider_ExploderTank_C : AAIC_Spider_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x378(0x08)

	void ReceivePossess(APawn* PossessedPawn);
	void TookDamage(float amount);
	void ExecuteUbergraph_AIC_Spider_ExploderTank(int32_t EntryPoint);
};

