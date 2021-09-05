// BlueprintGeneratedClass BP_Pipeline_Segment.BP_Pipeline_Segment_C
// Size: 0x608 (Inherited: 0x3a8)
struct ABP_Pipeline_Segment_C : APipelineSegment {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3a8(0x08)
	UTerrainScannerStaticMesh* TerrainScannerStaticMesh; // 0x3b0(0x08)
	UTerrainScannerSplineMesh* TerrainScannerSplineMesh; // 0x3b8(0x08)
	UStaticMeshComponent* ActivateLightCone; // 0x3c0(0x08)
	UPointLightComponent* ActivatePointLight ; // 0x3c8(0x08)
	UParticleSystemComponent* BrokenParticleSystem_Decals; // 0x3d0(0x08)
	UChildActorComponent* ActivateHologram; // 0x3d8(0x08)
	UAudioComponent* PipeLeakingMorkiteSprayingOut_Cue; // 0x3e0(0x08)
	UAudioComponent* PipeLeakingAlarm_Cue; // 0x3e8(0x08)
	UStaticMeshComponent* SM_LightCone_Red; // 0x3f0(0x08)
	UParticleSystemComponent* BrokenParticleSystem 05; // 0x3f8(0x08)
	UParticleSystemComponent* BrokenParticleSystem 04; // 0x400(0x08)
	UParticleSystemComponent* BrokenParticleSystem 03; // 0x408(0x08)
	UParticleSystemComponent* BrokenParticleSystem 02; // 0x410(0x08)
	UChildActorComponent* BP_StatusLamp; // 0x418(0x08)
	USceneComponent* BrokenNode; // 0x420(0x08)
	USphereComponent* RepairCollider; // 0x428(0x08)
	USphereComponent* ActivateSegmentCollider; // 0x430(0x08)
	UParticleSystemComponent* ConnectedParticleSystem; // 0x438(0x08)
	USphereComponent* NextSegmentCollider; // 0x440(0x08)
	USplineDecoratorComponent* RingDecorator; // 0x448(0x08)
	UPointLightComponent* PointLight Red; // 0x450(0x08)
	UParticleSystemComponent* BrokenParticleSystem 01; // 0x458(0x08)
	UTerrainScannerStaticMesh* TerrainScanner_Broken; // 0x460(0x08)
	UAudioComponent* AudioActivating; // 0x468(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x470(0x08)
	UBP_Pipeline_Movement_C* BP_Pipeline_Movement; // 0x478(0x08)
	UArrowComponent* Arrow; // 0x480(0x08)
	float Timeline_0_Progress_DAE98DA44362821170C92FBA184208DB; // 0x488(0x04)
	enum class ETimelineDirection Timeline_0__Direction_DAE98DA44362821170C92FBA184208DB; // 0x48c(0x01)
	UTimelineComponent* Timeline_1; // 0x490(0x08)
	float BuildTimeline_Progress_6223F38446980B06F3713AAB20D1CEB4; // 0x498(0x04)
	enum class ETimelineDirection BuildTimeline__Direction_6223F38446980B06F3713AAB20D1CEB4; // 0x49c(0x01)
	UTimelineComponent* BuildTimeline; // 0x4a0(0x08)
	TArray<UMaterialInterface*> MaterialsEndPost; // 0x4a8(0x10)
	UMaterialInterface* MaterialPipe; // 0x4b8(0x08)
	UMaterialInterface* MaterialBlueprintValid; // 0x4c0(0x08)
	UMaterialInterface* MaterialBlueprintInvalid; // 0x4c8(0x08)
	float Scale; // 0x4d0(0x04)
	float Height; // 0x4d4(0x04)
	float MinValidDistance; // 0x4d8(0x04)
	float MaxValidDistance; // 0x4dc(0x04)
	float SplineMeshDistance; // 0x4e0(0x04)
	UAudioComponent* BuildingAudioComponent; // 0x4e8(0x08)
	enum class ETrackBuildPlacementState LastState; // 0x4f0(0x01)
	bool SegmentValid; // 0x4f1(0x01)
	ABP_AttackablePiplinesegmentActor_C* AttackableActor; // 0x4f8(0x08)
	float MaxLightIntensity; // 0x500(0x04)
	FSimpleObjectInfoData PipelineObjectInfo; // 0x508(0x40)
	FSimpleObjectInfoData PipelineObjectInfoBroken; // 0x548(0x40)
	FSimpleObjectInfoData ConnectorObjectInfo; // 0x588(0x40)
	FSimpleObjectInfoData ConnectorObjectInfoBroken; // 0x5c8(0x40)

	bool IsPhotosensitiveMode();
	void HandlePhotosensitivity();
	void UpdatePipelineNumber();
	void OverrideEndPostMaterial(UMaterialInterface* Material);
	void UpdateConnectableGFX();
	void UpdatePlacementState(enum class ETrackBuildPlacementState InState);
	void UserConstructionScript();
	void BuildTimeline__FinishedFunc();
	void BuildTimeline__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ReceiveBeginPlay();
	void ReceivPlacementValidChanged(bool InIsValid);
	void ReceivePlacementStateChanged(enum class ETrackBuildPlacementState NewState);
	void BndEvt__SegmentHealthComponent_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void ReversePipelineAnim();
	void BndEvt__SegmentHealthComponent_K2Node_ComponentBoundEvent_2_DamageSig__DelegateSignature(float amount);
	void Update Can Undo();
	void BndEvt__NextSegmentUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool canUse);
	void ReceiveSegmentBrokenChanged(bool InSegmentBroken);
	void ReceivePlacementFinished();
	void BndEvt__ActivateSegmentUsable_K2Node_ComponentBoundEvent_5_UsableChangedSignature__DelegateSignature(bool canUse);
	void UpdateCanActivateSegmentGFX();
	void BndEvt__ActivateSegmentUsable_K2Node_ComponentBoundEvent_4_UsedBySignature__DelegateSignature(APlayerCharacter* User);
	void ScheduleUpdatePlacementState();
	void CarveAroundSegment();
	void ReceiveSegmentActivatedProgress(float InProgress);
	void OnRepaired(APlayerCharacter* InUser);
	void Hide Endpost Items();
	void SetupPipelineNumber();
	void SegmentBrokenGFX();
	void SegmentBrokenLocalWave();
	void SegmentBrokenLaserpointerInfo();
	void SegmentBrokenAudio();
	void BndEvt__BrokenParticleSystem_Decals_K2Node_ComponentBoundEvent_6_ParticleCollisionSignature__DelegateSignature(FName EventName, float EmitterTime, int32_t ParticleTime, FVector Location, FVector Velocity, FVector Direction, FVector Normal, FName BoneName, UPhysicalMaterial* PhysMat);
	void ReceivePlacementBegin();
	void ParticlesOnPlaced();
	void ExecuteUbergraph_BP_Pipeline_Segment(int32_t EntryPoint);
};

