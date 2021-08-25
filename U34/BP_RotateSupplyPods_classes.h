// BlueprintGeneratedClass BP_RotateSupplyPods.BP_RotateSupplyPods_C
// Size: 0x240 (Inherited: 0x220)
struct ABP_RotateSupplyPods_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	struct TArray<struct AActor*> Actors To Rotate; // 0x230(0x10)

	void ReceiveBeginPlay(); // Function BP_RotateSupplyPods.BP_RotateSupplyPods_C.ReceiveBeginPlay
	void ReceiveEndPlay(char EndPlayReason); // Function BP_RotateSupplyPods.BP_RotateSupplyPods_C.ReceiveEndPlay
	void ExecuteUbergraph_BP_RotateSupplyPods(int32_t EntryPoint); // Function BP_RotateSupplyPods.BP_RotateSupplyPods_C.ExecuteUbergraph_BP_RotateSupplyPods
};

