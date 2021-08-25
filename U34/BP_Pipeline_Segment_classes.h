// BlueprintGeneratedClass BP_Pipeline_Segment.BP_Pipeline_Segment_C
// Size: 0x608 (Inherited: 0x3a8)
struct ABP_Pipeline_Segment_C : APipelineSegment {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3a8(0x08)
	struct UTerrainScannerStaticMesh* TerrainScannerStaticMesh; // 0x3b0(0x08)
	struct UTerrainScannerSplineMesh* TerrainScannerSplineMesh; // 0x3b8(0x08)
	struct UStaticMeshComponent* ActivateLightCone; // 0x3c0(0x08)
	struct UPointLightComponent* ActivatePointLight ; // 0x3c8(0x08)
	struct UParticleSystemComponent* BrokenParticleSystem_Decals; // 0x3d0(0x08)
	struct UChildActorComponent* ActivateHologram; // 0x3d8(0x08)
	struct UAudioComponent* PipeLeakingMorkiteSprayingOut_Cue; // 0x3e0(0x08)
	struct UAudioComponent* PipeLeakingAlarm_Cue; // 0x3e8(0x08)
	struct UStaticMeshComponent* SM_LightCone_Red; // 0x3f0(0x08)
	struct UParticleSystemComponent* BrokenParticleSystem 05; // 0x3f8(0x08)
	struct UParticleSystemComponent* BrokenParticleSystem 04; // 0x400(0x08)
	struct UParticleSystemComponent* BrokenParticleSystem 03; // 0x408(0x08)
	struct UParticleSystemComponent* BrokenParticleSystem 02; // 0x410(0x08)
	struct UChildActorComponent* BP_StatusLamp; // 0x418(0x08)
	struct USceneComponent* BrokenNode; // 0x420(0x08)
	struct USphereComponent* RepairCollider; // 0x428(0x08)
	struct USphereComponent* ActivateSegmentCollider; // 0x430(0x08)
	struct UParticleSystemComponent* ConnectedParticleSystem; // 0x438(0x08)
	struct USphereComponent* NextSegmentCollider; // 0x440(0x08)
	struct USplineDecoratorComponent* RingDecorator; // 0x448(0x08)
	struct UPointLightComponent* PointLight Red; // 0x450(0x08)
	struct UParticleSystemComponent* BrokenParticleSystem 01; // 0x458(0x08)
	struct UTerrainScannerStaticMesh* TerrainScanner_Broken; // 0x460(0x08)
	struct UAudioComponent* AudioActivating; // 0x468(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x470(0x08)
	struct UBP_Pipeline_Movement_C* BP_Pipeline_Movement; // 0x478(0x08)
	struct UArrowComponent* Arrow; // 0x480(0x08)
	float Timeline_0_Progress_DAE98DA44362821170C92FBA184208DB; // 0x488(0x04)
	char Timeline_0__Direction_DAE98DA44362821170C92FBA184208DB; // 0x48c(0x01)
	char UnknownData_48D[0x3]; // 0x48d(0x03)
	struct UTimelineComponent* Timeline_1; // 0x490(0x08)
	float BuildTimeline_Progress_6223F38446980B06F3713AAB20D1CEB4; // 0x498(0x04)
	char BuildTimeline__Direction_6223F38446980B06F3713AAB20D1CEB4; // 0x49c(0x01)
	char UnknownData_49D[0x3]; // 0x49d(0x03)
	struct UTimelineComponent* BuildTimeline; // 0x4a0(0x08)
	struct TArray<struct UMaterialInterface*> MaterialsEndPost; // 0x4a8(0x10)
	struct UMaterialInterface* MaterialPipe; // 0x4b8(0x08)
	struct UMaterialInterface* MaterialBlueprintValid; // 0x4c0(0x08)
	struct UMaterialInterface* MaterialBlueprintInvalid; // 0x4c8(0x08)
	float Scale; // 0x4d0(0x04)
	float Height; // 0x4d4(0x04)
	float MinValidDistance; // 0x4d8(0x04)
	float MaxValidDistance; // 0x4dc(0x04)
	float SplineMeshDistance; // 0x4e0(0x04)
	char UnknownData_4E4[0x4]; // 0x4e4(0x04)
	struct UAudioComponent* BuildingAudioComponent; // 0x4e8(0x08)
	enum class ETrackBuildPlacementState LastState; // 0x4f0(0x01)
	bool SegmentValid; // 0x4f1(0x01)
	char UnknownData_4F2[0x6]; // 0x4f2(0x06)
	struct ABP_AttackablePiplinesegmentActor_C* AttackableActor; // 0x4f8(0x08)
	float MaxLightIntensity; // 0x500(0x04)
	char UnknownData_504[0x4]; // 0x504(0x04)
	struct FSimpleObjectInfoData PipelineObjectInfo; // 0x508(0x40)
	struct FSimpleObjectInfoData PipelineObjectInfoBroken; // 0x548(0x40)
	struct FSimpleObjectInfoData ConnectorObjectInfo; // 0x588(0x40)
	struct FSimpleObjectInfoData ConnectorObjectInfoBroken; // 0x5c8(0x40)

	bool IsPhotosensitiveMode(); // Function BP_Pipeline_Segment.BP_Pipeline_Segment_C.IsPhotosensitiveMode
	void HandlePhotosensitivity(); // Function BP_Pipeline_Segment.BP_Pipeline_Segment_C.HandlePhotosensitivity
	void UpdatePipelineNumber(); // Function BP_Pipeline_Segment.BP_Pipeline_Segment_C.UpdatePipelineNumber
	void OverrideEndPostMaterial(struct UMaterialInterface* Material); // Function BP_Pipeline_Segment.BP_Pipeline_Segment_C.OverrideEndPostMaterial
	void UpdateConnectableGFX(); // Function BP_Pipeline_Segment.BP_Pipeline_Segment_C.UpdateConnectableGFX
	void UpdatePlacementState(enum class ETrackBuildPlacementState InState); // Function BP_Pipeline_Segment.BP_Pipeline_Segment_C.UpdatePlacementState
	void UserConstructionScript(); // Function BP_Pipeline_Segment.BP_Pipeline_Segment_C.UserConstructionScript
	void BuildTimeline__FinishedFunc(); // Function BP_Pipeline_Segment.BP_Pipeline_Segment_C.BuildTimeline__FinishedFunc
	void BuildTimeline__UpdateFunc(); // Function BP_Pipeline_Segment.BP_Pipeline_Segment_C.BuildTimeline__UpdateFunc
	void Timeline_0__FinishedFunc(); // Function BP_Pipeline_Segment.BP_Pipeline_Segment_C.Timeline_0__FinishedFunc
	void Timeline_0__UpdateFunc(); // Function BP_Pipeline_Segment.BP_Pipeline_Segment_C.Timeline_0__UpdateFunc
	void ReceiveBeginPlay(); // Function BP_Pipeline_Segment.BP_Pipeline_Segment_C.ReceiveBeginPlay
	void ReceivPlacementValidChanged(bool InIsValid); // Function BP_Pipeline_Segment.BP_Pipeline_Segment_C.ReceivPlacementValidChanged
	void ReceivePlacementStateChanged(enum class ETrackBuildPlacementState NewState); // Function BP_Pipeline_Segment.BP_Pipeline_Segment_C.ReceivePlacementStateChanged
	void BndEvt__SegmentHealthComponent_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function BP_Pipeline_Segment.BP_Pipeline_Segment_C.BndEvt__SegmentHealthComponent_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature
	void ReversePipelineAnim(); // Function BP_Pipeline_Segment.BP_Pipeline_Segment_C.ReversePipelineAnim
	void BndEvt__SegmentHealthComponent_K2Node_ComponentBoundEvent_2_DamageSig__DelegateSignature(float amount); // Function BP_Pipeline_Segment.BP_Pipeline_Segment_C.BndEvt__SegmentHealthComponent_K2Node_ComponentBoundEvent_2_DamageSig__DelegateSignature
	void Update Can Undo(); // Function BP_Pipeline_Segment.BP_Pipeline_Segment_C.Update Can Undo
	void BndEvt__NextSegmentUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool canUse); // Function BP_Pipeline_Segment.BP_Pipeline_Segment_C.BndEvt__NextSegmentUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature
	void ReceiveSegmentBrokenChanged(bool InSegmentBroken); // Function BP_Pipeline_Segment.BP_Pipeline_Segment_C.ReceiveSegmentBrokenChanged
	void ReceivePlacementFinished(); // Function BP_Pipeline_Segment.BP_Pipeline_Segment_C.ReceivePlacementFinished
	void BndEvt__ActivateSegmentUsable_K2Node_ComponentBoundEvent_5_UsableChangedSignature__DelegateSignature(bool canUse); // Function BP_Pipeline_Segment.BP_Pipeline_Segment_C.BndEvt__ActivateSegmentUsable_K2Node_ComponentBoundEvent_5_UsableChangedSignature__DelegateSignature
	void UpdateCanActivateSegmentGFX(); // Function BP_Pipeline_Segment.BP_Pipeline_Segment_C.UpdateCanActivateSegmentGFX
	void BndEvt__ActivateSegmentUsable_K2Node_ComponentBoundEvent_4_UsedBySignature__DelegateSignature(struct APlayerCharacter* User); // Function BP_Pipeline_Segment.BP_Pipeline_Segment_C.BndEvt__ActivateSegmentUsable_K2Node_ComponentBoundEvent_4_UsedBySignature__DelegateSignature
	void ScheduleUpdatePlacementState(); // Function BP_Pipeline_Segment.BP_Pipeline_Segment_C.ScheduleUpdatePlacementState
	void CarveAroundSegment(); // Function BP_Pipeline_Segment.BP_Pipeline_Segment_C.CarveAroundSegment
	void ReceiveSegmentActivatedProgress(float InProgress); // Function BP_Pipeline_Segment.BP_Pipeline_Segment_C.ReceiveSegmentActivatedProgress
	void OnRepaired(struct APlayerCharacter* InUser); // Function BP_Pipeline_Segment.BP_Pipeline_Segment_C.OnRepaired
	void Hide Endpost Items(); // Function BP_Pipeline_Segment.BP_Pipeline_Segment_C.Hide Endpost Items
	void SetupPipelineNumber(); // Function BP_Pipeline_Segment.BP_Pipeline_Segment_C.SetupPipelineNumber
	void SegmentBrokenGFX(); // Function BP_Pipeline_Segment.BP_Pipeline_Segment_C.SegmentBrokenGFX
	void SegmentBrokenLocalWave(); // Function BP_Pipeline_Segment.BP_Pipeline_Segment_C.SegmentBrokenLocalWave
	void SegmentBrokenLaserpointerInfo(); // Function BP_Pipeline_Segment.BP_Pipeline_Segment_C.SegmentBrokenLaserpointerInfo
	void SegmentBrokenAudio(); // Function BP_Pipeline_Segment.BP_Pipeline_Segment_C.SegmentBrokenAudio
	void BndEvt__BrokenParticleSystem_Decals_K2Node_ComponentBoundEvent_6_ParticleCollisionSignature__DelegateSignature(struct FName EventName, float EmitterTime, int32_t ParticleTime, struct FVector Location, struct FVector Velocity, struct FVector Direction, struct FVector Normal, struct FName BoneName, struct UPhysicalMaterial* PhysMat); // Function BP_Pipeline_Segment.BP_Pipeline_Segment_C.BndEvt__BrokenParticleSystem_Decals_K2Node_ComponentBoundEvent_6_ParticleCollisionSignature__DelegateSignature
	void ReceivePlacementBegin(); // Function BP_Pipeline_Segment.BP_Pipeline_Segment_C.ReceivePlacementBegin
	void ParticlesOnPlaced(); // Function BP_Pipeline_Segment.BP_Pipeline_Segment_C.ParticlesOnPlaced
	void ExecuteUbergraph_BP_Pipeline_Segment(int32_t EntryPoint); // Function BP_Pipeline_Segment.BP_Pipeline_Segment_C.ExecuteUbergraph_BP_Pipeline_Segment
};

