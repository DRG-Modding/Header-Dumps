// BlueprintGeneratedClass BP_Mushroom_Base.BP_Mushroom_Base_C
// Size: 0x278 (Inherited: 0x220)
struct ABP_Mushroom_Base_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UTerrainDetectComponent* TerrainDetect; // 0x228(0x08)
	struct UTerrainPlacementComponent* terrainPlacement; // 0x230(0x08)
	struct USimpleHealthComponent* SimpleHealth; // 0x238(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x240(0x08)
	struct UPathfinderCollisionComponent* PathfinderCollision; // 0x248(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x250(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x258(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x260(0x08)
	struct FScaledEffect Explode Effect; // 0x268(0x10)

	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function BP_Mushroom_Base.BP_Mushroom_Base_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature
	void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature(); // Function BP_Mushroom_Base.BP_Mushroom_Base_C.BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature
	void OnTerrainPointRemoved(); // Function BP_Mushroom_Base.BP_Mushroom_Base_C.OnTerrainPointRemoved
	void ExecuteUbergraph_BP_Mushroom_Base(int32_t EntryPoint); // Function BP_Mushroom_Base.BP_Mushroom_Base_C.ExecuteUbergraph_BP_Mushroom_Base
};

