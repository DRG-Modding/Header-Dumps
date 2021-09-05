// BlueprintGeneratedClass BP_LostPackStart.BP_LostPackStart_C
// Size: 0x329 (Inherited: 0x298)
struct ABP_LostPackStart_C : ATreasureBeacon {
	FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	UParticleSystemComponent* P_LostPack_Scanning1; // 0x2a0(0x08)
	UParticleSystemComponent* P_LostPack_Scanning; // 0x2a8(0x08)
	UAudioComponent* Audio; // 0x2b0(0x08)
	USphereComponent* LaserPointerShpere; // 0x2b8(0x08)
	UPointLightComponent* PointLight; // 0x2c0(0x08)
	UStaticMeshComponent* HelmetMesh; // 0x2c8(0x08)
	UOutlineComponent* outline; // 0x2d0(0x08)
	UTerrainDetectComponent* TerrainDetect; // 0x2d8(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x2e0(0x08)
	UDropToTerrainComponent* DropToTerrain; // 0x2e8(0x08)
	USphereComponent* Sphere; // 0x2f0(0x08)
	USingleUsableComponent* SingleUsable; // 0x2f8(0x08)
	float LightTimeline_NewTrack_0_9C3586C54F34D331F1DA6DBB251F58D5; // 0x300(0x04)
	enum class ETimelineDirection LightTimeline__Direction_9C3586C54F34D331F1DA6DBB251F58D5; // 0x304(0x01)
	UTimelineComponent* LightTimeLine; // 0x308(0x08)
	UMaterialInstanceDynamic* DMI; // 0x310(0x08)
	UDialogDataAsset* OnDataDownloadedShout; // 0x318(0x08)
	USoundBase* MapUpdatedAllNotification; // 0x320(0x08)
	bool Activated; // 0x328(0x01)

	void OnRep_Activated();
	void LightTimeline__FinishedFunc();
	void LightTimeline__UpdateFunc();
	void ReceiveBeginPlay();
	void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(APlayerCharacter* User);
	void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(APlayerCharacter* User);
	void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_2_OnFailed__DelegateSignature();
	void StartLightWave();
	void All_playDownloadSound();
	void UpdateLight(float Strength);
	void Used();
	void UpdateScanningParticles(bool Active);
	void ExecuteUbergraph_BP_LostPackStart(int32_t EntryPoint);
};

