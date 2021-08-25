// BlueprintGeneratedClass BP_Salvage_FuelPod.BP_Salvage_FuelPod_C
// Size: 0x380 (Inherited: 0x2b0)
struct ABP_Salvage_FuelPod_C : ASalvageFuelPod {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct UTerrainScannerStaticMesh* TerrainScannerFuelConnection; // 0x2b8(0x08)
	struct UTerrainScannerStaticMesh* TerrainScannerPod; // 0x2c0(0x08)
	struct UWidgetComponent* WidgetActivate; // 0x2c8(0x08)
	struct UChildActorComponent* FuelLineConnector; // 0x2d0(0x08)
	struct UTerrainDetectComponent* TerrainDetect; // 0x2d8(0x08)
	struct UDropToTerrainComponent* DropToTerrain; // 0x2e0(0x08)
	struct UOxygenSourceComponent* OxygenSource; // 0x2e8(0x08)
	struct UTerrainPlacementComponent* terrainPlacement; // 0x2f0(0x08)
	struct UCapsuleComponent* Capsule; // 0x2f8(0x08)
	struct USkeletalMeshComponent* FuelCell; // 0x300(0x08)
	struct UAudioComponent* FuelCellCharge_Cue; // 0x308(0x08)
	struct URadarPointComponent* radarPoint; // 0x310(0x08)
	struct UPointLightComponent* PointLight; // 0x318(0x08)
	struct UStaticMeshComponent* DistressSphere; // 0x320(0x08)
	struct USingleUsableComponent* UsableActivate; // 0x328(0x08)
	struct UBoxComponent* Usable; // 0x330(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x338(0x08)
	struct UAudioComponent* Audio1; // 0x340(0x08)
	struct UPathfinderCollisionComponent* PathfinderCollision; // 0x348(0x08)
	struct UOutlineComponent* outline; // 0x350(0x08)
	struct UAutoCarverComponent* AutoCarver; // 0x358(0x08)
	float LightIntensity; // 0x360(0x04)
	char UnknownData_364[0x4]; // 0x364(0x04)
	struct UAudioComponent* DrillAudio; // 0x368(0x08)
	bool FuelLineConnected; // 0x370(0x01)
	char UnknownData_371[0x7]; // 0x371(0x07)
	struct AFuelLineSegment* FirstFuelLineSegment; // 0x378(0x08)

	void UpdateDistressSphere(); // Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.UpdateDistressSphere
	void OnDroppodImpact(); // Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.OnDroppodImpact
	void OnDropStarted(); // Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.OnDropStarted
	void ReceiveTick(float DeltaSeconds); // Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.ReceiveTick
	void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(struct APlayerCharacter* User); // Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
	void OnDefenseStart(); // Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.OnDefenseStart
	void OnDefenseComplete(); // Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.OnDefenseComplete
	void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_ProgressSignature__DelegateSignature(float Progress); // Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_ProgressSignature__DelegateSignature
	void OnDefenseFailed(); // Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.OnDefenseFailed
	void ReceiveFuelLineConnected(struct AFuelLineEndPoint* InFuelLine); // Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.ReceiveFuelLineConnected
	void ReceiveBeginPlay(); // Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.ReceiveBeginPlay
	void BndEvt__UsableActivate_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature(bool canUse); // Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.BndEvt__UsableActivate_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature
	void SignalFuelLineStart(); // Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.SignalFuelLineStart
	void ReceiveFuelLineStarted(bool InFuelLineStarted); // Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.ReceiveFuelLineStarted
	void ReceiveFirstFuelLineSegment(struct AFuelLineSegment* InFirstSegment); // Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.ReceiveFirstFuelLineSegment
	void BndEvt__DropToTerrain_K2Node_ComponentBoundEvent_1_OnIsFallingToTerrainChanged__DelegateSignature(bool IsFalling); // Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.BndEvt__DropToTerrain_K2Node_ComponentBoundEvent_1_OnIsFallingToTerrainChanged__DelegateSignature
	void ExecuteUbergraph_BP_Salvage_FuelPod(int32_t EntryPoint); // Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.ExecuteUbergraph_BP_Salvage_FuelPod
};

