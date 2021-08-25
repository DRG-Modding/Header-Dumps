// BlueprintGeneratedClass BP_RotateDropPod.BP_RotateDropPod_C
// Size: 0x240 (Inherited: 0x220)
struct ABP_RotateDropPod_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	struct TArray<struct AActor*> Actors To Rotate; // 0x230(0x10)

	void ReceiveBeginPlay(); // Function BP_RotateDropPod.BP_RotateDropPod_C.ReceiveBeginPlay
	void ReceiveEndPlay(char EndPlayReason); // Function BP_RotateDropPod.BP_RotateDropPod_C.ReceiveEndPlay
	void ExecuteUbergraph_BP_RotateDropPod(int32_t EntryPoint); // Function BP_RotateDropPod.BP_RotateDropPod_C.ExecuteUbergraph_BP_RotateDropPod
};

