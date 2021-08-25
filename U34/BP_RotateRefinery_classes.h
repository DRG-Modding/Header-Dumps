// BlueprintGeneratedClass BP_RotateRefinery.BP_RotateRefinery_C
// Size: 0x240 (Inherited: 0x220)
struct ABP_RotateRefinery_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	struct TArray<struct AActor*> Actors To Rotate; // 0x230(0x10)

	void ReceiveBeginPlay(); // Function BP_RotateRefinery.BP_RotateRefinery_C.ReceiveBeginPlay
	void ReceiveEndPlay(char EndPlayReason); // Function BP_RotateRefinery.BP_RotateRefinery_C.ReceiveEndPlay
	void ExecuteUbergraph_BP_RotateRefinery(int32_t EntryPoint); // Function BP_RotateRefinery.BP_RotateRefinery_C.ExecuteUbergraph_BP_RotateRefinery
};

