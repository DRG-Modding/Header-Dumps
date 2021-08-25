// BlueprintGeneratedClass AIC_Spider_Tank_Boss.AIC_Spider_Tank_Boss_C
// Size: 0x380 (Inherited: 0x374)
struct AAIC_Spider_Tank_Boss_C : AAIC_Spider_C {
	char UnknownData_374[0x4]; // 0x374(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x378(0x08)

	void OnArmorDestroyed(float EnrageDuration); // Function AIC_Spider_Tank_Boss.AIC_Spider_Tank_Boss_C.OnArmorDestroyed
	void ReceivePossess(struct APawn* PossessedPawn); // Function AIC_Spider_Tank_Boss.AIC_Spider_Tank_Boss_C.ReceivePossess
	void ReceiveBeginPlay(); // Function AIC_Spider_Tank_Boss.AIC_Spider_Tank_Boss_C.ReceiveBeginPlay
	void StartSpeedModifier(); // Function AIC_Spider_Tank_Boss.AIC_Spider_Tank_Boss_C.StartSpeedModifier
	void ExecuteUbergraph_AIC_Spider_Tank_Boss(int32_t EntryPoint); // Function AIC_Spider_Tank_Boss.AIC_Spider_Tank_Boss_C.ExecuteUbergraph_AIC_Spider_Tank_Boss
};

