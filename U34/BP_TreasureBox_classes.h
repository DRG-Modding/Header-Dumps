// BlueprintGeneratedClass BP_TreasureBox.BP_TreasureBox_C
// Size: 0x409 (Inherited: 0x2f0)
struct ABP_TreasureBox_C : ATreasureBox {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	struct UBoxComponent* UseBox; // 0x2f8(0x08)
	struct UBoxComponent* Box; // 0x300(0x08)
	struct UTerrainDetectComponent* TerrainDetect; // 0x308(0x08)
	struct UDropToTerrainComponent* DropToTerrain; // 0x310(0x08)
	struct UAudioComponent* ChestIdle_Cue; // 0x318(0x08)
	struct UPointLightComponent* PointLight1; // 0x320(0x08)
	struct UPointLightComponent* PointLight; // 0x328(0x08)
	struct UStaticMeshComponent* LightCone; // 0x330(0x08)
	struct USpotLightComponent* SpotLight; // 0x338(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x340(0x08)
	struct UOutlineComponent* outline; // 0x348(0x08)
	struct UParticleSystemComponent* P_TreasureChest_HolloStreaks; // 0x350(0x08)
	struct USceneComponent* Minerals Spawn Point; // 0x358(0x08)
	struct UStaticMeshComponent* FrontPlane; // 0x360(0x08)
	struct UStaticMeshComponent* BackPlane; // 0x368(0x08)
	float TurnDownLight_NewTrack_0_1A0AF79145F35FAD9E2421B320EBDF90; // 0x370(0x04)
	char TurnDownLight__Direction_1A0AF79145F35FAD9E2421B320EBDF90; // 0x374(0x01)
	char UnknownData_375[0x3]; // 0x375(0x03)
	struct UTimelineComponent* TurnDownLight; // 0x378(0x08)
	float TurnUpLight_NewTrack_0_7FB98785445BF3786932D7B67BEC0DF8; // 0x380(0x04)
	char TurnUpLight__Direction_7FB98785445BF3786932D7B67BEC0DF8; // 0x384(0x01)
	char UnknownData_385[0x3]; // 0x385(0x03)
	struct UTimelineComponent* TurnUpLight; // 0x388(0x08)
	float Grow_Hologram_Y_9A21ED754CE563FC34120DB5BCEE177C; // 0x390(0x04)
	float Grow_Hologram_X_9A21ED754CE563FC34120DB5BCEE177C; // 0x394(0x04)
	float Grow_Hologram_Z_9A21ED754CE563FC34120DB5BCEE177C; // 0x398(0x04)
	char Grow_Hologram__Direction_9A21ED754CE563FC34120DB5BCEE177C; // 0x39c(0x01)
	char UnknownData_39D[0x3]; // 0x39d(0x03)
	struct UTimelineComponent* Grow Hologram; // 0x3a0(0x08)
	struct UParticleSystem* ActivatedParticles; // 0x3a8(0x08)
	struct USoundCue* ActivatedSound; // 0x3b0(0x08)
	struct TArray<struct UResourceData*> Loot; // 0x3b8(0x10)
	struct FVector2D ChunkValueRange; // 0x3c8(0x08)
	struct FVector2D ChunkCountRange; // 0x3d0(0x08)
	struct TArray<struct UResourceData*> ResourceTypes; // 0x3d8(0x10)
	int32_t ResourcesToSpawn; // 0x3e8(0x04)
	bool Hammered; // 0x3ec(0x01)
	char UnknownData_3ED[0x3]; // 0x3ed(0x03)
	struct UMaterialInstanceDynamic* DynamicMaterial; // 0x3f0(0x08)
	struct FColor InsertedBatteriesColor; // 0x3f8(0x04)
	struct FColor OpenedColor; // 0x3fc(0x04)
	struct UAudioComponent* IdleSound; // 0x400(0x08)
	bool BatteryInserted; // 0x408(0x01)

	void OnRep_BatteryInserted(); // Function BP_TreasureBox.BP_TreasureBox_C.OnRep_BatteryInserted
	void GetTotalTimePlayed(int32_t TotalTimePlayed); // Function BP_TreasureBox.BP_TreasureBox_C.GetTotalTimePlayed
	void OnRep_Hammered(); // Function BP_TreasureBox.BP_TreasureBox_C.OnRep_Hammered
	void UserConstructionScript(); // Function BP_TreasureBox.BP_TreasureBox_C.UserConstructionScript
	void Grow Hologram__FinishedFunc(); // Function BP_TreasureBox.BP_TreasureBox_C.Grow Hologram__FinishedFunc
	void Grow Hologram__UpdateFunc(); // Function BP_TreasureBox.BP_TreasureBox_C.Grow Hologram__UpdateFunc
	void TurnUpLight__FinishedFunc(); // Function BP_TreasureBox.BP_TreasureBox_C.TurnUpLight__FinishedFunc
	void TurnUpLight__UpdateFunc(); // Function BP_TreasureBox.BP_TreasureBox_C.TurnUpLight__UpdateFunc
	void TurnDownLight__FinishedFunc(); // Function BP_TreasureBox.BP_TreasureBox_C.TurnDownLight__FinishedFunc
	void TurnDownLight__UpdateFunc(); // Function BP_TreasureBox.BP_TreasureBox_C.TurnDownLight__UpdateFunc
	void OnNotifyEnd_4D05B8034ED2139CE2AAD8BD828BDF32(struct FName NotifyName); // Function BP_TreasureBox.BP_TreasureBox_C.OnNotifyEnd_4D05B8034ED2139CE2AAD8BD828BDF32
	void OnNotifyBegin_4D05B8034ED2139CE2AAD8BD828BDF32(struct FName NotifyName); // Function BP_TreasureBox.BP_TreasureBox_C.OnNotifyBegin_4D05B8034ED2139CE2AAD8BD828BDF32
	void OnInterrupted_4D05B8034ED2139CE2AAD8BD828BDF32(struct FName NotifyName); // Function BP_TreasureBox.BP_TreasureBox_C.OnInterrupted_4D05B8034ED2139CE2AAD8BD828BDF32
	void OnBlendOut_4D05B8034ED2139CE2AAD8BD828BDF32(struct FName NotifyName); // Function BP_TreasureBox.BP_TreasureBox_C.OnBlendOut_4D05B8034ED2139CE2AAD8BD828BDF32
	void OnCompleted_4D05B8034ED2139CE2AAD8BD828BDF32(struct FName NotifyName); // Function BP_TreasureBox.BP_TreasureBox_C.OnCompleted_4D05B8034ED2139CE2AAD8BD828BDF32
	void ReceiveBeginPlay(); // Function BP_TreasureBox.BP_TreasureBox_C.ReceiveBeginPlay
	void BndEvt__Repairable_K2Node_ComponentBoundEvent_0_RepairedDelegate__DelegateSignature(struct URepairableComponent* Component); // Function BP_TreasureBox.BP_TreasureBox_C.BndEvt__Repairable_K2Node_ComponentBoundEvent_0_RepairedDelegate__DelegateSignature
	void BndEvt__Repairable_K2Node_ComponentBoundEvent_1_RepairedDelegate__DelegateSignature(struct URepairableComponent* Component); // Function BP_TreasureBox.BP_TreasureBox_C.BndEvt__Repairable_K2Node_ComponentBoundEvent_1_RepairedDelegate__DelegateSignature
	void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_3_UsedBySignature__DelegateSignature(struct APlayerCharacter* User); // Function BP_TreasureBox.BP_TreasureBox_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_3_UsedBySignature__DelegateSignature
	void BndEvt__Repairable_K2Node_ComponentBoundEvent_4_RepairedDelegate__DelegateSignature(struct URepairableComponent* Component); // Function BP_TreasureBox.BP_TreasureBox_C.BndEvt__Repairable_K2Node_ComponentBoundEvent_4_RepairedDelegate__DelegateSignature
	void SpawnChunks(); // Function BP_TreasureBox.BP_TreasureBox_C.SpawnChunks
	void SetupLoop(); // Function BP_TreasureBox.BP_TreasureBox_C.SetupLoop
	void BndEvt__HammeringUsable_K2Node_ComponentBoundEvent_5_UsedBySignature__DelegateSignature(struct APlayerCharacter* User); // Function BP_TreasureBox.BP_TreasureBox_C.BndEvt__HammeringUsable_K2Node_ComponentBoundEvent_5_UsedBySignature__DelegateSignature
	void BndEvt__CollectUsable_K2Node_ComponentBoundEvent_6_UsedBySignature__DelegateSignature(struct APlayerCharacter* User); // Function BP_TreasureBox.BP_TreasureBox_C.BndEvt__CollectUsable_K2Node_ComponentBoundEvent_6_UsedBySignature__DelegateSignature
	void BndEvt__RepairUsable_K2Node_ComponentBoundEvent_8_UsedBySignature__DelegateSignature(struct APlayerCharacter* User); // Function BP_TreasureBox.BP_TreasureBox_C.BndEvt__RepairUsable_K2Node_ComponentBoundEvent_8_UsedBySignature__DelegateSignature
	void OnLocalPlayerCollectedTreasure(struct APlayerCharacter* Player); // Function BP_TreasureBox.BP_TreasureBox_C.OnLocalPlayerCollectedTreasure
	void OnDisableChestLocally(); // Function BP_TreasureBox.BP_TreasureBox_C.OnDisableChestLocally
	void ALL_PlayMusic(); // Function BP_TreasureBox.BP_TreasureBox_C.ALL_PlayMusic
	void Cheat_ForceRepair(); // Function BP_TreasureBox.BP_TreasureBox_C.Cheat_ForceRepair
	void Cheat_ForceHammer(); // Function BP_TreasureBox.BP_TreasureBox_C.Cheat_ForceHammer
	void ExecuteUbergraph_BP_TreasureBox(int32_t EntryPoint); // Function BP_TreasureBox.BP_TreasureBox_C.ExecuteUbergraph_BP_TreasureBox
};

