// BlueprintGeneratedClass BP_Refinery_Target.BP_Refinery_Target_C
// Size: 0x30a (Inherited: 0x248)
struct ABP_Refinery_Target_C : APipelineFinish {
	FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	UAudioComponent* Audio; // 0x250(0x08)
	UParticleSystemComponent* ParticleSystem; // 0x258(0x08)
	UStaticMeshComponent* ST_LiquidMorkite_Well; // 0x260(0x08)
	UStaticMeshComponent* ST_LiquidMorkite_Well1; // 0x268(0x08)
	USceneComponent* GroundRoot; // 0x270(0x08)
	UOutlineComponent* outline; // 0x278(0x08)
	UAudioComponent* AudioIdle; // 0x280(0x08)
	UMeshCarverComponent* MeshCarver-MaterialVein2; // 0x288(0x08)
	UMeshCarverComponent* MeshCarver-MaterialVein1; // 0x290(0x08)
	ULevelGenerationDebris* LevelGenerationDebris; // 0x298(0x08)
	UMeshCarverComponent* MeshCarver-MaterialBottom; // 0x2a0(0x08)
	UMeshCarverComponent* MeshCarver-Outside; // 0x2a8(0x08)
	UMeshCarverComponent* MeshCarver-Mid; // 0x2b0(0x08)
	UTerrainScannerStaticMesh* TerrainScannerStaticMesh; // 0x2b8(0x08)
	UPointLightComponent* FindMe_PointLight; // 0x2c0(0x08)
	UChildActorComponent* ExtractorBlueprintChildActor; // 0x2c8(0x08)
	USphereComponent* OrderExtractorCollision; // 0x2d0(0x08)
	USphereComponent* GroundCollision; // 0x2d8(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x2e0(0x08)
	UStaticMeshComponent* ResourceMesh; // 0x2e8(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x2f0(0x08)
	bool PlayerLookingAtTarget; // 0x2f8(0x01)
	bool PlacementValid; // 0x2f9(0x01)
	APipelineStart* PipelineStart; // 0x300(0x08)
	enum class ERefineryState RefineryState; // 0x308(0x01)
	bool IsRefining; // 0x309(0x01)

	FVector GetLandingOffset();
	void UpdateIsRefining();
	void UpdateState();
	void UserConstructionScript();
	void StartBlinking();
	void ReceiveExtractorPodSpawned(APipelineExtractorPod* InExtractorPod);
	void BndEvt__PipelineEndConnection_K2Node_ComponentBoundEvent_0_ConnectionDelegate__DelegateSignature(UTrackBuilderConnectPoint* InConnectPoint, ATrackBuilderSegment* InSegment);
	void BndEvt__UsableOrderExtractor_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(APlayerCharacter* User);
	void OnRefineryStateChanged_Event(enum class ERefineryState InRefineryState);
	void OnStateChanged_Event(ARessuplyPod* InPod, enum class ERessuplyPodState InState);
	void BndEvt__Outline_K2Node_ComponentBoundEvent_2_OutlineChanged__DelegateSignature(enum class EOutline InOutline);
	void InitialCarve();
	void OnMatchStarted();
	void StopBlinking();
	void Ping(bool InValidPlacement);
	void ReceiveBeginPlay();
	void BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_3_ParticleBurstSignature__DelegateSignature(FName EventName, float EmitterTime, int32_t ParticleCount);
	void ExecuteUbergraph_BP_Refinery_Target(int32_t EntryPoint);
};

