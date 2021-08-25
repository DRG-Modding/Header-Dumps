// BlueprintGeneratedClass BP_Refinery_Target.BP_Refinery_Target_C
// Size: 0x30a (Inherited: 0x248)
struct ABP_Refinery_Target_C : APipelineFinish {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UAudioComponent* Audio; // 0x250(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x258(0x08)
	struct UStaticMeshComponent* ST_LiquidMorkite_Well; // 0x260(0x08)
	struct UStaticMeshComponent* ST_LiquidMorkite_Well1; // 0x268(0x08)
	struct USceneComponent* GroundRoot; // 0x270(0x08)
	struct UOutlineComponent* outline; // 0x278(0x08)
	struct UAudioComponent* AudioIdle; // 0x280(0x08)
	struct UMeshCarverComponent* MeshCarver-MaterialVein2; // 0x288(0x08)
	struct UMeshCarverComponent* MeshCarver-MaterialVein1; // 0x290(0x08)
	struct ULevelGenerationDebris* LevelGenerationDebris; // 0x298(0x08)
	struct UMeshCarverComponent* MeshCarver-MaterialBottom; // 0x2a0(0x08)
	struct UMeshCarverComponent* MeshCarver-Outside; // 0x2a8(0x08)
	struct UMeshCarverComponent* MeshCarver-Mid; // 0x2b0(0x08)
	struct UTerrainScannerStaticMesh* TerrainScannerStaticMesh; // 0x2b8(0x08)
	struct UPointLightComponent* FindMe_PointLight; // 0x2c0(0x08)
	struct UChildActorComponent* ExtractorBlueprintChildActor; // 0x2c8(0x08)
	struct USphereComponent* OrderExtractorCollision; // 0x2d0(0x08)
	struct USphereComponent* GroundCollision; // 0x2d8(0x08)
	struct UTerrainPlacementComponent* terrainPlacement; // 0x2e0(0x08)
	struct UStaticMeshComponent* ResourceMesh; // 0x2e8(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x2f0(0x08)
	bool PlayerLookingAtTarget; // 0x2f8(0x01)
	bool PlacementValid; // 0x2f9(0x01)
	char UnknownData_2FA[0x6]; // 0x2fa(0x06)
	struct APipelineStart* PipelineStart; // 0x300(0x08)
	enum class ERefineryState RefineryState; // 0x308(0x01)
	bool IsRefining; // 0x309(0x01)

	struct FVector GetLandingOffset(); // Function BP_Refinery_Target.BP_Refinery_Target_C.GetLandingOffset
	void UpdateIsRefining(); // Function BP_Refinery_Target.BP_Refinery_Target_C.UpdateIsRefining
	void UpdateState(); // Function BP_Refinery_Target.BP_Refinery_Target_C.UpdateState
	void UserConstructionScript(); // Function BP_Refinery_Target.BP_Refinery_Target_C.UserConstructionScript
	void StartBlinking(); // Function BP_Refinery_Target.BP_Refinery_Target_C.StartBlinking
	void ReceiveExtractorPodSpawned(struct APipelineExtractorPod* InExtractorPod); // Function BP_Refinery_Target.BP_Refinery_Target_C.ReceiveExtractorPodSpawned
	void BndEvt__PipelineEndConnection_K2Node_ComponentBoundEvent_0_ConnectionDelegate__DelegateSignature(struct UTrackBuilderConnectPoint* InConnectPoint, struct ATrackBuilderSegment* InSegment); // Function BP_Refinery_Target.BP_Refinery_Target_C.BndEvt__PipelineEndConnection_K2Node_ComponentBoundEvent_0_ConnectionDelegate__DelegateSignature
	void BndEvt__UsableOrderExtractor_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(struct APlayerCharacter* User); // Function BP_Refinery_Target.BP_Refinery_Target_C.BndEvt__UsableOrderExtractor_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature
	void OnRefineryStateChanged_Event(enum class ERefineryState InRefineryState); // Function BP_Refinery_Target.BP_Refinery_Target_C.OnRefineryStateChanged_Event
	void OnStateChanged_Event(struct ARessuplyPod* InPod, enum class ERessuplyPodState InState); // Function BP_Refinery_Target.BP_Refinery_Target_C.OnStateChanged_Event
	void BndEvt__Outline_K2Node_ComponentBoundEvent_2_OutlineChanged__DelegateSignature(enum class EOutline InOutline); // Function BP_Refinery_Target.BP_Refinery_Target_C.BndEvt__Outline_K2Node_ComponentBoundEvent_2_OutlineChanged__DelegateSignature
	void InitialCarve(); // Function BP_Refinery_Target.BP_Refinery_Target_C.InitialCarve
	void OnMatchStarted(); // Function BP_Refinery_Target.BP_Refinery_Target_C.OnMatchStarted
	void StopBlinking(); // Function BP_Refinery_Target.BP_Refinery_Target_C.StopBlinking
	void Ping(bool InValidPlacement); // Function BP_Refinery_Target.BP_Refinery_Target_C.Ping
	void ReceiveBeginPlay(); // Function BP_Refinery_Target.BP_Refinery_Target_C.ReceiveBeginPlay
	void BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_3_ParticleBurstSignature__DelegateSignature(struct FName EventName, float EmitterTime, int32_t ParticleCount); // Function BP_Refinery_Target.BP_Refinery_Target_C.BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_3_ParticleBurstSignature__DelegateSignature
	void ExecuteUbergraph_BP_Refinery_Target(int32_t EntryPoint); // Function BP_Refinery_Target.BP_Refinery_Target_C.ExecuteUbergraph_BP_Refinery_Target
};

