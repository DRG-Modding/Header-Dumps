// BlueprintGeneratedClass BP_LostPackStart.BP_LostPackStart_C
// Size: 0x329 (Inherited: 0x298)
struct ABP_LostPackStart_C : ATreasureBeacon {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	struct UParticleSystemComponent* P_LostPack_Scanning1; // 0x2a0(0x08)
	struct UParticleSystemComponent* P_LostPack_Scanning; // 0x2a8(0x08)
	struct UAudioComponent* Audio; // 0x2b0(0x08)
	struct USphereComponent* LaserPointerShpere; // 0x2b8(0x08)
	struct UPointLightComponent* PointLight; // 0x2c0(0x08)
	struct UStaticMeshComponent* HelmetMesh; // 0x2c8(0x08)
	struct UOutlineComponent* outline; // 0x2d0(0x08)
	struct UTerrainDetectComponent* TerrainDetect; // 0x2d8(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x2e0(0x08)
	struct UDropToTerrainComponent* DropToTerrain; // 0x2e8(0x08)
	struct USphereComponent* Sphere; // 0x2f0(0x08)
	struct USingleUsableComponent* SingleUsable; // 0x2f8(0x08)
	float LightTimeline_NewTrack_0_9C3586C54F34D331F1DA6DBB251F58D5; // 0x300(0x04)
	char LightTimeline__Direction_9C3586C54F34D331F1DA6DBB251F58D5; // 0x304(0x01)
	char UnknownData_305[0x3]; // 0x305(0x03)
	struct UTimelineComponent* LightTimeLine; // 0x308(0x08)
	struct UMaterialInstanceDynamic* DMI; // 0x310(0x08)
	struct UDialogDataAsset* OnDataDownloadedShout; // 0x318(0x08)
	struct USoundBase* MapUpdatedAllNotification; // 0x320(0x08)
	bool Activated; // 0x328(0x01)

	void OnRep_Activated(); // Function BP_LostPackStart.BP_LostPackStart_C.OnRep_Activated
	void LightTimeline__FinishedFunc(); // Function BP_LostPackStart.BP_LostPackStart_C.LightTimeline__FinishedFunc
	void LightTimeline__UpdateFunc(); // Function BP_LostPackStart.BP_LostPackStart_C.LightTimeline__UpdateFunc
	void ReceiveBeginPlay(); // Function BP_LostPackStart.BP_LostPackStart_C.ReceiveBeginPlay
	void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(struct APlayerCharacter* User); // Function BP_LostPackStart.BP_LostPackStart_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
	void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(struct APlayerCharacter* User); // Function BP_LostPackStart.BP_LostPackStart_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature
	void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_2_OnFailed__DelegateSignature(); // Function BP_LostPackStart.BP_LostPackStart_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_2_OnFailed__DelegateSignature
	void StartLightWave(); // Function BP_LostPackStart.BP_LostPackStart_C.StartLightWave
	void All_playDownloadSound(); // Function BP_LostPackStart.BP_LostPackStart_C.All_playDownloadSound
	void UpdateLight(float Strength); // Function BP_LostPackStart.BP_LostPackStart_C.UpdateLight
	void Used(); // Function BP_LostPackStart.BP_LostPackStart_C.Used
	void UpdateScanningParticles(bool Active); // Function BP_LostPackStart.BP_LostPackStart_C.UpdateScanningParticles
	void ExecuteUbergraph_BP_LostPackStart(int32_t EntryPoint); // Function BP_LostPackStart.BP_LostPackStart_C.ExecuteUbergraph_BP_LostPackStart
};

