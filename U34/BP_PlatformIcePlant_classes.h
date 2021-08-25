// BlueprintGeneratedClass BP_PlatformIcePlant.BP_PlatformIcePlant_C
// Size: 0x264 (Inherited: 0x220)
struct ABP_PlatformIcePlant_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x228(0x08)
	struct UTerrainPlacementComponent* terrainPlacement; // 0x230(0x08)
	struct UTerrainDetectComponent* TerrainDetect; // 0x238(0x08)
	struct UBillboardComponent* SpawnPoint; // 0x240(0x08)
	struct USimpleHealthComponent* SimpleHealth; // 0x248(0x08)
	struct UStaticMeshComponent* Body; // 0x250(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x258(0x08)
	float SpawnDelay; // 0x260(0x04)

	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function BP_PlatformIcePlant.BP_PlatformIcePlant_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature
	void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature(); // Function BP_PlatformIcePlant.BP_PlatformIcePlant_C.BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature
	void ExecuteUbergraph_BP_PlatformIcePlant(int32_t EntryPoint); // Function BP_PlatformIcePlant.BP_PlatformIcePlant_C.ExecuteUbergraph_BP_PlatformIcePlant
};

