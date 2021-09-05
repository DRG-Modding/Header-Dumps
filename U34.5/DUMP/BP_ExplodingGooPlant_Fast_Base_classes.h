// BlueprintGeneratedClass BP_ExplodingGooPlant_Fast_Base.BP_ExplodingGooPlant_Fast_Base_C
// Size: 0x280 (Inherited: 0x220)
struct ABP_ExplodingGooPlant_Fast_Base_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	USpawnActorWithDebrisPosComponent* SpawnActorWithDebrisPos; // 0x228(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x230(0x08)
	UTerrainDetectComponent* TerrainDetect; // 0x238(0x08)
	UOutlineComponent* outline; // 0x240(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x248(0x08)
	UPathfinderCollisionComponent* PathfinderCollision; // 0x250(0x08)
	UPointLightComponent* PointLight; // 0x258(0x08)
	USimpleHealthComponent* SimpleHealth; // 0x260(0x08)
	UStaticMeshComponent* Body; // 0x268(0x08)
	USceneComponent* DefaultSceneRoot; // 0x270(0x08)
	float Damage; // 0x278(0x04)
	float BlastRadius; // 0x27c(0x04)

	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
	void ExecuteUbergraph_BP_ExplodingGooPlant_Fast_Base(int32_t EntryPoint);
};

