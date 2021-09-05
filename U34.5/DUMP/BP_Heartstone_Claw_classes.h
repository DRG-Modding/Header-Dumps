// BlueprintGeneratedClass BP_Heartstone_Claw.BP_Heartstone_Claw_C
// Size: 0x264 (Inherited: 0x220)
struct ABP_Heartstone_Claw_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	ULevelGenerationCarverComponent* LevelGenerationCarver; // 0x228(0x08)
	ULevelGenerationDebris* LevelGenerationDebris; // 0x230(0x08)
	UTerrainDetectComponent* TerrainDetect1; // 0x238(0x08)
	UStaticMeshComponent* Spike_Carver; // 0x240(0x08)
	UTerrainDetectComponent* TerrainDetect; // 0x248(0x08)
	USceneComponent* DefaultSceneRoot; // 0x250(0x08)
	bool NoGround; // 0x258(0x01)
	float RelativeScaleMin; // 0x25c(0x04)
	float RelativeScaleMax; // 0x260(0x04)

	void ReceiveBeginPlay();
	void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
	void BndEvt__TerrainDetect1_K2Node_ComponentBoundEvent_1_PointRemovedEvent__DelegateSignature();
	void CheckForGroundAndCarve();
	void ExecuteUbergraph_BP_Heartstone_Claw(int32_t EntryPoint);
};

