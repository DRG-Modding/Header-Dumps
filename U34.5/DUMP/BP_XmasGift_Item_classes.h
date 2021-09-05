// BlueprintGeneratedClass BP_XmasGift_Item.BP_XmasGift_Item_C
// Size: 0x2b0 (Inherited: 0x220)
struct ABP_XmasGift_Item_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x228(0x08)
	USimpleHealthComponent* SimpleHealth; // 0x230(0x08)
	UTerrainDetectComponent* TerrainDetect; // 0x238(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x240(0x08)
	UStaticMeshComponent* StaticMesh; // 0x248(0x08)
	USceneComponent* DefaultSceneRoot; // 0x250(0x08)
	UParticleSystem* deathParticles; // 0x258(0x08)
	USoundCue* deathSound; // 0x260(0x08)
	TArray<UStaticMesh*> GiftOptions; // 0x268(0x10)
	USoundBase* HoHoHo; // 0x278(0x08)
	TArray<UMaterialInterface*> GiftMats; // 0x280(0x10)
	bool CanOpen; // 0x290(0x01)
	UStaticMesh* CurrentGiftOption; // 0x298(0x08)
	UMaterialInterface* CurrentMat1; // 0x2a0(0x08)
	UMaterialInterface* CurrentMat2; // 0x2a8(0x08)

	void RandomizeGift();
	void OnRep_CurrentMat2();
	void OnRep_CurrentMat1();
	void OnRep_CurrentGiftOption();
	void XmasLaugh(FVector Location);
	void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
	void ReceiveBeginPlay();
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void ExecuteUbergraph_BP_XmasGift_Item(int32_t EntryPoint);
};

