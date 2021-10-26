// BlueprintGeneratedClass BP_MainFacility_DataVault.BP_MainFacility_DataVault_C
// Size: 0x4d8 (Inherited: 0x240)
struct ABP_MainFacility_DataVault_C : ATetherStation {
	FPointerToUberGraphFrame UberGraphFrame; // 0x240(0x08)
	UPointLightComponent* ShieldEmitterPointLight; // 0x248(0x08)
	USpotLightComponent* SpotLight_MainBelowGlow; // 0x250(0x08)
	UStaticMeshComponent* ShieldCol; // 0x258(0x08)
	UPathfinderCollisionComponent* PathfinderCollision_Bottom; // 0x260(0x08)
	UPathfinderCollisionComponent* PathfinderCollision_Top; // 0x268(0x08)
	UCapsuleComponent* Capsule; // 0x270(0x08)
	UChildActorComponent* ShieldEmitter; // 0x278(0x08)
	UStaticMeshComponent* MiddleCarver; // 0x280(0x08)
	UStaticMeshComponent* UpLight_5; // 0x288(0x08)
	UStaticMeshComponent* UpLight_4; // 0x290(0x08)
	UStaticMeshComponent* UpLight_3; // 0x298(0x08)
	UStaticMeshComponent* UpLight_2; // 0x2a0(0x08)
	USceneComponent* UpLights; // 0x2a8(0x08)
	UAudioComponent* FacilityBossShield_Cue; // 0x2b0(0x08)
	UChildActorComponent* TentacleSpawn3; // 0x2b8(0x08)
	UChildActorComponent* TentacleSpawn2; // 0x2c0(0x08)
	UChildActorComponent* TentacleSpawn1; // 0x2c8(0x08)
	UChildActorComponent* TentacleSpawn; // 0x2d0(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x2d8(0x08)
	UPathfinderCollisionComponent* ShieldPFCollision; // 0x2e0(0x08)
	UDamageComponent* Damage; // 0x2e8(0x08)
	UBP_FacilityElectricAttack_C* BP_FacilityElectricAttack; // 0x2f0(0x08)
	UStaticMeshComponent* Shield; // 0x2f8(0x08)
	USceneComponent* Center; // 0x300(0x08)
	UStaticMeshComponent* GunTower_Carver01; // 0x308(0x08)
	UStaticMeshComponent* TerrainScannerBase; // 0x310(0x08)
	USphereComponent* Sphere1; // 0x318(0x08)
	UOutlineComponent* outline; // 0x320(0x08)
	ULevelGenerationCarverComponent* LevelGenerationCarver; // 0x328(0x08)
	USpawnActorWithDebrisPosComponent* SpawnActorWithDebrisPos; // 0x330(0x08)
	URoomCarverComponent* RoomCarver; // 0x338(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x340(0x08)
	float FadeShield_NewTrack_0_1149055647097FB37A48EA8DF4A2DB45; // 0x348(0x04)
	enum class ETimelineDirection FadeShield__Direction_1149055647097FB37A48EA8DF4A2DB45; // 0x34c(0x01)
	UTimelineComponent* FadeShield; // 0x350(0x08)
	int32_t NumberOfActivations; // 0x358(0x04)
	int32_t ActivationsRequired; // 0x35c(0x04)
	int32_t spawned; // 0x360(0x04)
	FMulticastInlineDelegate FacilityActivated; // 0x368(0x10)
	FMulticastInlineDelegate FacilityDestroyed; // 0x378(0x10)
	FMulticastInlineDelegate FacilityDamaged; // 0x388(0x10)
	UMaterialInstanceDynamic* LightMaterial; // 0x398(0x08)
	bool Found; // 0x3a0(0x01)
	TArray<FTransform> TentacleSpawnTransforms; // 0x3a8(0x10)
	float MeleeAttackMaxDistance; // 0x3b8(0x04)
	float AttackTimer; // 0x3bc(0x04)
	FTimerHandle AttackTimerRef; // 0x3c0(0x08)
	bool IsBusy; // 0x3c8(0x01)
	float WeakpointHideTime; // 0x3cc(0x04)
	float WeakpointShowTime; // 0x3d0(0x04)
	float WeakpointShowMaxTime; // 0x3d4(0x04)
	float WeakpointShowMinTime; // 0x3d8(0x04)
	bool HideWeakpoint; // 0x3dc(0x01)
	UObject* WeakpointBP; // 0x3e0(0x08)
	int32_t NumConsecutiveShots; // 0x3e8(0x04)
	int32_t shotCount; // 0x3ec(0x04)
	int32_t RangedAttackTentacleIndex; // 0x3f0(0x04)
	TArray<APlayerCharacter*> PlayerArray2; // 0x3f8(0x10)
	bool CanShoot; // 0x408(0x01)
	bool PlayingMusic; // 0x409(0x01)
	FMusicHandle MusicHandle; // 0x40c(0x04)
	int32_t LastWeakpointPositionIndex; // 0x410(0x04)
	float TentaclesRegrowthPause; // 0x414(0x04)
	TArray<ABP_MainShieldActvator_C*> ShieldActivators; // 0x418(0x10)
	AENE_FacilityTentacle_C* CurrentTentacle; // 0x428(0x08)
	bool IsBossfightActive; // 0x430(0x01)
	bool AutoStart; // 0x431(0x01)
	float ElectricAttacCooldown; // 0x434(0x04)
	int32_t PlayersInTrigger; // 0x438(0x04)
	FTimerHandle ElectricAttackTimer; // 0x440(0x08)
	TArray<APlayerCharacter*> PlayersInsideTrigger; // 0x448(0x10)
	AENE_FacilityCaretaker_C* Caretaker; // 0x458(0x08)
	UMaterialInstanceDynamic* RimlightMaterial; // 0x460(0x08)
	UStaticMeshComponent* NewVar_2; // 0x468(0x08)
	TArray<ABP_FacilityTentacleManager_C*> TentacleSpawners; // 0x470(0x10)
	bool ShieldGeneratorDeactivated; // 0x480(0x01)
	FSimpleObjectInfoData ForceFieldInfo; // 0x488(0x40)
	FMulticastInlineDelegate FacilityFound; // 0x4c8(0x10)

	void UpdateLookAtShouts();
	void FadeInLightBelow();
	void Open Hatch();
	void BouncePlayer(AActor* InActor, FHitResult InHit);
	void OnRep_Caretaker();
	void AnyAlivePlayersInTrigger(bool Result);
	void Setup Patrol Drone(APatrolBot* Drone);
	void OnRep_ChangingFaze();
	void GetTentacles(TArray<AENE_FacilityTentacle_C*> Tentacles);
	AENE_FacilityTentacle_C* GetRandomTentacle();
	void GetTentacleSpawners(TArray<ABP_FacilityTentacleManager_C*> Array);
	void FindClosestWeakspotLocation(FVector TargetLocaton, FTransform ClosestWeakpointTransform);
	void Disable Shield();
	void FindValidRangedTarget(AENE_FacilityTentacle_C* TentacleRef, float MinDistance, bool NeedLoS, AActor* TargetPlayer);
	void TryStartMeleeAttack();
	void OnRep_Found();
	void OnRep_HasActivated();
	void SetActivationsRequired(int32_t activations);
	void ActivatorEnganged();
	void UserConstructionScript();
	void FadeShield__FinishedFunc();
	void FadeShield__UpdateFunc();
	void ReceiveBeginPlay();
	void Cheat_TeleportPlayer();
	void BndEvt__Sphere1_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void OnActivated();
	void OnGeneratorsReady();
	void BndEvt__ActivateUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(APlayerCharacter* User, enum class EInputKeys Key);
	void StartFinalFight();
	void FinalFightOver();
	void RegrowTentacles();
	void BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void BndEvt__Capsule_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
	void TryElectricAttack();
	void DroneSpawned(APawn* enemy);
	void CaretakerDefeated(UHealthComponentBase* HealthComponent);
	void OnCaretakerSpawned(AENE_FacilityCaretaker_C* Caretaker);
	void DisableShields();
	void OnBatteriesExtracted();
	void Cheat_DisableShieldEmitter();
	void LeftCharged(ABP_Facility_PowerStation_GeneratorBase_C* Generator);
	void RightCharged(ABP_Facility_PowerStation_GeneratorBase_C* Generator);
	void PreventSpawning();
	void KillTentacles();
	void PauseTentacles(float Duration);
	void ExecuteUbergraph_BP_MainFacility_DataVault(int32_t EntryPoint);
	void FacilityFound__DelegateSignature();
	void FacilityDamaged__DelegateSignature();
	void FacilityDestroyed__DelegateSignature();
	void FacilityActivated__DelegateSignature();
};

