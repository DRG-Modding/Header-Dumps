// BlueprintGeneratedClass BP_MineHead.BP_MineHead_C
// Size: 0x518 (Inherited: 0x298)
struct ABP_MineHead_C : AFSDMiningHead {
	FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	UPathfinderCollisionComponent* PB_SmallPlatform05; // 0x2a0(0x08)
	UPathfinderCollisionComponent* PB_SmallPlatform04; // 0x2a8(0x08)
	UPathfinderCollisionComponent* PB_SmallPlatform03; // 0x2b0(0x08)
	UPathfinderCollisionComponent* PB_SmallPlatform02; // 0x2b8(0x08)
	UPathfinderCollisionComponent* PB_SmallPlatform01; // 0x2c0(0x08)
	UChildActorComponent* OxygenAudio; // 0x2c8(0x08)
	UChildActorComponent* OxygenTank05; // 0x2d0(0x08)
	UChildActorComponent* OxygenTank04; // 0x2d8(0x08)
	UChildActorComponent* OxygenTank03; // 0x2e0(0x08)
	UChildActorComponent* OxygenTank02; // 0x2e8(0x08)
	UChildActorComponent* OxygenTank01; // 0x2f0(0x08)
	UCapsuleComponent* Capsule; // 0x2f8(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x300(0x08)
	UPathfinderCollisionComponent* PathfinderCollision_Ramp2_Blocker; // 0x308(0x08)
	UPathfinderCollisionComponent* PathfinderCollision_Ramp3_Blocker; // 0x310(0x08)
	UPathfinderCollisionComponent* PathfinderCollision_Ramp4_Blocker; // 0x318(0x08)
	UPathfinderCollisionComponent* PathfinderCollision_Ramp5_Blocker; // 0x320(0x08)
	UPathfinderCollisionComponent* ButtonPlatform_Blocker; // 0x328(0x08)
	UPathfinderCollisionComponent* MainPlatform_Blocker; // 0x330(0x08)
	UPathfinderCollisionComponent* AIBlockBelow3; // 0x338(0x08)
	UPathfinderCollisionComponent* AIBlockBelow2; // 0x340(0x08)
	UPathfinderCollisionComponent* AIBlockBelow1; // 0x348(0x08)
	UOxygenSourceComponent* OxygenSource; // 0x350(0x08)
	USphereComponent* HeatSource; // 0x358(0x08)
	UAudioComponent* AudioDepositing; // 0x360(0x08)
	UWidgetComponent* ButtonActive_Widget; // 0x368(0x08)
	UParticleSystemComponent* P_Minehead_LaunchDust; // 0x370(0x08)
	UChildActorComponent* Sentry3; // 0x378(0x08)
	UChildActorComponent* Sentry2; // 0x380(0x08)
	UChildActorComponent* Sentry1; // 0x388(0x08)
	UAudioComponent* GrinderAudio; // 0x390(0x08)
	UPathfinderCollisionComponent* AIBlockBelow; // 0x398(0x08)
	USpotLightComponent* SpotLight_Rocket; // 0x3a0(0x08)
	USphereComponent* KillSphere; // 0x3a8(0x08)
	UBoxComponent* OpenDepositerBox; // 0x3b0(0x08)
	UCapsuleComponent* ResourceBankUsableCapsule_01; // 0x3b8(0x08)
	USingleUsableComponent* Usable_LaunchRocket; // 0x3c0(0x08)
	USphereComponent* LaunchRocketSphere; // 0x3c8(0x08)
	UPathfinderCollisionComponent* PathfinderCollision_Rocket; // 0x3d0(0x08)
	UPathfinderCollisionComponent* PathfinderCollision_Drill; // 0x3d8(0x08)
	UPathfinderCollisionComponent* PFSmallPlatform05; // 0x3e0(0x08)
	UPathfinderCollisionComponent* PFSmallPlatform04; // 0x3e8(0x08)
	UPathfinderCollisionComponent* PFSmallPlatform03; // 0x3f0(0x08)
	UPathfinderCollisionComponent* PFSmallPlatform02; // 0x3f8(0x08)
	UPathfinderCollisionComponent* PFSmallPlatform01; // 0x400(0x08)
	UPathfinderCollisionComponent* MainPlatform; // 0x408(0x08)
	UPathfinderCollisionComponent* ButtonPlatform_01; // 0x410(0x08)
	UPathfinderCollisionComponent* PathfinderCollision_Ramp2; // 0x418(0x08)
	UPathfinderCollisionComponent* PathfinderCollision_Ramp3; // 0x420(0x08)
	UPathfinderCollisionComponent* PathfinderCollision_Ramp4; // 0x428(0x08)
	UOutlineComponent* outline; // 0x430(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x438(0x08)
	UActorTrackingComponent* ActorTracking; // 0x440(0x08)
	UStaticMeshComponent* StaticMesh2; // 0x448(0x08)
	USpotLightComponent* SpotLight1; // 0x450(0x08)
	UStaticMeshComponent* StaticMesh3; // 0x458(0x08)
	UChildActorComponent* Lights_02; // 0x460(0x08)
	UPathfinderCollisionComponent* PathfinderCollision_Ramp5; // 0x468(0x08)
	UStaticMeshComponent* StaticMesh1; // 0x470(0x08)
	USpotLightComponent* SpotLight; // 0x478(0x08)
	UStaticMeshComponent* Light; // 0x480(0x08)
	UChildActorComponent* Lights_01; // 0x488(0x08)
	UPointLightComponent* PointLight; // 0x490(0x08)
	USkeletalMeshComponent* Drill; // 0x498(0x08)
	USkeletalMeshComponent* MineHead; // 0x4a0(0x08)
	UAudioComponent* DrillingSoundInstance; // 0x4a8(0x08)
	bool IsLiftingOff; // 0x4b0(0x01)
	bool CanLaunch; // 0x4b1(0x01)
	int32_t PlayersInDepositRange; // 0x4b4(0x04)
	UMaterialInstanceDynamic* BlinkingLightsMaterial_Button; // 0x4b8(0x08)
	UMaterialInstanceDynamic* BlinkingLightsMaterial_Pole; // 0x4c0(0x08)
	float BlinkingLightsEmmissive_Button; // 0x4c8(0x04)
	float BlinkingLightsEmmissive_Pole; // 0x4cc(0x04)
	TArray<APlayerCharacter*> DeadPlayers; // 0x4d0(0x10)
	FMulticastInlineDelegate MinheadStateChanged; // 0x4e0(0x10)
	enum class Minehead_State MineheadState; // 0x4f0(0x01)
	UParticleSystemComponent* DrillParticles01; // 0x4f8(0x08)
	UParticleSystemComponent* DrillParticles02; // 0x500(0x08)
	ABP_Minehead_LandingZone_C* LandingZoneMarker; // 0x508(0x08)
	UAudioComponent* ButtonLaunchSoundInstance; // 0x510(0x08)

	void ConditionallyEnableShadows();
	void OnRep_MineheadState();
	void SetState(enum class Minehead_State MineheadState);
	void HandleDeadPlayers();
	void OnRep_CanLaunch();
	void OnRep_IsLiftingOff();
	void UserConstructionScript();
	void OnDrillingStarted();
	void OnDroppodImpact();
	void ReceiveBeginPlay();
	void OnLiftoff();
	void objectivesCompleted();
	void BndEvt__Usable_LaunchRocket_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(APlayerCharacter* User);
	void BndEvt__OpenDepositerBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void BndEvt__OpenDepositerBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
	void BndEvt__KillSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void BndEvt__ResourceBank_K2Node_ComponentBoundEvent_0_ResourceBankEvent__DelegateSignature(APlayerCharacter* User);
	void BndEvt__ResourceBank_K2Node_ComponentBoundEvent_1_ResourceBankEvent__DelegateSignature(APlayerCharacter* User);
	void BndEvt__HeatSource_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void BndEvt__HeatSource_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
	void UpdateShadows();
	void BndEvt__Usable_LaunchRocket_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature(bool canUse);
	void ExecuteUbergraph_BP_MineHead(int32_t EntryPoint);
	void MinheadStateChanged__DelegateSignature(enum class Minehead_State State);
};

