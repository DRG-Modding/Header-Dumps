// BlueprintGeneratedClass AIC_InsectSwarm.AIC_InsectSwarm_C
// Size: 0x368 (Inherited: 0x358)
struct AAIC_InsectSwarm_C : AFSDAIController {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	struct FName IsAlertedKey; // 0x360(0x08)

	void ReceiveBeginPlay(); // Function AIC_InsectSwarm.AIC_InsectSwarm_C.ReceiveBeginPlay
	void ReceivePossess(struct APawn* PossessedPawn); // Function AIC_InsectSwarm.AIC_InsectSwarm_C.ReceivePossess
	void ExecuteUbergraph_AIC_InsectSwarm(int32_t EntryPoint); // Function AIC_InsectSwarm.AIC_InsectSwarm_C.ExecuteUbergraph_AIC_InsectSwarm
};

