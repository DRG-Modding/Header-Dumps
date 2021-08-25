// BlueprintGeneratedClass BP_XmasGift_Item.BP_XmasGift_Item_C
// Size: 0x2b0 (Inherited: 0x220)
struct ABP_XmasGift_Item_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x228(0x08)
	struct USimpleHealthComponent* SimpleHealth; // 0x230(0x08)
	struct UTerrainDetectComponent* TerrainDetect; // 0x238(0x08)
	struct UTerrainPlacementComponent* terrainPlacement; // 0x240(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x248(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x250(0x08)
	struct UParticleSystem* deathParticles; // 0x258(0x08)
	struct USoundCue* deathSound; // 0x260(0x08)
	struct TArray<struct UStaticMesh*> GiftOptions; // 0x268(0x10)
	struct USoundBase* HoHoHo; // 0x278(0x08)
	struct TArray<struct UMaterialInterface*> GiftMats; // 0x280(0x10)
	bool CanOpen; // 0x290(0x01)
	char UnknownData_291[0x7]; // 0x291(0x07)
	struct UStaticMesh* CurrentGiftOption; // 0x298(0x08)
	struct UMaterialInterface* CurrentMat1; // 0x2a0(0x08)
	struct UMaterialInterface* CurrentMat2; // 0x2a8(0x08)

	void RandomizeGift(); // Function BP_XmasGift_Item.BP_XmasGift_Item_C.RandomizeGift
	void OnRep_CurrentMat2(); // Function BP_XmasGift_Item.BP_XmasGift_Item_C.OnRep_CurrentMat2
	void OnRep_CurrentMat1(); // Function BP_XmasGift_Item.BP_XmasGift_Item_C.OnRep_CurrentMat1
	void OnRep_CurrentGiftOption(); // Function BP_XmasGift_Item.BP_XmasGift_Item_C.OnRep_CurrentGiftOption
	void XmasLaugh(struct FVector Location); // Function BP_XmasGift_Item.BP_XmasGift_Item_C.XmasLaugh
	void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature(); // Function BP_XmasGift_Item.BP_XmasGift_Item_C.BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature
	void ReceiveBeginPlay(); // Function BP_XmasGift_Item.BP_XmasGift_Item_C.ReceiveBeginPlay
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function BP_XmasGift_Item.BP_XmasGift_Item_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature
	void ExecuteUbergraph_BP_XmasGift_Item(int32_t EntryPoint); // Function BP_XmasGift_Item.BP_XmasGift_Item_C.ExecuteUbergraph_BP_XmasGift_Item
};

