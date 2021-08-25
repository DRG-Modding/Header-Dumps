// BlueprintGeneratedClass BP_MineHead.BP_MineHead_C
// Size: 0x518 (Inherited: 0x298)
struct ABP_MineHead_C : AFSDMiningHead {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	struct UPathfinderCollisionComponent* PB_SmallPlatform05; // 0x2a0(0x08)
	struct UPathfinderCollisionComponent* PB_SmallPlatform04; // 0x2a8(0x08)
	struct UPathfinderCollisionComponent* PB_SmallPlatform03; // 0x2b0(0x08)
	struct UPathfinderCollisionComponent* PB_SmallPlatform02; // 0x2b8(0x08)
	struct UPathfinderCollisionComponent* PB_SmallPlatform01; // 0x2c0(0x08)
	struct UChildActorComponent* OxygenAudio; // 0x2c8(0x08)
	struct UChildActorComponent* OxygenTank05; // 0x2d0(0x08)
	struct UChildActorComponent* OxygenTank04; // 0x2d8(0x08)
	struct UChildActorComponent* OxygenTank03; // 0x2e0(0x08)
	struct UChildActorComponent* OxygenTank02; // 0x2e8(0x08)
	struct UChildActorComponent* OxygenTank01; // 0x2f0(0x08)
	struct UCapsuleComponent* Capsule; // 0x2f8(0x08)
	struct UTerrainPlacementComponent* terrainPlacement; // 0x300(0x08)
	struct UPathfinderCollisionComponent* PathfinderCollision_Ramp2_Blocker; // 0x308(0x08)
	struct UPathfinderCollisionComponent* PathfinderCollision_Ramp3_Blocker; // 0x310(0x08)
	struct UPathfinderCollisionComponent* PathfinderCollision_Ramp4_Blocker; // 0x318(0x08)
	struct UPathfinderCollisionComponent* PathfinderCollision_Ramp5_Blocker; // 0x320(0x08)
	struct UPathfinderCollisionComponent* ButtonPlatform_Blocker; // 0x328(0x08)
	struct UPathfinderCollisionComponent* MainPlatform_Blocker; // 0x330(0x08)
	struct UPathfinderCollisionComponent* AIBlockBelow3; // 0x338(0x08)
	struct UPathfinderCollisionComponent* AIBlockBelow2; // 0x340(0x08)
	struct UPathfinderCollisionComponent* AIBlockBelow1; // 0x348(0x08)
	struct UOxygenSourceComponent* OxygenSource; // 0x350(0x08)
	struct USphereComponent* HeatSource; // 0x358(0x08)
	struct UAudioComponent* AudioDepositing; // 0x360(0x08)
	struct UWidgetComponent* ButtonActive_Widget; // 0x368(0x08)
	struct UParticleSystemComponent* P_Minehead_LaunchDust; // 0x370(0x08)
	struct UChildActorComponent* Sentry3; // 0x378(0x08)
	struct UChildActorComponent* Sentry2; // 0x380(0x08)
	struct UChildActorComponent* Sentry1; // 0x388(0x08)
	struct UAudioComponent* GrinderAudio; // 0x390(0x08)
	struct UPathfinderCollisionComponent* AIBlockBelow; // 0x398(0x08)
	struct USpotLightComponent* SpotLight_Rocket; // 0x3a0(0x08)
	struct USphereComponent* KillSphere; // 0x3a8(0x08)
	struct UBoxComponent* OpenDepositerBox; // 0x3b0(0x08)
	struct UCapsuleComponent* ResourceBankUsableCapsule_01; // 0x3b8(0x08)
	struct USingleUsableComponent* Usable_LaunchRocket; // 0x3c0(0x08)
	struct USphereComponent* LaunchRocketSphere; // 0x3c8(0x08)
	struct UPathfinderCollisionComponent* PathfinderCollision_Rocket; // 0x3d0(0x08)
	struct UPathfinderCollisionComponent* PathfinderCollision_Drill; // 0x3d8(0x08)
	struct UPathfinderCollisionComponent* PFSmallPlatform05; // 0x3e0(0x08)
	struct UPathfinderCollisionComponent* PFSmallPlatform04; // 0x3e8(0x08)
	struct UPathfinderCollisionComponent* PFSmallPlatform03; // 0x3f0(0x08)
	struct UPathfinderCollisionComponent* PFSmallPlatform02; // 0x3f8(0x08)
	struct UPathfinderCollisionComponent* PFSmallPlatform01; // 0x400(0x08)
	struct UPathfinderCollisionComponent* MainPlatform; // 0x408(0x08)
	struct UPathfinderCollisionComponent* ButtonPlatform_01; // 0x410(0x08)
	struct UPathfinderCollisionComponent* PathfinderCollision_Ramp2; // 0x418(0x08)
	struct UPathfinderCollisionComponent* PathfinderCollision_Ramp3; // 0x420(0x08)
	struct UPathfinderCollisionComponent* PathfinderCollision_Ramp4; // 0x428(0x08)
	struct UOutlineComponent* outline; // 0x430(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x438(0x08)
	struct UActorTrackingComponent* ActorTracking; // 0x440(0x08)
	struct UStaticMeshComponent* StaticMesh2; // 0x448(0x08)
	struct USpotLightComponent* SpotLight1; // 0x450(0x08)
	struct UStaticMeshComponent* StaticMesh3; // 0x458(0x08)
	struct UChildActorComponent* Lights_02; // 0x460(0x08)
	struct UPathfinderCollisionComponent* PathfinderCollision_Ramp5; // 0x468(0x08)
	struct UStaticMeshComponent* StaticMesh1; // 0x470(0x08)
	struct USpotLightComponent* SpotLight; // 0x478(0x08)
	struct UStaticMeshComponent* Light; // 0x480(0x08)
	struct UChildActorComponent* Lights_01; // 0x488(0x08)
	struct UPointLightComponent* PointLight; // 0x490(0x08)
	struct USkeletalMeshComponent* Drill; // 0x498(0x08)
	struct USkeletalMeshComponent* MineHead; // 0x4a0(0x08)
	struct UAudioComponent* DrillingSoundInstance; // 0x4a8(0x08)
	bool IsLiftingOff; // 0x4b0(0x01)
	bool CanLaunch; // 0x4b1(0x01)
	char UnknownData_4B2[0x2]; // 0x4b2(0x02)
	int32_t PlayersInDepositRange; // 0x4b4(0x04)
	struct UMaterialInstanceDynamic* BlinkingLightsMaterial_Button; // 0x4b8(0x08)
	struct UMaterialInstanceDynamic* BlinkingLightsMaterial_Pole; // 0x4c0(0x08)
	float BlinkingLightsEmmissive_Button; // 0x4c8(0x04)
	float BlinkingLightsEmmissive_Pole; // 0x4cc(0x04)
	struct TArray<struct APlayerCharacter*> DeadPlayers; // 0x4d0(0x10)
	struct FMulticastInlineDelegate MinheadStateChanged; // 0x4e0(0x10)
	char MineheadState; // 0x4f0(0x01)
	char UnknownData_4F1[0x7]; // 0x4f1(0x07)
	struct UParticleSystemComponent* DrillParticles01; // 0x4f8(0x08)
	struct UParticleSystemComponent* DrillParticles02; // 0x500(0x08)
	struct ABP_Minehead_LandingZone_C* LandingZoneMarker; // 0x508(0x08)
	struct UAudioComponent* ButtonLaunchSoundInstance; // 0x510(0x08)

	void ConditionallyEnableShadows(); // Function BP_MineHead.BP_MineHead_C.ConditionallyEnableShadows
	void OnRep_MineheadState(); // Function BP_MineHead.BP_MineHead_C.OnRep_MineheadState
	void SetState(char MineheadState); // Function BP_MineHead.BP_MineHead_C.SetState
	void HandleDeadPlayers(); // Function BP_MineHead.BP_MineHead_C.HandleDeadPlayers
	void OnRep_CanLaunch(); // Function BP_MineHead.BP_MineHead_C.OnRep_CanLaunch
	void OnRep_IsLiftingOff(); // Function BP_MineHead.BP_MineHead_C.OnRep_IsLiftingOff
	void UserConstructionScript(); // Function BP_MineHead.BP_MineHead_C.UserConstructionScript
	void OnDrillingStarted(); // Function BP_MineHead.BP_MineHead_C.OnDrillingStarted
	void OnDroppodImpact(); // Function BP_MineHead.BP_MineHead_C.OnDroppodImpact
	void ReceiveBeginPlay(); // Function BP_MineHead.BP_MineHead_C.ReceiveBeginPlay
	void OnLiftoff(); // Function BP_MineHead.BP_MineHead_C.OnLiftoff
	void objectivesCompleted(); // Function BP_MineHead.BP_MineHead_C.objectivesCompleted
	void BndEvt__Usable_LaunchRocket_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(struct APlayerCharacter* User); // Function BP_MineHead.BP_MineHead_C.BndEvt__Usable_LaunchRocket_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
	void BndEvt__OpenDepositerBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_MineHead.BP_MineHead_C.BndEvt__OpenDepositerBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__OpenDepositerBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_MineHead.BP_MineHead_C.BndEvt__OpenDepositerBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	void BndEvt__KillSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_MineHead.BP_MineHead_C.BndEvt__KillSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__ResourceBank_K2Node_ComponentBoundEvent_0_ResourceBankEvent__DelegateSignature(struct APlayerCharacter* User); // Function BP_MineHead.BP_MineHead_C.BndEvt__ResourceBank_K2Node_ComponentBoundEvent_0_ResourceBankEvent__DelegateSignature
	void BndEvt__ResourceBank_K2Node_ComponentBoundEvent_1_ResourceBankEvent__DelegateSignature(struct APlayerCharacter* User); // Function BP_MineHead.BP_MineHead_C.BndEvt__ResourceBank_K2Node_ComponentBoundEvent_1_ResourceBankEvent__DelegateSignature
	void BndEvt__HeatSource_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_MineHead.BP_MineHead_C.BndEvt__HeatSource_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__HeatSource_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_MineHead.BP_MineHead_C.BndEvt__HeatSource_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	void UpdateShadows(); // Function BP_MineHead.BP_MineHead_C.UpdateShadows
	void BndEvt__Usable_LaunchRocket_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature(bool canUse); // Function BP_MineHead.BP_MineHead_C.BndEvt__Usable_LaunchRocket_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature
	void ExecuteUbergraph_BP_MineHead(int32_t EntryPoint); // Function BP_MineHead.BP_MineHead_C.ExecuteUbergraph_BP_MineHead
	void MinheadStateChanged__DelegateSignature(char State); // Function BP_MineHead.BP_MineHead_C.MinheadStateChanged__DelegateSignature
};

