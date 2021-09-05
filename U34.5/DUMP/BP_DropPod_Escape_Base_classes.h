// BlueprintGeneratedClass BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C
// Size: 0x9a8 (Inherited: 0x83a)
struct ABP_DropPod_Escape_Base_C : ABP_DropPod_Base_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x840(0x08)
	UTerrainScannerStaticMesh* TerrainScannerStaticMesh; // 0x848(0x08)
	UStaticMeshComponent* SM_Light032; // 0x850(0x08)
	UBoxComponent* DepositBank_02; // 0x858(0x08)
	UStaticMeshComponent* SM_Light031; // 0x860(0x08)
	UBoxComponent* DepositBank_01; // 0x868(0x08)
	UStaticMeshComponent* SM_Light03; // 0x870(0x08)
	UBoxComponent* DepositBank; // 0x878(0x08)
	UWidgetComponent* Widget_ExitZoneText; // 0x880(0x08)
	UStaticMeshComponent* FrontPlane3; // 0x888(0x08)
	UStaticMeshComponent* SM_Screen_008; // 0x890(0x08)
	UParticleSystemComponent* P_GasCanister_air_Mule4; // 0x898(0x08)
	UStaticMeshComponent* SM_GasCanister3; // 0x8a0(0x08)
	UStaticMeshComponent* SM_GasCanister2; // 0x8a8(0x08)
	UStaticMeshComponent* FrontPlane2; // 0x8b0(0x08)
	UStaticMeshComponent* SM_Screen_007; // 0x8b8(0x08)
	UParticleSystemComponent* P_GasCanister_air_Mule3; // 0x8c0(0x08)
	UStaticMeshComponent* FrontPlane1; // 0x8c8(0x08)
	UStaticMeshComponent* SM_Screen_006; // 0x8d0(0x08)
	UParticleSystemComponent* P_GasCanister_air_Mule2; // 0x8d8(0x08)
	UStaticMeshComponent* SM_GasCanister1; // 0x8e0(0x08)
	UStaticMeshComponent* SM_GasCanister; // 0x8e8(0x08)
	UAudioComponent* Oxygen_Leak; // 0x8f0(0x08)
	UStaticMeshComponent* FrontPlane; // 0x8f8(0x08)
	UStaticMeshComponent* SM_Screen_005; // 0x900(0x08)
	UParticleSystemComponent* P_GasCanister_air_Mule1; // 0x908(0x08)
	UAudioComponent* Audio; // 0x910(0x08)
	UParticleSystemComponent* Droppod_FallingRocks; // 0x918(0x08)
	UStaticMeshComponent* TerrainScannerMesh; // 0x920(0x08)
	UAudioComponent* AudioDepositing; // 0x928(0x08)
	UActorTrackingComponent* ActorTrackingIcon; // 0x930(0x08)
	UResourceBank* ResourceBank; // 0x938(0x08)
	UBoxComponent* Box1_1; // 0x940(0x08)
	UStaticMeshComponent* ExitZone; // 0x948(0x08)
	USphereComponent* TriggerOnOffOutline; // 0x950(0x08)
	UBoxComponent* AllDwarves_LiftOff_Ready; // 0x958(0x08)
	URadarPointComponent* radarPoint; // 0x960(0x08)
	UOutlineComponent* outline; // 0x968(0x08)
	FVector DropPodLandingMarker; // 0x970(0x0c)
	bool WaitForMule; // 0x97c(0x01)
	int32_t CharactersInsideCount; // 0x980(0x04)
	bool TakingOff; // 0x984(0x01)
	float HurryCoolDown; // 0x988(0x04)
	ABP_DropPod_LandingZone_C* SpawnedLandingZone; // 0x990(0x08)
	UParticleSystemComponent* SmallRocks; // 0x998(0x08)
	UParticleSystemComponent* ConcSmallRocks; // 0x9a0(0x08)

	void DisableDynamicElements(bool Enabled);
	void HandlePhotosentitivity();
	void GetFrontLocation(FVector DoorLocation);
	void IsAnyCharacterInEscapePod(bool EscapePodPopulated);
	void LockCharactersInPod();
	void UserConstructionScript();
	void OnDroppodImpact();
	void OnAllDwavesInsidePod(bool AllInside);
	void BndEvt__TriggerOutline_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void BndEvt__TriggerOutline_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
	void OnDrillingStarted();
	void ReceiveBeginPlay();
	void OnDonkeyReachedDropShip();
	void OnDeparting();
	void RecieveReturnTimerExpired();
	void OnPrepForTakeOff();
	void OnMuleLoaded();
	void OnCharacterEnter(APlayerCharacter* Character);
	void OnCharacterExit(APlayerCharacter* Character);
	void HandleHurryShouts();
	void BndEvt__ResourceBank_K2Node_ComponentBoundEvent_0_ResourceBankEvent__DelegateSignature(APlayerCharacter* User);
	void BndEvt__ResourceBank_K2Node_ComponentBoundEvent_1_ResourceBankEvent__DelegateSignature(APlayerCharacter* User);
	void RecieveReturnTimerFifteenSecondWarning();
	void ForceTakeoff();
	void BndEvt__OxygenSource_K2Node_ComponentBoundEvent_9_OxygenActiveDelegate__DelegateSignature(bool IsActive);
	void OnRepDoorState();
	void OnMuleBayOpenedDispatch_Event_2();
	void ExecuteUbergraph_BP_DropPod_Escape_Base(int32_t EntryPoint);
};

