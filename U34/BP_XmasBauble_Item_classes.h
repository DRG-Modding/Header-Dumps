// BlueprintGeneratedClass BP_XmasBauble_Item.BP_XmasBauble_Item_C
// Size: 0x28c (Inherited: 0x220)
struct ABP_XmasBauble_Item_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UTerrainPlacementComponent* terrainPlacement; // 0x228(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x230(0x08)
	struct USimpleHealthComponent* SimpleHealth; // 0x238(0x08)
	struct UTerrainDetectComponent* TerrainDetect; // 0x240(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x248(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x250(0x08)
	struct UParticleSystem* deathParticles; // 0x258(0x08)
	struct USoundCue* deathSound; // 0x260(0x08)
	struct TArray<struct UMaterialInterface*> Mats; // 0x268(0x10)
	struct UMaterialInterface* CurrentMaterial; // 0x278(0x08)
	struct FRotator RandomRotation; // 0x280(0x0c)

	void OnRep_RandomRotation(); // Function BP_XmasBauble_Item.BP_XmasBauble_Item_C.OnRep_RandomRotation
	void OnRep_CurrentMaterial(); // Function BP_XmasBauble_Item.BP_XmasBauble_Item_C.OnRep_CurrentMaterial
	void ReceiveBeginPlay(); // Function BP_XmasBauble_Item.BP_XmasBauble_Item_C.ReceiveBeginPlay
	void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature(); // Function BP_XmasBauble_Item.BP_XmasBauble_Item_C.BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function BP_XmasBauble_Item.BP_XmasBauble_Item_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature
	void OnTerrainPointRemoved(); // Function BP_XmasBauble_Item.BP_XmasBauble_Item_C.OnTerrainPointRemoved
	void BndEvt__StaticMesh_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult Hit); // Function BP_XmasBauble_Item.BP_XmasBauble_Item_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature
	void ExecuteUbergraph_BP_XmasBauble_Item(int32_t EntryPoint); // Function BP_XmasBauble_Item.BP_XmasBauble_Item_C.ExecuteUbergraph_BP_XmasBauble_Item
};

