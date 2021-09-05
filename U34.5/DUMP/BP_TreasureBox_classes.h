// BlueprintGeneratedClass BP_TreasureBox.BP_TreasureBox_C
// Size: 0x409 (Inherited: 0x2f0)
struct ABP_TreasureBox_C : ATreasureBox {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	UBoxComponent* UseBox; // 0x2f8(0x08)
	UBoxComponent* Box; // 0x300(0x08)
	UTerrainDetectComponent* TerrainDetect; // 0x308(0x08)
	UDropToTerrainComponent* DropToTerrain; // 0x310(0x08)
	UAudioComponent* ChestIdle_Cue; // 0x318(0x08)
	UPointLightComponent* PointLight1; // 0x320(0x08)
	UPointLightComponent* PointLight; // 0x328(0x08)
	UStaticMeshComponent* LightCone; // 0x330(0x08)
	USpotLightComponent* SpotLight; // 0x338(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x340(0x08)
	UOutlineComponent* outline; // 0x348(0x08)
	UParticleSystemComponent* P_TreasureChest_HolloStreaks; // 0x350(0x08)
	USceneComponent* Minerals Spawn Point; // 0x358(0x08)
	UStaticMeshComponent* FrontPlane; // 0x360(0x08)
	UStaticMeshComponent* BackPlane; // 0x368(0x08)
	float TurnDownLight_NewTrack_0_1A0AF79145F35FAD9E2421B320EBDF90; // 0x370(0x04)
	enum class ETimelineDirection TurnDownLight__Direction_1A0AF79145F35FAD9E2421B320EBDF90; // 0x374(0x01)
	UTimelineComponent* TurnDownLight; // 0x378(0x08)
	float TurnUpLight_NewTrack_0_7FB98785445BF3786932D7B67BEC0DF8; // 0x380(0x04)
	enum class ETimelineDirection TurnUpLight__Direction_7FB98785445BF3786932D7B67BEC0DF8; // 0x384(0x01)
	UTimelineComponent* TurnUpLight; // 0x388(0x08)
	float Grow_Hologram_Y_9A21ED754CE563FC34120DB5BCEE177C; // 0x390(0x04)
	float Grow_Hologram_X_9A21ED754CE563FC34120DB5BCEE177C; // 0x394(0x04)
	float Grow_Hologram_Z_9A21ED754CE563FC34120DB5BCEE177C; // 0x398(0x04)
	enum class ETimelineDirection Grow_Hologram__Direction_9A21ED754CE563FC34120DB5BCEE177C; // 0x39c(0x01)
	UTimelineComponent* Grow Hologram; // 0x3a0(0x08)
	UParticleSystem* ActivatedParticles; // 0x3a8(0x08)
	USoundCue* ActivatedSound; // 0x3b0(0x08)
	TArray<UResourceData*> Loot; // 0x3b8(0x10)
	FVector2D ChunkValueRange; // 0x3c8(0x08)
	FVector2D ChunkCountRange; // 0x3d0(0x08)
	TArray<UResourceData*> ResourceTypes; // 0x3d8(0x10)
	int32_t ResourcesToSpawn; // 0x3e8(0x04)
	bool Hammered; // 0x3ec(0x01)
	UMaterialInstanceDynamic* DynamicMaterial; // 0x3f0(0x08)
	FColor InsertedBatteriesColor; // 0x3f8(0x04)
	FColor OpenedColor; // 0x3fc(0x04)
	UAudioComponent* IdleSound; // 0x400(0x08)
	bool BatteryInserted; // 0x408(0x01)

	void OnRep_BatteryInserted();
	void GetTotalTimePlayed(int32_t TotalTimePlayed);
	void OnRep_Hammered();
	void UserConstructionScript();
	void Grow Hologram__FinishedFunc();
	void Grow Hologram__UpdateFunc();
	void TurnUpLight__FinishedFunc();
	void TurnUpLight__UpdateFunc();
	void TurnDownLight__FinishedFunc();
	void TurnDownLight__UpdateFunc();
	void OnNotifyEnd_4D05B8034ED2139CE2AAD8BD828BDF32(FName NotifyName);
	void OnNotifyBegin_4D05B8034ED2139CE2AAD8BD828BDF32(FName NotifyName);
	void OnInterrupted_4D05B8034ED2139CE2AAD8BD828BDF32(FName NotifyName);
	void OnBlendOut_4D05B8034ED2139CE2AAD8BD828BDF32(FName NotifyName);
	void OnCompleted_4D05B8034ED2139CE2AAD8BD828BDF32(FName NotifyName);
	void ReceiveBeginPlay();
	void BndEvt__Repairable_K2Node_ComponentBoundEvent_0_RepairedDelegate__DelegateSignature(URepairableComponent* Component);
	void BndEvt__Repairable_K2Node_ComponentBoundEvent_1_RepairedDelegate__DelegateSignature(URepairableComponent* Component);
	void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_3_UsedBySignature__DelegateSignature(APlayerCharacter* User);
	void BndEvt__Repairable_K2Node_ComponentBoundEvent_4_RepairedDelegate__DelegateSignature(URepairableComponent* Component);
	void SpawnChunks();
	void SetupLoop();
	void BndEvt__HammeringUsable_K2Node_ComponentBoundEvent_5_UsedBySignature__DelegateSignature(APlayerCharacter* User);
	void BndEvt__CollectUsable_K2Node_ComponentBoundEvent_6_UsedBySignature__DelegateSignature(APlayerCharacter* User);
	void BndEvt__RepairUsable_K2Node_ComponentBoundEvent_8_UsedBySignature__DelegateSignature(APlayerCharacter* User);
	void OnLocalPlayerCollectedTreasure(APlayerCharacter* Player);
	void OnDisableChestLocally();
	void All_PlayMusic();
	void Cheat_ForceRepair();
	void Cheat_ForceHammer();
	void ExecuteUbergraph_BP_TreasureBox(int32_t EntryPoint);
};

