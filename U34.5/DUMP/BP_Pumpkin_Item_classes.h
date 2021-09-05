// BlueprintGeneratedClass BP_Pumpkin_Item.BP_Pumpkin_Item_C
// Size: 0x279 (Inherited: 0x220)
struct ABP_Pumpkin_Item_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x228(0x08)
	USimpleHealthComponent* SimpleHealth; // 0x230(0x08)
	UTerrainDetectComponent* TerrainDetect; // 0x238(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x240(0x08)
	UStaticMeshComponent* StaticMesh; // 0x248(0x08)
	USceneComponent* DefaultSceneRoot; // 0x250(0x08)
	UParticleSystem* deathParticles; // 0x258(0x08)
	USoundCue* deathSound; // 0x260(0x08)
	TArray<UStaticMesh*> PumpkinOptions; // 0x268(0x10)
	char PumpkinMesh; // 0x278(0x01)

	void OnRep_PumpkinMesh();
	void ReceiveBeginPlay();
	void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void OnTerrainPointRemoved();
	void EvilLaugh(FVector Location);
	void ExecuteUbergraph_BP_Pumpkin_Item(int32_t EntryPoint);
};

