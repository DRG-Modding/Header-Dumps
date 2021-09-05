// BlueprintGeneratedClass BP_Refinery.BP_Refinery_C
// Size: 0x630 (Inherited: 0x398)
struct ABP_Refinery_C : AFSDRefinery {
	FPointerToUberGraphFrame UberGraphFrame; // 0x398(0x08)
	UPathfinderCollisionComponent* PB_ButtonConsole; // 0x3a0(0x08)
	UPathfinderCollisionComponent* PB_UnderMainPlatform2; // 0x3a8(0x08)
	USkeletalMeshComponent* Refinery; // 0x3b0(0x08)
	USceneComponent* RespawnPoint; // 0x3b8(0x08)
	UCapsuleComponent* Capsule; // 0x3c0(0x08)
	USpotLightComponent* SpotLight; // 0x3c8(0x08)
	USphereComponent* HeatSource; // 0x3d0(0x08)
	UOutlineComponent* outline; // 0x3d8(0x08)
	UChildActorComponent* BP_Refinery_RocketLamp06; // 0x3e0(0x08)
	UChildActorComponent* BP_Refinery_RocketLamp08; // 0x3e8(0x08)
	UChildActorComponent* BP_Refinery_RocketLamp07; // 0x3f0(0x08)
	UChildActorComponent* BP_Refinery_RocketLamp05; // 0x3f8(0x08)
	UChildActorComponent* BP_Refinery_RocketLamp02; // 0x400(0x08)
	UChildActorComponent* BP_Refinery_RocketLamp04; // 0x408(0x08)
	UChildActorComponent* BP_Refinery_RocketLamp03; // 0x410(0x08)
	UChildActorComponent* BP_Refinery_RocketLamp01; // 0x418(0x08)
	UChildActorComponent* BP_Refinery_Lamp04; // 0x420(0x08)
	UPointLightComponent* PointLight4; // 0x428(0x08)
	UChildActorComponent* BP_Refinery_Lamp03; // 0x430(0x08)
	UChildActorComponent* BP_Refinery_Lamp02; // 0x438(0x08)
	UChildActorComponent* BP_Refinery_Lamp01; // 0x440(0x08)
	UChildActorComponent* OxygenTank01; // 0x448(0x08)
	UChildActorComponent* OxygenTank03; // 0x450(0x08)
	UChildActorComponent* OxygenAudio; // 0x458(0x08)
	UChildActorComponent* OxygenTank02; // 0x460(0x08)
	UOxygenSourceComponent* OxygenSource; // 0x468(0x08)
	USphereComponent* KillSphere; // 0x470(0x08)
	UWidgetComponent* UseButtonWidget; // 0x478(0x08)
	UWidgetComponent* UseButtonMonitor; // 0x480(0x08)
	UStaticMeshComponent* UseButton; // 0x488(0x08)
	UChildActorComponent* BP_Refinery_ProjectorLight3; // 0x490(0x08)
	UChildActorComponent* BP_Refinery_ProjectorLight2; // 0x498(0x08)
	UChildActorComponent* BP_Refinery_ProjectorLight1; // 0x4a0(0x08)
	UAudioComponent* AudioDropStarted; // 0x4a8(0x08)
	USceneComponent* AudioRoot; // 0x4b0(0x08)
	UChildActorComponent* BP_Depositor_02; // 0x4b8(0x08)
	UChildActorComponent* BP_Depositor_01; // 0x4c0(0x08)
	USceneComponent* Active Refining Particles; // 0x4c8(0x08)
	UPathfinderCollisionComponent* PB_BottomPlatform; // 0x4d0(0x08)
	UPathfinderCollisionComponent* PB_Ramp03; // 0x4d8(0x08)
	UPathfinderCollisionComponent* PB_Ramp02; // 0x4e0(0x08)
	UPathfinderCollisionComponent* PB_Ramp01; // 0x4e8(0x08)
	UPathfinderCollisionComponent* PB_UnderMainPlatform; // 0x4f0(0x08)
	UPathfinderCollisionComponent* PB_Rocket; // 0x4f8(0x08)
	UPathfinderCollisionComponent* PC_BottomPlatform; // 0x500(0x08)
	UPathfinderCollisionComponent* PC_Ramp03; // 0x508(0x08)
	UPathfinderCollisionComponent* PC_Ramp02; // 0x510(0x08)
	UPathfinderCollisionComponent* PC_Ramp01; // 0x518(0x08)
	UPathfinderCollisionComponent* PC_MainPlatform; // 0x520(0x08)
	USceneComponent* PathfinderBlockers; // 0x528(0x08)
	UChildActorComponent* BP_Refinery_WarningLight3; // 0x530(0x08)
	UChildActorComponent* BP_Refinery_WarningLight2; // 0x538(0x08)
	UChildActorComponent* BP_Refinery_WarningLight1; // 0x540(0x08)
	UChildActorComponent* ProgressBar03; // 0x548(0x08)
	UChildActorComponent* ProgressBar02; // 0x550(0x08)
	UChildActorComponent* ProgressBar01; // 0x558(0x08)
	UTerrainScannerStaticMesh* TerrainScannerStaticMesh; // 0x560(0x08)
	UTerrainPlacementComponent* TerrainPlacement1; // 0x568(0x08)
	USphereComponent* UseButtonCollider; // 0x570(0x08)
	UMeshCarverComponent* MeshCarver; // 0x578(0x08)
	UChildActorComponent* PipeStart03; // 0x580(0x08)
	UChildActorComponent* PipeStart02; // 0x588(0x08)
	UChildActorComponent* PipeStart01; // 0x590(0x08)
	USpawnActorWithDebrisPosComponent* SpawnTarget; // 0x598(0x08)
	UPointLightComponent* PointLight3; // 0x5a0(0x08)
	UPointLightComponent* PointLight2; // 0x5a8(0x08)
	UPointLightComponent* PointLight1; // 0x5b0(0x08)
	UPointLightComponent* PointLight; // 0x5b8(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x5c0(0x08)
	UActorTrackingComponent* ActorTracking; // 0x5c8(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x5d0(0x08)
	USkeletalMeshComponent* Drill; // 0x5d8(0x08)
	UEnemyWaveController* ActiveRefiningWave; // 0x5e0(0x08)
	TArray<APipelineStart*> CompletedPipelines; // 0x5e8(0x10)
	UEnemyWaveController* ActiveRefiningWaveConstant; // 0x5f8(0x08)
	ABP_Refinery_LandingZone_C* LandinZoneInstance; // 0x600(0x08)
	UAudioComponent* DrillingSoundInstance; // 0x608(0x08)
	UParticleSystemComponent* DrillParticles01; // 0x610(0x08)
	UParticleSystemComponent* DrillParticles02; // 0x618(0x08)
	TArray<APlayerCharacter*> DeadPlayers; // 0x620(0x10)

	bool IsDeepDive();
	void Spawn Landing Zone();
	void CheckPipelineMissionShout(APipelineStart* InPipelineStart, enum class EPipelineBuildState InPipelineState);
	void ActivatePathfinderBlockers();
	void UserConstructionScript();
	void OnDroppodImpact();
	void ReceiveRefineryStateChanged(enum class ERefineryState InState);
	void EnemiesOnStateChanged();
	void ReceiveBeginPlay();
	void Mission Shouts on State Changed();
	void ReceivePipelineStateChanged(APipelineStart* InPipeline, enum class EPipelineBuildState InState);
	void BndEvt__UsableStartRefining_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(APlayerCharacter* User);
	void OnDrillingStarted();
	void AudioOnStateChanged();
	void OnDropStartedGFX();
	void OnDropImpactGFX();
	void SetupUseButtonUI();
	void BndEvt__KillSphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void BndEvt__HeatSource_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void BndEvt__HeatSource_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
	void CameraShakeOnStateChange();
	void OnObjectivesCompleted_Event_1();
	void BndEvt__UsableStartRefining_K2Node_ComponentBoundEvent_2_UsableChangedSignature__DelegateSignature(bool canUse);
	void BndEvt__UsableLaunchRocket_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature(bool canUse);
	void UpdateUseIcon();
	void ExecuteUbergraph_BP_Refinery(int32_t EntryPoint);
};

