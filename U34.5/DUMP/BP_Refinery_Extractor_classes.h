// BlueprintGeneratedClass BP_Refinery_Extractor.BP_Refinery_Extractor_C
// Size: 0x392 (Inherited: 0x2c0)
struct ABP_Refinery_Extractor_C : APipelineExtractorPod {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	UChildActorComponent* BP_Extractor_Lamp02; // 0x2c8(0x08)
	UChildActorComponent* BP_Extractor_Lamp01; // 0x2d0(0x08)
	UStaticMeshComponent* SM_railconnector_02; // 0x2d8(0x08)
	UStaticMeshComponent* SM_railconnector_01; // 0x2e0(0x08)
	UPointLightComponent* PointLight1; // 0x2e8(0x08)
	UPointLightComponent* PointLight; // 0x2f0(0x08)
	UOutlineComponent* outline; // 0x2f8(0x08)
	UBP_Extractor_Shell_C* Door_Back; // 0x300(0x08)
	UBP_Extractor_Shell_C* Door_Front; // 0x308(0x08)
	UBP_Extractor_Shell_C* Door_Left; // 0x310(0x08)
	UBP_Extractor_Shell_C* Door_Right; // 0x318(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x320(0x08)
	USceneComponent* Doors; // 0x328(0x08)
	UAudioComponent* AudioDropStarted; // 0x330(0x08)
	USkeletalMeshComponent* Drill; // 0x338(0x08)
	UPathfinderCollisionComponent* PathfinderCollision; // 0x340(0x08)
	UAudioComponent* MineheadDrilling_Cue; // 0x348(0x08)
	UAutoCarverComponent* AutoCarver; // 0x350(0x08)
	UTerrainScannerStaticMesh* TerrainScannerStaticMesh; // 0x358(0x08)
	USceneComponent* ConnectedIndicator; // 0x360(0x08)
	UActorTrackingComponent* ActorTrackingIcon; // 0x368(0x08)
	USkeletalMeshComponent* SkeletalMesh; // 0x370(0x08)
	USceneComponent* Scene; // 0x378(0x08)
	UParticleSystemComponent* DrillParticles01; // 0x380(0x08)
	UParticleSystemComponent* DrillParticles02; // 0x388(0x08)
	bool DoorsPushedAway; // 0x390(0x01)
	bool ItemEquipped; // 0x391(0x01)

	void UpdateState();
	void UserConstructionScript();
	void ExtractorPodOrderedEvent(APlayerCharacter* InUser);
	void ReceiveBeginPlay();
	void OnDropStarted();
	void OnItemEquipped_Event(AItem* Item);
	void SetPipelineBuilderEquipped(bool InEquipped);
	void ReceiveConnectedToSegment(APipelineSegment* InConnectedSegment);
	void Setup ItemEquipped();
	void OnDroppodImpact();
	void OnPipelineStateChanged(enum class EPipelineBuildState InPipelineState);
	void ExecuteUbergraph_BP_Refinery_Extractor(int32_t EntryPoint);
};

