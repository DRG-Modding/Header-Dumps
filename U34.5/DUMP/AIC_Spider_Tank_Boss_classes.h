// BlueprintGeneratedClass AIC_Spider_Tank_Boss.AIC_Spider_Tank_Boss_C
// Size: 0x380 (Inherited: 0x374)
struct AAIC_Spider_Tank_Boss_C : AAIC_Spider_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x378(0x08)

	void OnArmorDestroyed(float EnrageDuration);
	void ReceivePossess(APawn* PossessedPawn);
	void ReceiveBeginPlay();
	void StartSpeedModifier();
	void ExecuteUbergraph_AIC_Spider_Tank_Boss(int32_t EntryPoint);
};

