// BlueprintGeneratedClass BP_CallOldSupplyPod.BP_CallOldSupplyPod_C
// Size: 0x248 (Inherited: 0x220)
struct ABP_CallOldSupplyPod_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	struct FString Spawn Tag; // 0x230(0x10)
	struct AActor* Supply Pod; // 0x240(0x08)

	void Spawn Resupply Pod(struct AActor* Spawned Pod); // Function BP_CallOldSupplyPod.BP_CallOldSupplyPod_C.Spawn Resupply Pod
	void ReceiveBeginPlay(); // Function BP_CallOldSupplyPod.BP_CallOldSupplyPod_C.ReceiveBeginPlay
	void ExecuteUbergraph_BP_CallOldSupplyPod(int32_t EntryPoint); // Function BP_CallOldSupplyPod.BP_CallOldSupplyPod_C.ExecuteUbergraph_BP_CallOldSupplyPod
};

