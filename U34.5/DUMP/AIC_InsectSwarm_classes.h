// BlueprintGeneratedClass AIC_InsectSwarm.AIC_InsectSwarm_C
// Size: 0x368 (Inherited: 0x358)
struct AAIC_InsectSwarm_C : AFSDAIController {
	FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	FName IsAlertedKey; // 0x360(0x08)

	void ReceiveBeginPlay();
	void ReceivePossess(APawn* PossessedPawn);
	void ExecuteUbergraph_AIC_InsectSwarm(int32_t EntryPoint);
};

