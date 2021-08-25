// BlueprintGeneratedClass BP_Heartstone_Claw.BP_Heartstone_Claw_C
// Size: 0x264 (Inherited: 0x220)
struct ABP_Heartstone_Claw_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct ULevelGenerationCarverComponent* LevelGenerationCarver; // 0x228(0x08)
	struct ULevelGenerationDebris* LevelGenerationDebris; // 0x230(0x08)
	struct UTerrainDetectComponent* TerrainDetect1; // 0x238(0x08)
	struct UStaticMeshComponent* Spike_Carver; // 0x240(0x08)
	struct UTerrainDetectComponent* TerrainDetect; // 0x248(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x250(0x08)
	bool NoGround; // 0x258(0x01)
	char UnknownData_259[0x3]; // 0x259(0x03)
	float RelativeScaleMin; // 0x25c(0x04)
	float RelativeScaleMax; // 0x260(0x04)

	void ReceiveBeginPlay(); // Function BP_Heartstone_Claw.BP_Heartstone_Claw_C.ReceiveBeginPlay
	void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature(); // Function BP_Heartstone_Claw.BP_Heartstone_Claw_C.BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature
	void BndEvt__TerrainDetect1_K2Node_ComponentBoundEvent_1_PointRemovedEvent__DelegateSignature(); // Function BP_Heartstone_Claw.BP_Heartstone_Claw_C.BndEvt__TerrainDetect1_K2Node_ComponentBoundEvent_1_PointRemovedEvent__DelegateSignature
	void CheckForGroundAndCarve(); // Function BP_Heartstone_Claw.BP_Heartstone_Claw_C.CheckForGroundAndCarve
	void ExecuteUbergraph_BP_Heartstone_Claw(int32_t EntryPoint); // Function BP_Heartstone_Claw.BP_Heartstone_Claw_C.ExecuteUbergraph_BP_Heartstone_Claw
};

