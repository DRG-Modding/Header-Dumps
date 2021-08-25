// BlueprintGeneratedClass BP_Refinery_Extractor.BP_Refinery_Extractor_C
// Size: 0x392 (Inherited: 0x2c0)
struct ABP_Refinery_Extractor_C : APipelineExtractorPod {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct UChildActorComponent* BP_Extractor_Lamp02; // 0x2c8(0x08)
	struct UChildActorComponent* BP_Extractor_Lamp01; // 0x2d0(0x08)
	struct UStaticMeshComponent* SM_railconnector_02; // 0x2d8(0x08)
	struct UStaticMeshComponent* SM_railconnector_01; // 0x2e0(0x08)
	struct UPointLightComponent* PointLight1; // 0x2e8(0x08)
	struct UPointLightComponent* PointLight; // 0x2f0(0x08)
	struct UOutlineComponent* outline; // 0x2f8(0x08)
	struct UBP_Extractor_Shell_C* Door_Back; // 0x300(0x08)
	struct UBP_Extractor_Shell_C* Door_Front; // 0x308(0x08)
	struct UBP_Extractor_Shell_C* Door_Left; // 0x310(0x08)
	struct UBP_Extractor_Shell_C* Door_Right; // 0x318(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x320(0x08)
	struct USceneComponent* Doors; // 0x328(0x08)
	struct UAudioComponent* AudioDropStarted; // 0x330(0x08)
	struct USkeletalMeshComponent* Drill; // 0x338(0x08)
	struct UPathfinderCollisionComponent* PathfinderCollision; // 0x340(0x08)
	struct UAudioComponent* MineheadDrilling_Cue; // 0x348(0x08)
	struct UAutoCarverComponent* AutoCarver; // 0x350(0x08)
	struct UTerrainScannerStaticMesh* TerrainScannerStaticMesh; // 0x358(0x08)
	struct USceneComponent* ConnectedIndicator; // 0x360(0x08)
	struct UActorTrackingComponent* ActorTrackingIcon; // 0x368(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x370(0x08)
	struct USceneComponent* Scene; // 0x378(0x08)
	struct UParticleSystemComponent* DrillParticles01; // 0x380(0x08)
	struct UParticleSystemComponent* DrillParticles02; // 0x388(0x08)
	bool DoorsPushedAway; // 0x390(0x01)
	bool ItemEquipped; // 0x391(0x01)

	void UpdateState(); // Function BP_Refinery_Extractor.BP_Refinery_Extractor_C.UpdateState
	void UserConstructionScript(); // Function BP_Refinery_Extractor.BP_Refinery_Extractor_C.UserConstructionScript
	void ExtractorPodOrderedEvent(struct APlayerCharacter* InUser); // Function BP_Refinery_Extractor.BP_Refinery_Extractor_C.ExtractorPodOrderedEvent
	void ReceiveBeginPlay(); // Function BP_Refinery_Extractor.BP_Refinery_Extractor_C.ReceiveBeginPlay
	void OnDropStarted(); // Function BP_Refinery_Extractor.BP_Refinery_Extractor_C.OnDropStarted
	void OnItemEquipped_Event(struct AItem* Item); // Function BP_Refinery_Extractor.BP_Refinery_Extractor_C.OnItemEquipped_Event
	void SetPipelineBuilderEquipped(bool InEquipped); // Function BP_Refinery_Extractor.BP_Refinery_Extractor_C.SetPipelineBuilderEquipped
	void ReceiveConnectedToSegment(struct APipelineSegment* InConnectedSegment); // Function BP_Refinery_Extractor.BP_Refinery_Extractor_C.ReceiveConnectedToSegment
	void Setup ItemEquipped(); // Function BP_Refinery_Extractor.BP_Refinery_Extractor_C.Setup ItemEquipped
	void OnDroppodImpact(); // Function BP_Refinery_Extractor.BP_Refinery_Extractor_C.OnDroppodImpact
	void OnPipelineStateChanged(enum class EPipelineBuildState InPipelineState); // Function BP_Refinery_Extractor.BP_Refinery_Extractor_C.OnPipelineStateChanged
	void ExecuteUbergraph_BP_Refinery_Extractor(int32_t EntryPoint); // Function BP_Refinery_Extractor.BP_Refinery_Extractor_C.ExecuteUbergraph_BP_Refinery_Extractor
};

