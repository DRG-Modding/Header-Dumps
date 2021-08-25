// BlueprintGeneratedClass BP_ExplodingGooPlant_Fast_Base.BP_ExplodingGooPlant_Fast_Base_C
// Size: 0x280 (Inherited: 0x220)
struct ABP_ExplodingGooPlant_Fast_Base_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USpawnActorWithDebrisPosComponent* SpawnActorWithDebrisPos; // 0x228(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x230(0x08)
	struct UTerrainDetectComponent* TerrainDetect; // 0x238(0x08)
	struct UOutlineComponent* outline; // 0x240(0x08)
	struct UTerrainPlacementComponent* terrainPlacement; // 0x248(0x08)
	struct UPathfinderCollisionComponent* PathfinderCollision; // 0x250(0x08)
	struct UPointLightComponent* PointLight; // 0x258(0x08)
	struct USimpleHealthComponent* SimpleHealth; // 0x260(0x08)
	struct UStaticMeshComponent* Body; // 0x268(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x270(0x08)
	float Damage; // 0x278(0x04)
	float BlastRadius; // 0x27c(0x04)

	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function BP_ExplodingGooPlant_Fast_Base.BP_ExplodingGooPlant_Fast_Base_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature
	void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature(); // Function BP_ExplodingGooPlant_Fast_Base.BP_ExplodingGooPlant_Fast_Base_C.BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature
	void ExecuteUbergraph_BP_ExplodingGooPlant_Fast_Base(int32_t EntryPoint); // Function BP_ExplodingGooPlant_Fast_Base.BP_ExplodingGooPlant_Fast_Base_C.ExecuteUbergraph_BP_ExplodingGooPlant_Fast_Base
};

