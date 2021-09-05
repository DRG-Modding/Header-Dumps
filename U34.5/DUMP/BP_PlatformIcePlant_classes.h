// BlueprintGeneratedClass BP_PlatformIcePlant.BP_PlatformIcePlant_C
// Size: 0x264 (Inherited: 0x220)
struct ABP_PlatformIcePlant_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x228(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x230(0x08)
	UTerrainDetectComponent* TerrainDetect; // 0x238(0x08)
	UBillboardComponent* SpawnPoint; // 0x240(0x08)
	USimpleHealthComponent* SimpleHealth; // 0x248(0x08)
	UStaticMeshComponent* Body; // 0x250(0x08)
	USceneComponent* DefaultSceneRoot; // 0x258(0x08)
	float SpawnDelay; // 0x260(0x04)

	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
	void ExecuteUbergraph_BP_PlatformIcePlant(int32_t EntryPoint);
};

