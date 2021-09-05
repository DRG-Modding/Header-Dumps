// BlueprintGeneratedClass BP_XmasBauble_Item.BP_XmasBauble_Item_C
// Size: 0x28c (Inherited: 0x220)
struct ABP_XmasBauble_Item_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x228(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x230(0x08)
	USimpleHealthComponent* SimpleHealth; // 0x238(0x08)
	UTerrainDetectComponent* TerrainDetect; // 0x240(0x08)
	UStaticMeshComponent* StaticMesh; // 0x248(0x08)
	USceneComponent* DefaultSceneRoot; // 0x250(0x08)
	UParticleSystem* deathParticles; // 0x258(0x08)
	USoundCue* deathSound; // 0x260(0x08)
	TArray<UMaterialInterface*> Mats; // 0x268(0x10)
	UMaterialInterface* CurrentMaterial; // 0x278(0x08)
	FRotator RandomRotation; // 0x280(0x0c)

	void OnRep_RandomRotation();
	void OnRep_CurrentMaterial();
	void ReceiveBeginPlay();
	void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void OnTerrainPointRemoved();
	void BndEvt__StaticMesh_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult Hit);
	void ExecuteUbergraph_BP_XmasBauble_Item(int32_t EntryPoint);
};

