// BlueprintGeneratedClass BP_MineHead.BP_MineHead_C
// Size: 0x518 (Inherited: 0x298)
struct ABP_MineHead_C : AFSDMiningHead {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UPathfinderCollisionComponent* PB_SmallPlatform05; 
	UPROPERTY(BlueprintReadWrite) UPathfinderCollisionComponent* PB_SmallPlatform04; 
	UPROPERTY(BlueprintReadWrite) UPathfinderCollisionComponent* PB_SmallPlatform03; 
	UPROPERTY(BlueprintReadWrite) UPathfinderCollisionComponent* PB_SmallPlatform02; 
	UPROPERTY(BlueprintReadWrite) UPathfinderCollisionComponent* PB_SmallPlatform01; 
	UPROPERTY(BlueprintReadWrite) UChildActorComponent* OxygenAudio; 
	UPROPERTY(BlueprintReadWrite) UChildActorComponent* OxygenTank05; 
	UPROPERTY(BlueprintReadWrite) UChildActorComponent* OxygenTank04; 
	UPROPERTY(BlueprintReadWrite) UChildActorComponent* OxygenTank03; 
	UPROPERTY(BlueprintReadWrite) UChildActorComponent* OxygenTank02; 
	UPROPERTY(BlueprintReadWrite) UChildActorComponent* OxygenTank01; 
	UPROPERTY(BlueprintReadWrite) UCapsuleComponent* Capsule; 
	UPROPERTY(BlueprintReadWrite) UTerrainPlacementComponent* terrainPlacement; 
	UPROPERTY(BlueprintReadWrite) UPathfinderCollisionComponent* PathfinderCollision_Ramp2_Blocker; 
	UPROPERTY(BlueprintReadWrite) UPathfinderCollisionComponent* PathfinderCollision_Ramp3_Blocker; 
	UPROPERTY(BlueprintReadWrite) UPathfinderCollisionComponent* PathfinderCollision_Ramp4_Blocker; 
	UPROPERTY(BlueprintReadWrite) UPathfinderCollisionComponent* PathfinderCollision_Ramp5_Blocker; 
	UPROPERTY(BlueprintReadWrite) UPathfinderCollisionComponent* ButtonPlatform_Blocker; 
	UPROPERTY(BlueprintReadWrite) UPathfinderCollisionComponent* MainPlatform_Blocker; 
	UPROPERTY(BlueprintReadWrite) UPathfinderCollisionComponent* AIBlockBelow3; 
	UPROPERTY(BlueprintReadWrite) UPathfinderCollisionComponent* AIBlockBelow2; 
	UPROPERTY(BlueprintReadWrite) UPathfinderCollisionComponent* AIBlockBelow1; 
	UPROPERTY(BlueprintReadWrite) UOxygenSourceComponent* OxygenSource; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* HeatSource; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* AudioDepositing; 
	UPROPERTY(BlueprintReadWrite) UWidgetComponent* ButtonActive_Widget; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* P_Minehead_LaunchDust; 
	UPROPERTY(BlueprintReadWrite) UChildActorComponent* Sentry3; 
	UPROPERTY(BlueprintReadWrite) UChildActorComponent* Sentry2; 
	UPROPERTY(BlueprintReadWrite) UChildActorComponent* Sentry1; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* GrinderAudio; 
	UPROPERTY(BlueprintReadWrite) UPathfinderCollisionComponent* AIBlockBelow; 
	UPROPERTY(BlueprintReadWrite) USpotLightComponent* SpotLight_Rocket; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* KillSphere; 
	UPROPERTY(BlueprintReadWrite) UBoxComponent* OpenDepositerBox; 
	UPROPERTY(BlueprintReadWrite) UCapsuleComponent* ResourceBankUsableCapsule_01; 
	UPROPERTY(BlueprintReadWrite) USingleUsableComponent* Usable_LaunchRocket; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* LaunchRocketSphere; 
	UPROPERTY(BlueprintReadWrite) UPathfinderCollisionComponent* PathfinderCollision_Rocket; 
	UPROPERTY(BlueprintReadWrite) UPathfinderCollisionComponent* PathfinderCollision_Drill; 
	UPROPERTY(BlueprintReadWrite) UPathfinderCollisionComponent* PFSmallPlatform05; 
	UPROPERTY(BlueprintReadWrite) UPathfinderCollisionComponent* PFSmallPlatform04; 
	UPROPERTY(BlueprintReadWrite) UPathfinderCollisionComponent* PFSmallPlatform03; 
	UPROPERTY(BlueprintReadWrite) UPathfinderCollisionComponent* PFSmallPlatform02; 
	UPROPERTY(BlueprintReadWrite) UPathfinderCollisionComponent* PFSmallPlatform01; 
	UPROPERTY(BlueprintReadWrite) UPathfinderCollisionComponent* MainPlatform; 
	UPROPERTY(BlueprintReadWrite) UPathfinderCollisionComponent* ButtonPlatform_01; 
	UPROPERTY(BlueprintReadWrite) UPathfinderCollisionComponent* PathfinderCollision_Ramp2; 
	UPROPERTY(BlueprintReadWrite) UPathfinderCollisionComponent* PathfinderCollision_Ramp3; 
	UPROPERTY(BlueprintReadWrite) UPathfinderCollisionComponent* PathfinderCollision_Ramp4; 
	UPROPERTY(BlueprintReadWrite) UOutlineComponent* outline; 
	UPROPERTY(BlueprintReadWrite) USimpleObjectInfoComponent* SimpleObjectInfo; 
	UPROPERTY(BlueprintReadWrite) UActorTrackingComponent* ActorTracking; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* StaticMesh2; 
	UPROPERTY(BlueprintReadWrite) USpotLightComponent* SpotLight1; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* StaticMesh3; 
	UPROPERTY(BlueprintReadWrite) UChildActorComponent* Lights_02; 
	UPROPERTY(BlueprintReadWrite) UPathfinderCollisionComponent* PathfinderCollision_Ramp5; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* StaticMesh1; 
	UPROPERTY(BlueprintReadWrite) USpotLightComponent* SpotLight; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Light; 
	UPROPERTY(BlueprintReadWrite) UChildActorComponent* Lights_01; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight; 
	UPROPERTY(BlueprintReadWrite) USkeletalMeshComponent* Drill; 
	UPROPERTY(BlueprintReadWrite) USkeletalMeshComponent* MineHead; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* DrillingSoundInstance; 
	UPROPERTY(BlueprintReadWrite) bool IsLiftingOff; 
	UPROPERTY(BlueprintReadWrite) bool CanLaunch; 
	UPROPERTY(BlueprintReadWrite) int32_t PlayersInDepositRange; 
	UPROPERTY(BlueprintReadWrite) UMaterialInstanceDynamic* BlinkingLightsMaterial_Button; 
	UPROPERTY(BlueprintReadWrite) UMaterialInstanceDynamic* BlinkingLightsMaterial_Pole; 
	UPROPERTY(BlueprintReadWrite) float BlinkingLightsEmmissive_Button; 
	UPROPERTY(BlueprintReadWrite) float BlinkingLightsEmmissive_Pole; 
	UPROPERTY(BlueprintReadWrite) TArray<APlayerCharacter*> DeadPlayers; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate MinheadStateChanged; 
	UPROPERTY(BlueprintReadWrite) enum class Minehead_State MineheadState; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* DrillParticles01; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* DrillParticles02; 
	UPROPERTY(BlueprintReadWrite) ABP_Minehead_LandingZone_C* LandingZoneMarker; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* ButtonLaunchSoundInstance; 

	UFUNCTION(BlueprintCallable) void ConditionallyEnableShadows();
	UFUNCTION(BlueprintCallable) void OnRep_MineheadState();
	UFUNCTION(BlueprintCallable) void SetState(enum class Minehead_State MineheadState);
	UFUNCTION(BlueprintCallable) void HandleDeadPlayers();
	UFUNCTION(BlueprintCallable) void OnRep_CanLaunch();
	UFUNCTION(BlueprintCallable) void OnRep_IsLiftingOff();
	UFUNCTION(BlueprintCallable) void UserConstructionScript();
	UFUNCTION(BlueprintCallable) void OnDrillingStarted();
	UFUNCTION(BlueprintCallable) void OnDroppodImpact();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void OnLiftoff();
	UFUNCTION(BlueprintCallable) void objectivesCompleted();
	UFUNCTION(BlueprintCallable) void BndEvt__Usable_LaunchRocket_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(APlayerCharacter* User);
	UFUNCTION(BlueprintCallable) void BndEvt__OpenDepositerBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	UFUNCTION(BlueprintCallable) void BndEvt__OpenDepositerBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
	UFUNCTION(BlueprintCallable) void BndEvt__KillSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	UFUNCTION(BlueprintCallable) void BndEvt__ResourceBank_K2Node_ComponentBoundEvent_0_ResourceBankEvent__DelegateSignature(APlayerCharacter* User);
	UFUNCTION(BlueprintCallable) void BndEvt__ResourceBank_K2Node_ComponentBoundEvent_1_ResourceBankEvent__DelegateSignature(APlayerCharacter* User);
	UFUNCTION(BlueprintCallable) void BndEvt__HeatSource_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	UFUNCTION(BlueprintCallable) void BndEvt__HeatSource_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
	UFUNCTION(BlueprintCallable) void UpdateShadows();
	UFUNCTION(BlueprintCallable) void BndEvt__Usable_LaunchRocket_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature(bool canUse);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_MineHead(int32_t EntryPoint);
	UFUNCTION(BlueprintCallable) void MinheadStateChanged__DelegateSignature(enum class Minehead_State State);
};

