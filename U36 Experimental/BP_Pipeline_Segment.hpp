#ifndef UE4SS_SDK_BP_Pipeline_Segment_HPP
#define UE4SS_SDK_BP_Pipeline_Segment_HPP

class ABP_Pipeline_Segment_C : public APipelineSegment
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTerrainScannerStaticMesh* TerrainScannerStaticMesh;
    class UTerrainScannerSplineMesh* TerrainScannerSplineMesh;
    class UStaticMeshComponent* ActivateLightCone;
    class UPointLightComponent* ActivatePointLight ;
    class UParticleSystemComponent* BrokenParticleSystem_Decals;
    class UChildActorComponent* ActivateHologram;
    class UAudioComponent* PipeLeakingMorkiteSprayingOut_Cue;
    class UAudioComponent* PipeLeakingAlarm_Cue;
    class UStaticMeshComponent* SM_LightCone_Red;
    class UParticleSystemComponent* BrokenParticleSystem 05;
    class UParticleSystemComponent* BrokenParticleSystem 04;
    class UParticleSystemComponent* BrokenParticleSystem 03;
    class UParticleSystemComponent* BrokenParticleSystem 02;
    class UChildActorComponent* BP_StatusLamp;
    class USceneComponent* BrokenNode;
    class USphereComponent* RepairCollider;
    class USphereComponent* ActivateSegmentCollider;
    class UParticleSystemComponent* ConnectedParticleSystem;
    class USphereComponent* NextSegmentCollider;
    class USplineDecoratorComponent* RingDecorator;
    class UPointLightComponent* PointLight Red;
    class UParticleSystemComponent* BrokenParticleSystem 01;
    class UTerrainScannerStaticMesh* TerrainScanner_Broken;
    class UAudioComponent* AudioActivating;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UBP_Pipeline_Movement_C* BP_Pipeline_Movement;
    class UArrowComponent* Arrow;
    float Timeline_0_Progress_DAE98DA44362821170C92FBA184208DB;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_DAE98DA44362821170C92FBA184208DB;
    class UTimelineComponent* Timeline_0;
    float BuildTimeline_Progress_6223F38446980B06F3713AAB20D1CEB4;
    TEnumAsByte<ETimelineDirection::Type> BuildTimeline__Direction_6223F38446980B06F3713AAB20D1CEB4;
    class UTimelineComponent* BuildTimeline;
    TArray<class UMaterialInterface*> MaterialsEndPost;
    class UMaterialInterface* MaterialPipe;
    class UMaterialInterface* MaterialBlueprintValid;
    class UMaterialInterface* MaterialBlueprintInvalid;
    float Scale;
    float Height;
    float MinValidDistance;
    float MaxValidDistance;
    float SplineMeshDistance;
    class UAudioComponent* BuildingAudioComponent;
    ETrackBuildPlacementState LastState;
    bool SegmentValid;
    class ABP_AttackablePiplinesegmentActor_C* AttackableActor;
    float MaxLightIntensity;
    FSimpleObjectInfoData PipelineObjectInfo;
    FSimpleObjectInfoData PipelineObjectInfoBroken;
    FSimpleObjectInfoData ConnectorObjectInfo;
    FSimpleObjectInfoData ConnectorObjectInfoBroken;

    bool IsPhotosensitiveMode();
    void HandlePhotosensitivity();
    void UpdatePipelineNumber();
    void OverrideEndPostMaterial(class UMaterialInterface* Material);
    void UpdateConnectableGFX();
    void UpdatePlacementState(ETrackBuildPlacementState InState);
    void UserConstructionScript();
    void BuildTimeline__FinishedFunc();
    void BuildTimeline__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void ReceivPlacementValidChanged(bool InIsValid);
    void ReceivePlacementStateChanged(ETrackBuildPlacementState NewState);
    void BndEvt__SegmentHealthComponent_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void ReversePipelineAnim();
    void BndEvt__SegmentHealthComponent_K2Node_ComponentBoundEvent_2_DamageSig__DelegateSignature(float Amount);
    void Update Can Undo();
    void BndEvt__NextSegmentUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool CanUse);
    void ReceiveSegmentBrokenChanged(bool InSegmentBroken);
    void ReceivePlacementFinished();
    void BndEvt__ActivateSegmentUsable_K2Node_ComponentBoundEvent_5_UsableChangedSignature__DelegateSignature(bool CanUse);
    void UpdateCanActivateSegmentGFX();
    void BndEvt__ActivateSegmentUsable_K2Node_ComponentBoundEvent_4_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void ScheduleUpdatePlacementState();
    void CarveAroundSegment();
    void ReceiveSegmentActivatedProgress(float InProgress);
    void OnRepaired(class APlayerCharacter* InUser);
    void Hide Endpost Items();
    void SetupPipelineNumber();
    void SegmentBrokenGFX();
    void SegmentBrokenLocalWave();
    void SegmentBrokenLaserpointerInfo();
    void SegmentBrokenAudio();
    void BndEvt__BrokenParticleSystem_Decals_K2Node_ComponentBoundEvent_6_ParticleCollisionSignature__DelegateSignature(FName EventName, float EmitterTime, int32 ParticleTime, FVector Location, FVector Velocity, FVector Direction, FVector Normal, FName BoneName, class UPhysicalMaterial* PhysMat);
    void ReceivePlacementBegin();
    void ParticlesOnPlaced();
    void ExecuteUbergraph_BP_Pipeline_Segment(int32 EntryPoint);
};

#endif
