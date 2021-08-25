// BlueprintGeneratedClass BP_SlowMotion.BP_SlowMotion_C
// Size: 0x230 (Inherited: 0x220)
struct ABP_SlowMotion_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x228(0x08)

	void ReceiveBeginPlay(); // Function BP_SlowMotion.BP_SlowMotion_C.ReceiveBeginPlay
	void ReceiveEndPlay(char EndPlayReason); // Function BP_SlowMotion.BP_SlowMotion_C.ReceiveEndPlay
	void ExecuteUbergraph_BP_SlowMotion(int32_t EntryPoint); // Function BP_SlowMotion.BP_SlowMotion_C.ExecuteUbergraph_BP_SlowMotion
};

