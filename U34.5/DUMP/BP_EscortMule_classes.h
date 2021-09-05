// BlueprintGeneratedClass BP_EscortMule.BP_EscortMule_C
// Size: 0x8dd (Inherited: 0x490)
struct ABP_EscortMule_C : AEscortMule {
	FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	UBoxComponent* Collision_Drill_Pawn; // 0x498(0x08)
	USceneComponent* ForwardTracePointTop; // 0x4a0(0x08)
	UBoxComponent* Collision_Platform1; // 0x4a8(0x08)
	UBoxComponent* Collision_Platform; // 0x4b0(0x08)
	UAutoCarverComponent* AutoCarverSmall; // 0x4b8(0x08)
	UAutoCarverComponent* AutoCarverbig; // 0x4c0(0x08)
	USceneComponent* CarverRoot; // 0x4c8(0x08)
	UNiagaraComponent* P_LTracks; // 0x4d0(0x08)
	UNiagaraComponent* P_RTracks; // 0x4d8(0x08)
	UNiagaraComponent* P_LeftBoxDamagedLow; // 0x4e0(0x08)
	UNiagaraComponent* P_LeftBoxDamagedHigh; // 0x4e8(0x08)
	UNiagaraComponent* P_LeftBoxDamagedMedium; // 0x4f0(0x08)
	USceneComponent* LeftBoxParticleNormal; // 0x4f8(0x08)
	UNiagaraComponent* P_RightBoxDamagedHigh; // 0x500(0x08)
	UNiagaraComponent* P_RightBoxDamagedLow; // 0x508(0x08)
	UNiagaraComponent* P_RightBoxDamagedMedium; // 0x510(0x08)
	USceneComponent* RightBoxParticleNormal; // 0x518(0x08)
	USceneComponent* LeftBoxParticleMainBody; // 0x520(0x08)
	USceneComponent* RightBoxParticleMainBody; // 0x528(0x08)
	UNiagaraComponent* EngineStoppedSmoke; // 0x530(0x08)
	UPointLightComponent* Box_Light_L; // 0x538(0x08)
	UPointLightComponent* Box_Light_R; // 0x540(0x08)
	UPointLightComponent* PointLight6; // 0x548(0x08)
	UPointLightComponent* PointLight5; // 0x550(0x08)
	UNiagaraComponent* JetFlame; // 0x558(0x08)
	USceneComponent* impactLocation; // 0x560(0x08)
	UNiagaraComponent* P_DrillHeartstone; // 0x568(0x08)
	USkeletalMeshComponent* Mesh_DrillHead; // 0x570(0x08)
	USceneComponent* DrillRotator; // 0x578(0x08)
	UNiagaraComponent* ExhaustRight; // 0x580(0x08)
	UNiagaraComponent* ExhaustLeft; // 0x588(0x08)
	UWidgetComponent* Widget_Canister2; // 0x590(0x08)
	UWidgetComponent* Widget_Canister1; // 0x598(0x08)
	USpotLightComponent* SpotLight3; // 0x5a0(0x08)
	UStaticMeshComponent* Cone3; // 0x5a8(0x08)
	UStaticMeshComponent* Cone2; // 0x5b0(0x08)
	USpotLightComponent* SpotLight2; // 0x5b8(0x08)
	USceneComponent* SpotlightRight; // 0x5c0(0x08)
	USceneComponent* SpotlightLeft; // 0x5c8(0x08)
	UStaticMeshComponent* DrillDozerGuts_Right; // 0x5d0(0x08)
	UStaticMeshComponent* DrillDozerGuts_Left; // 0x5d8(0x08)
	UBoxComponent* Collision_RepairBoxBody; // 0x5e0(0x08)
	UPointLightComponent* Red Button Light; // 0x5e8(0x08)
	UPointLightComponent* DorettaPointLight; // 0x5f0(0x08)
	USpotLightComponent* Doretta_SpotLight; // 0x5f8(0x08)
	UStaticMeshComponent* Doretta_Cone; // 0x600(0x08)
	UStaticMeshComponent* SM_WallLamp_004; // 0x608(0x08)
	UPointLightComponent* PointLight2; // 0x610(0x08)
	UBoxComponent* Achievement_Riding_Collider; // 0x618(0x08)
	USphereComponent* Collision_Drill_Damage; // 0x620(0x08)
	UBoxComponent* Colission_Doretta; // 0x628(0x08)
	UInstantUsable* PetDorettaUsable; // 0x630(0x08)
	USceneComponent* FlameHover; // 0x638(0x08)
	UAudioComponent* Drilldozer_JetEngine_Start_Cue; // 0x640(0x08)
	UAudioComponent* Drilldozer_JetEninge_Cue; // 0x648(0x08)
	UChildActorComponent* OxygenTank01; // 0x650(0x08)
	UOxygenSourceComponent* OxygenSource; // 0x658(0x08)
	USkeletalMeshComponent* Cannister_02; // 0x660(0x08)
	USkeletalMeshComponent* Cannister_01; // 0x668(0x08)
	UWidgetComponent* Widget_Button; // 0x670(0x08)
	USphereComponent* UseSphere_Activate; // 0x678(0x08)
	USceneComponent* ButtonRoot; // 0x680(0x08)
	UNiagaraComponent* P_Drill; // 0x688(0x08)
	UBoxComponent* Collision_RepairBoxLeft; // 0x690(0x08)
	UBoxComponent* Collision_RepairBoxRight; // 0x698(0x08)
	USkeletalMeshComponent* RepairBoxRight; // 0x6a0(0x08)
	USkeletalMeshComponent* RepairBoxLeft; // 0x6a8(0x08)
	UOutlineComponent* outline; // 0x6b0(0x08)
	UBoxComponent* FearBox; // 0x6b8(0x08)
	UPawnStatsComponent* PawnStats; // 0x6c0(0x08)
	UAudioComponent* DrillingVehicle_DrillingShell_Cue; // 0x6c8(0x08)
	UChildActorComponent* RTrack; // 0x6d0(0x08)
	UChildActorComponent* LTrack; // 0x6d8(0x08)
	USceneComponent* DrillHeadRoot; // 0x6e0(0x08)
	UDamageComponent* WeakpointDestroyedDamage; // 0x6e8(0x08)
	UDamageComponent* DrillDamage; // 0x6f0(0x08)
	UEscortMuleAttackerPositioning* EscortMuleAttackerPositioning; // 0x6f8(0x08)
	UAudioComponent* Engine_Cue; // 0x700(0x08)
	UAudioComponent* DrillHead_Cue; // 0x708(0x08)
	USceneComponent* ForwardTracePoint; // 0x710(0x08)
	UPointLightComponent* CannisterLight2; // 0x718(0x08)
	UPointLightComponent* CannisterLight1; // 0x720(0x08)
	USphereComponent* Sphere2; // 0x728(0x08)
	USphereComponent* Sphere1; // 0x730(0x08)
	UBP_EscortCannisterUsable_C* Cannister2Usable; // 0x738(0x08)
	UBP_EscortCannisterUsable_C* Cannister1Usable; // 0x740(0x08)
	UAudioComponent* DrillVehicle_RubbleSoftB_Cue; // 0x748(0x08)
	UAudioComponent* DrillVehicle_RubbleSoftA_Cue; // 0x750(0x08)
	UAudioComponent* DrillVehicleTrack2_Cue; // 0x758(0x08)
	UAudioComponent* Rubble_Cue; // 0x760(0x08)
	UAudioComponent* DrillVehicleTrack1_Cue; // 0x768(0x08)
	UPointLightComponent* PointLight1; // 0x770(0x08)
	UStaticMeshComponent* SM_WallLamp_003; // 0x778(0x08)
	USceneComponent* Center; // 0x780(0x08)
	USceneComponent* CarverScaler; // 0x788(0x08)
	URadarPointComponent* radarPoint; // 0x790(0x08)
	UStaticMeshComponent* TerrainScannerMesh; // 0x798(0x08)
	UPathfinderCollisionComponent* PathfinderCollision; // 0x7a0(0x08)
	USceneComponent* CarvParticleLocation; // 0x7a8(0x08)
	USingleUsableComponent* ActivateMachineUsable; // 0x7b0(0x08)
	UContinuousUsableComponent* ContinuousUsable; // 0x7b8(0x08)
	float Timeline_MoveDrillOut_Delta_1A396ACD40DA3371D46E58AD5DAAFC92; // 0x7c0(0x04)
	enum class ETimelineDirection Timeline_MoveDrillOut__Direction_1A396ACD40DA3371D46E58AD5DAAFC92; // 0x7c4(0x01)
	UTimelineComponent* Timeline_MoveDrillOut; // 0x7c8(0x08)
	float MoveCloser_Alpha_E35B04D84FB5313C58E2E18AE68DA5A2; // 0x7d0(0x04)
	enum class ETimelineDirection MoveCloser__Direction_E35B04D84FB5313C58E2E18AE68DA5A2; // 0x7d4(0x01)
	UTimelineComponent* MoveCloser; // 0x7d8(0x08)
	FVector HammerDrillTest_DrillHead_MoveVectorV2_FAAD5F0B4630F8F53E3DFB9B966534B9; // 0x7e0(0x0c)
	float HammerDrillTest_Hammer_FAAD5F0B4630F8F53E3DFB9B966534B9; // 0x7ec(0x04)
	enum class ETimelineDirection HammerDrillTest__Direction_FAAD5F0B4630F8F53E3DFB9B966534B9; // 0x7f0(0x01)
	UTimelineComponent* HammerDrillTest; // 0x7f8(0x08)
	FMulticastInlineDelegate ResourceFull; // 0x800(0x10)
	UEscortObjective* EscortObj; // 0x810(0x08)
	enum class EEscortMissionState State; // 0x818(0x01)
	UAudioComponent* Sound_Moving; // 0x820(0x08)
	UAudioComponent* Sound_Drilling; // 0x828(0x08)
	bool UnderAttack; // 0x830(0x01)
	UPrimitiveComponent* ActiveRepairCollider; // 0x838(0x08)
	FVector StartLoc; // 0x840(0x0c)
	FVector EndLoc; // 0x84c(0x0c)
	enum class EEscortMissionState oldState; // 0x858(0x01)
	float LastDamageSoundTime; // 0x85c(0x04)
	bool DrillPaused; // 0x860(0x01)
	UABP_DrillDozer_Drill_C* DrillHeadAnimBP; // 0x868(0x08)
	USkeletalMeshComponent* ActiveRepairMesh; // 0x870(0x08)
	FTimerHandle NotRepairedEvent; // 0x878(0x08)
	UHUDWarningWidget* HUDWarning; // 0x880(0x08)
	UHUDWarningWidget* HUDCellDestroyWarning; // 0x888(0x08)
	bool LastHoverTest; // 0x890(0x01)
	int32_t EnemiesKilled; // 0x894(0x04)
	UFSDAchievement* DrillByShooting; // 0x898(0x08)
	UMaterialInstanceDynamic* LeftBoxMaterial; // 0x8a0(0x08)
	UMaterialInstanceDynamic* RightBoxMaterial; // 0x8a8(0x08)
	UMaterialInstanceDynamic* BodyMaterial; // 0x8b0(0x08)
	bool DoRotateInterpOnServer; // 0x8b8(0x01)
	float DrillRotateSpeed; // 0x8bc(0x04)
	UNiagaraComponent* EngineStopSmoke; // 0x8c0(0x08)
	FMulticastInlineDelegate EscortStateChanged; // 0x8c8(0x10)
	int32_t MaxAttackersOmoranFight; // 0x8d8(0x04)
	bool IsPathReady; // 0x8dc(0x01)

	void RepComponentDamage();
	void UpdateRepairBoxLook();
	void UpdateBoxDamageEmitter(UNiagaraComponent* ParticlesLow, UNiagaraComponent* ParticlesMedium, UNiagaraComponent* ParticlesHigh, float HealthPercent);
	void SetBothCannistersVisibility(bool IsVisible);
	void IsFriendlyFire(AActor* Object, bool bSuccess);
	void OnRep_DrillPaused();
	void TryPlayDamageSound(FVector Location);
	void Update Moving FX(enum class EEscortMissionState InState);
	void SetupParticleMaterials();
	void HandleCannisterUsed(APlayerCharacter* User, UInstantUsable* Usable);
	void CreateCanister(UInstantUsable* NewItem_Usable, USkinnedMeshComponent* MeshComponent, UWidgetComponent* Widget);
	bool GetIsTargetable();
	FVector GetTargetCenterMass();
	UHealthComponentBase* GetTargetHealthComponent();
	void UserConstructionScript();
	void HammerDrillTest__FinishedFunc();
	void HammerDrillTest__UpdateFunc();
	void HammerDrillTest__HitEvents__EventFunc();
	void MoveCloser__FinishedFunc();
	void MoveCloser__UpdateFunc();
	void Timeline_MoveDrillOut__FinishedFunc();
	void Timeline_MoveDrillOut__UpdateFunc();
	void OnNotifyEnd_654993624EF7011EBE481AB20B9D51EC(FName NotifyName);
	void OnNotifyBegin_654993624EF7011EBE481AB20B9D51EC(FName NotifyName);
	void OnInterrupted_654993624EF7011EBE481AB20B9D51EC(FName NotifyName);
	void OnBlendOut_654993624EF7011EBE481AB20B9D51EC(FName NotifyName);
	void OnCompleted_654993624EF7011EBE481AB20B9D51EC(FName NotifyName);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void BndEvt__ContinuousUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(APlayerCharacter* User);
	void OnObjectiveStateChanged(enum class EEscortMissionState NewState);
	void BndEvt__StartMachineUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature(APlayerCharacter* User);
	void BndEvt__StartMachineUsable_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature(bool canUse);
	void StateChanged(enum class EEscortMissionState State);
	void EngineStartFX();
	void EngineStopFX();
	void RefuelCompleteFx();
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_5_DamageSig__DelegateSignature(float amount);
	void DrillingAtDestinationFx();
	void ShellCrackedFx();
	void RefreshPathfindingCollision();
	void VehicleDestroyedFx();
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_6_HealthChangedSig__DelegateSignature(float Health);
	void BndEvt__Cannister1Usable_K2Node_ComponentBoundEvent_7_UsedBySignature__DelegateSignature(APlayerCharacter* User);
	void BndEvt__Cannister2Usable_K2Node_ComponentBoundEvent_8_UsedBySignature__DelegateSignature(APlayerCharacter* User);
	void OnExtractorSlotChanged(FEscortMuleExtractorSlot Slot, int32_t Index);
	void ChechHover();
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_4_HealthSegmentChange__DelegateSignature(int32_t currSegment, int32_t prevSegment);
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_11_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void SetActiveRepair(UPrimitiveComponent* Collider, USkeletalMeshComponent* ActiveRepairMest);
	void ExplodeRepair(USkeletalMeshComponent* Collider);
	void ShellCracked(int32_t numberOfShellsCracked);
	void OnRep_IsCarvingTunnel();
	void UpdateCarvingState();
	void SetDrillAtTargetActive(bool IsActive);
	void SetDrillCooldown(float Seconds);
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_10_BodypartHitSig__DelegateSignature(float amount, float BaseAmount, UPrimitiveComponent* Component, UFSDPhysicalMaterial* PhysMat, FName BoneName);
	void TryDamageSound(AActor* Attacker);
	void ShowDamageEffects(UParticleSystem* Particles, FVector Location, FRotator Orientation);
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_12_HitSig__DelegateSignature(float Damage, UDamageClass* DamageClass, AActor* DamageCauser, bool anyHealthLost);
	void All_PlayDamageSound(FVector_NetQuantize Location);
	void SpawnDamageEffects(UParticleSystem* EmitterTemplate, FVector_NetQuantize Location, FRotator Rotation);
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_9_DamageSig__DelegateSignature(float amount);
	void CheckRepair();
	void BndEvt__Achievement_Collider_K2Node_ComponentBoundEvent_13_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void BndEvt__Achievement_Collider_K2Node_ComponentBoundEvent_14_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
	void On Damage Enemy While Riding(TScriptInterface<IHealth> EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
	void BndEvt__PetDorettaUsable_K2Node_ComponentBoundEvent_15_UsedBySignature__DelegateSignature(APlayerCharacter* User);
	void All_PlayPetAnimation();
	void TestDorettaHead();
	void PathIsReady();
	void SetButtonUsable(bool canUse);
	void OnCheat_SetMuleSpeed(float FloatValue);
	void ExecuteUbergraph_BP_EscortMule(int32_t EntryPoint);
	void EscortStateChanged__DelegateSignature(enum class EEscortMissionState State);
	void ResourceFull__DelegateSignature();
};

