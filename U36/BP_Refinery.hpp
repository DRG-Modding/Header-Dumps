#ifndef UE4SS_SDK_BP_Refinery_HPP
#define UE4SS_SDK_BP_Refinery_HPP

class ABP_Refinery_C : public AFSDRefinery
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPathfinderCollisionComponent* PB_ButtonConsole;
    class UPathfinderCollisionComponent* PB_UnderMainPlatform2;
    class USkeletalMeshComponent* Refinery;
    class USceneComponent* RespawnPoint;
    class UCapsuleComponent* Capsule;
    class USpotLightComponent* SpotLight;
    class USphereComponent* HeatSource;
    class UOutlineComponent* outline;
    class UChildActorComponent* BP_Refinery_RocketLamp06;
    class UChildActorComponent* BP_Refinery_RocketLamp08;
    class UChildActorComponent* BP_Refinery_RocketLamp07;
    class UChildActorComponent* BP_Refinery_RocketLamp05;
    class UChildActorComponent* BP_Refinery_RocketLamp02;
    class UChildActorComponent* BP_Refinery_RocketLamp04;
    class UChildActorComponent* BP_Refinery_RocketLamp03;
    class UChildActorComponent* BP_Refinery_RocketLamp01;
    class UChildActorComponent* BP_Refinery_Lamp04;
    class UPointLightComponent* PointLight4;
    class UChildActorComponent* BP_Refinery_Lamp03;
    class UChildActorComponent* BP_Refinery_Lamp02;
    class UChildActorComponent* BP_Refinery_Lamp01;
    class UChildActorComponent* OxygenTank01;
    class UChildActorComponent* OxygenTank03;
    class UChildActorComponent* OxygenAudio;
    class UChildActorComponent* OxygenTank02;
    class UOxygenSourceComponent* OxygenSource;
    class USphereComponent* KillSphere;
    class UWidgetComponent* UseButtonWidget;
    class UWidgetComponent* UseButtonMonitor;
    class UStaticMeshComponent* UseButton;
    class UChildActorComponent* BP_Refinery_ProjectorLight3;
    class UChildActorComponent* BP_Refinery_ProjectorLight2;
    class UChildActorComponent* BP_Refinery_ProjectorLight1;
    class UAudioComponent* AudioDropStarted;
    class USceneComponent* AudioRoot;
    class UChildActorComponent* BP_Depositor_02;
    class UChildActorComponent* BP_Depositor_01;
    class USceneComponent* Active Refining Particles;
    class UPathfinderCollisionComponent* PB_BottomPlatform;
    class UPathfinderCollisionComponent* PB_Ramp03;
    class UPathfinderCollisionComponent* PB_Ramp02;
    class UPathfinderCollisionComponent* PB_Ramp01;
    class UPathfinderCollisionComponent* PB_UnderMainPlatform;
    class UPathfinderCollisionComponent* PB_Rocket;
    class UPathfinderCollisionComponent* PC_BottomPlatform;
    class UPathfinderCollisionComponent* PC_Ramp03;
    class UPathfinderCollisionComponent* PC_Ramp02;
    class UPathfinderCollisionComponent* PC_Ramp01;
    class UPathfinderCollisionComponent* PC_MainPlatform;
    class USceneComponent* PathfinderBlockers;
    class UChildActorComponent* BP_Refinery_WarningLight3;
    class UChildActorComponent* BP_Refinery_WarningLight2;
    class UChildActorComponent* BP_Refinery_WarningLight1;
    class UChildActorComponent* ProgressBar03;
    class UChildActorComponent* ProgressBar02;
    class UChildActorComponent* ProgressBar01;
    class UTerrainScannerStaticMesh* TerrainScannerStaticMesh;
    class UTerrainPlacementComponent* TerrainPlacement1;
    class USphereComponent* UseButtonCollider;
    class UMeshCarverComponent* MeshCarver;
    class UChildActorComponent* PipeStart03;
    class UChildActorComponent* PipeStart02;
    class UChildActorComponent* PipeStart01;
    class USpawnActorWithDebrisPosComponent* SpawnTarget;
    class UPointLightComponent* PointLight3;
    class UPointLightComponent* PointLight2;
    class UPointLightComponent* PointLight1;
    class UPointLightComponent* PointLight;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UActorTrackingComponent* ActorTracking;
    class UTerrainPlacementComponent* terrainPlacement;
    class USkeletalMeshComponent* Drill;
    class UEnemyWaveController* ActiveRefiningWave;
    TArray<class APipelineStart*> CompletedPipelines;
    class UEnemyWaveController* ActiveRefiningWaveConstant;
    class ABP_Refinery_LandingZone_C* LandinZoneInstance;
    class UAudioComponent* DrillingSoundInstance;
    class UParticleSystemComponent* DrillParticles01;
    class UParticleSystemComponent* DrillParticles02;
    TArray<class APlayerCharacter*> DeadPlayers;

    bool IsDeepDive();
    void Spawn Landing Zone();
    void CheckPipelineMissionShout(class APipelineStart* InPipelineStart, EPipelineBuildState InPipelineState);
    void ActivatePathfinderBlockers();
    void UserConstructionScript();
    void OnDroppodImpact();
    void ReceiveRefineryStateChanged(ERefineryState InState);
    void EnemiesOnStateChanged();
    void ReceiveBeginPlay();
    void Mission Shouts on State Changed();
    void ReceivePipelineStateChanged(class APipelineStart* InPipeline, EPipelineBuildState InState);
    void BndEvt__UsableStartRefining_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void OnDrillingStarted();
    void AudioOnStateChanged();
    void OnDropStartedGFX();
    void OnDropImpactGFX();
    void SetupUseButtonUI();
    void BndEvt__KillSphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__HeatSource_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__HeatSource_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void CameraShakeOnStateChange();
    void OnObjectivesCompleted_Event_0();
    void BndEvt__UsableStartRefining_K2Node_ComponentBoundEvent_2_UsableChangedSignature__DelegateSignature(bool CanUse);
    void BndEvt__UsableLaunchRocket_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature(bool CanUse);
    void UpdateUseIcon();
    void ExecuteUbergraph_BP_Refinery(int32 EntryPoint);
};

#endif
