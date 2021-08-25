// BlueprintGeneratedClass BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C
// Size: 0x9a8 (Inherited: 0x83a)
struct ABP_DropPod_Escape_Base_C : ABP_DropPod_Base_C {
	char UnknownData_83A[0x6]; // 0x83a(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x840(0x08)
	struct UTerrainScannerStaticMesh* TerrainScannerStaticMesh; // 0x848(0x08)
	struct UStaticMeshComponent* SM_Light032; // 0x850(0x08)
	struct UBoxComponent* DepositBank_02; // 0x858(0x08)
	struct UStaticMeshComponent* SM_Light031; // 0x860(0x08)
	struct UBoxComponent* DepositBank_01; // 0x868(0x08)
	struct UStaticMeshComponent* SM_Light03; // 0x870(0x08)
	struct UBoxComponent* DepositBank; // 0x878(0x08)
	struct UWidgetComponent* Widget_ExitZoneText; // 0x880(0x08)
	struct UStaticMeshComponent* FrontPlane3; // 0x888(0x08)
	struct UStaticMeshComponent* SM_Screen_008; // 0x890(0x08)
	struct UParticleSystemComponent* P_GasCanister_air_Mule4; // 0x898(0x08)
	struct UStaticMeshComponent* SM_GasCanister3; // 0x8a0(0x08)
	struct UStaticMeshComponent* SM_GasCanister2; // 0x8a8(0x08)
	struct UStaticMeshComponent* FrontPlane2; // 0x8b0(0x08)
	struct UStaticMeshComponent* SM_Screen_007; // 0x8b8(0x08)
	struct UParticleSystemComponent* P_GasCanister_air_Mule3; // 0x8c0(0x08)
	struct UStaticMeshComponent* FrontPlane1; // 0x8c8(0x08)
	struct UStaticMeshComponent* SM_Screen_006; // 0x8d0(0x08)
	struct UParticleSystemComponent* P_GasCanister_air_Mule2; // 0x8d8(0x08)
	struct UStaticMeshComponent* SM_GasCanister1; // 0x8e0(0x08)
	struct UStaticMeshComponent* SM_GasCanister; // 0x8e8(0x08)
	struct UAudioComponent* Oxygen_Leak; // 0x8f0(0x08)
	struct UStaticMeshComponent* FrontPlane; // 0x8f8(0x08)
	struct UStaticMeshComponent* SM_Screen_005; // 0x900(0x08)
	struct UParticleSystemComponent* P_GasCanister_air_Mule1; // 0x908(0x08)
	struct UAudioComponent* Audio; // 0x910(0x08)
	struct UParticleSystemComponent* Droppod_FallingRocks; // 0x918(0x08)
	struct UStaticMeshComponent* TerrainScannerMesh; // 0x920(0x08)
	struct UAudioComponent* AudioDepositing; // 0x928(0x08)
	struct UActorTrackingComponent* ActorTrackingIcon; // 0x930(0x08)
	struct UResourceBank* ResourceBank; // 0x938(0x08)
	struct UBoxComponent* Box1_1; // 0x940(0x08)
	struct UStaticMeshComponent* ExitZone; // 0x948(0x08)
	struct USphereComponent* TriggerOnOffOutline; // 0x950(0x08)
	struct UBoxComponent* AllDwarves_LiftOff_Ready; // 0x958(0x08)
	struct URadarPointComponent* radarPoint; // 0x960(0x08)
	struct UOutlineComponent* outline; // 0x968(0x08)
	struct FVector DropPodLandingMarker; // 0x970(0x0c)
	bool WaitForMule; // 0x97c(0x01)
	char UnknownData_97D[0x3]; // 0x97d(0x03)
	int32 CharactersInsideCount; // 0x980(0x04)
	bool TakingOff; // 0x984(0x01)
	char UnknownData_985[0x3]; // 0x985(0x03)
	float HurryCoolDown; // 0x988(0x04)
	char UnknownData_98C[0x4]; // 0x98c(0x04)
	struct ABP_DropPod_LandingZone_C* SpawnedLandingZone; // 0x990(0x08)
	struct UParticleSystemComponent* SmallRocks; // 0x998(0x08)
	struct UParticleSystemComponent* ConcSmallRocks; // 0x9a0(0x08)

	void DisableDynamicElements(bool Enabled); // Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.DisableDynamicElements
	void HandlePhotosentitivity(); // Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.HandlePhotosentitivity
	void GetFrontLocation(struct FVector DoorLocation); // Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.GetFrontLocation
	void IsAnyCharacterInEscapePod(bool EscapePodPopulated); // Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.IsAnyCharacterInEscapePod
	void LockCharactersInPod(); // Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.LockCharactersInPod
	void UserConstructionScript(); // Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.UserConstructionScript
	void OnDroppodImpact(); // Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.OnDroppodImpact
	void OnAllDwavesInsidePod(bool AllInside); // Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.OnAllDwavesInsidePod
	void BndEvt__TriggerOutline_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.BndEvt__TriggerOutline_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__TriggerOutline_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.BndEvt__TriggerOutline_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	void OnDrillingStarted(); // Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.OnDrillingStarted
	void ReceiveBeginPlay(); // Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.ReceiveBeginPlay
	void OnDonkeyReachedDropShip(); // Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.OnDonkeyReachedDropShip
	void OnDeparting(); // Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.OnDeparting
	void RecieveReturnTimerExpired(); // Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.RecieveReturnTimerExpired
	void OnPrepForTakeOff(); // Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.OnPrepForTakeOff
	void OnMuleLoaded(); // Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.OnMuleLoaded
	void OnCharacterEnter(struct APlayerCharacter* Character); // Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.OnCharacterEnter
	void OnCharacterExit(struct APlayerCharacter* Character); // Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.OnCharacterExit
	void HandleHurryShouts(); // Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.HandleHurryShouts
	void BndEvt__ResourceBank_K2Node_ComponentBoundEvent_0_ResourceBankEvent__DelegateSignature(struct APlayerCharacter* User); // Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.BndEvt__ResourceBank_K2Node_ComponentBoundEvent_0_ResourceBankEvent__DelegateSignature
	void BndEvt__ResourceBank_K2Node_ComponentBoundEvent_1_ResourceBankEvent__DelegateSignature(struct APlayerCharacter* User); // Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.BndEvt__ResourceBank_K2Node_ComponentBoundEvent_1_ResourceBankEvent__DelegateSignature
	void RecieveReturnTimerFifteenSecondWarning(); // Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.RecieveReturnTimerFifteenSecondWarning
	void ForceTakeoff(); // Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.ForceTakeoff
	void BndEvt__OxygenSource_K2Node_ComponentBoundEvent_9_OxygenActiveDelegate__DelegateSignature(bool IsActive); // Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.BndEvt__OxygenSource_K2Node_ComponentBoundEvent_9_OxygenActiveDelegate__DelegateSignature
	void OnRepDoorState(); // Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.OnRepDoorState
	void OnMuleBayOpenedDispatch_Event_2(); // Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.OnMuleBayOpenedDispatch_Event_2
	void ExecuteUbergraph_BP_DropPod_Escape_Base(int32_t EntryPoint); // Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.ExecuteUbergraph_BP_DropPod_Escape_Base
};

