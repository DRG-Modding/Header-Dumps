// BlueprintGeneratedClass BP_Salvage_FuelPod.BP_Salvage_FuelPod_C
// Size: 0x380 (Inherited: 0x2b0)
struct ABP_Salvage_FuelPod_C : ASalvageFuelPod {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	UTerrainScannerStaticMesh* TerrainScannerFuelConnection; // 0x2b8(0x08)
	UTerrainScannerStaticMesh* TerrainScannerPod; // 0x2c0(0x08)
	UWidgetComponent* WidgetActivate; // 0x2c8(0x08)
	UChildActorComponent* FuelLineConnector; // 0x2d0(0x08)
	UTerrainDetectComponent* TerrainDetect; // 0x2d8(0x08)
	UDropToTerrainComponent* DropToTerrain; // 0x2e0(0x08)
	UOxygenSourceComponent* OxygenSource; // 0x2e8(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x2f0(0x08)
	UCapsuleComponent* Capsule; // 0x2f8(0x08)
	USkeletalMeshComponent* FuelCell; // 0x300(0x08)
	UAudioComponent* FuelCellCharge_Cue; // 0x308(0x08)
	URadarPointComponent* radarPoint; // 0x310(0x08)
	UPointLightComponent* PointLight; // 0x318(0x08)
	UStaticMeshComponent* DistressSphere; // 0x320(0x08)
	USingleUsableComponent* UsableActivate; // 0x328(0x08)
	UBoxComponent* Usable; // 0x330(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x338(0x08)
	UAudioComponent* Audio1; // 0x340(0x08)
	UPathfinderCollisionComponent* PathfinderCollision; // 0x348(0x08)
	UOutlineComponent* outline; // 0x350(0x08)
	UAutoCarverComponent* AutoCarver; // 0x358(0x08)
	float LightIntensity; // 0x360(0x04)
	UAudioComponent* DrillAudio; // 0x368(0x08)
	bool FuelLineConnected; // 0x370(0x01)
	AFuelLineSegment* FirstFuelLineSegment; // 0x378(0x08)

	void UpdateDistressSphere();
	void OnDroppodImpact();
	void OnDropStarted();
	void ReceiveTick(float DeltaSeconds);
	void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(APlayerCharacter* User);
	void OnDefenseStart();
	void OnDefenseComplete();
	void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_ProgressSignature__DelegateSignature(float Progress);
	void OnDefenseFailed();
	void ReceiveFuelLineConnected(AFuelLineEndPoint* InFuelLine);
	void ReceiveBeginPlay();
	void BndEvt__UsableActivate_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature(bool canUse);
	void SignalFuelLineStart();
	void ReceiveFuelLineStarted(bool InFuelLineStarted);
	void ReceiveFirstFuelLineSegment(AFuelLineSegment* InFirstSegment);
	void BndEvt__DropToTerrain_K2Node_ComponentBoundEvent_1_OnIsFallingToTerrainChanged__DelegateSignature(bool IsFalling);
	void ExecuteUbergraph_BP_Salvage_FuelPod(int32_t EntryPoint);
};

