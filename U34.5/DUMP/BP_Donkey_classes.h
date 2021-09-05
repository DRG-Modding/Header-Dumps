// BlueprintGeneratedClass BP_Donkey.BP_Donkey_C
// Size: 0x530 (Inherited: 0x3b0)
struct ABP_Donkey_C : ADonkeyCharacter {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3b0(0x08)
	UStaticMeshComponent* TerrainScannerMesh; // 0x3b8(0x08)
	USphereComponent* Sphere; // 0x3c0(0x08)
	UAudioComponent* Oxygen_Leak; // 0x3c8(0x08)
	UStaticMeshComponent* SM_Screen_007; // 0x3d0(0x08)
	UStaticMeshComponent* FrontPlane1; // 0x3d8(0x08)
	UStaticMeshComponent* SM_Screen_005; // 0x3e0(0x08)
	UStaticMeshComponent* FrontPlane; // 0x3e8(0x08)
	UStaticMeshComponent* Plane1; // 0x3f0(0x08)
	UParticleSystemComponent* P_GasCanister_air_Mule1; // 0x3f8(0x08)
	UParticleSystemComponent* P_GasCanister_air_Mule; // 0x400(0x08)
	UStaticMeshComponent* SM_GasCanister1; // 0x408(0x08)
	UStaticMeshComponent* SM_GasCanister; // 0x410(0x08)
	UOxygenSourceComponent* OxygenSource; // 0x418(0x08)
	UCapsuleComponent* PlayerRideCapsule; // 0x420(0x08)
	UAudioComponent* AudioDepositing; // 0x428(0x08)
	UPointLightComponent* PointLight; // 0x430(0x08)
	UStaticMeshComponent* SM_Donkey_Button; // 0x438(0x08)
	UStaticMeshComponent* EscapeButton; // 0x440(0x08)
	UWidgetComponent* Widget; // 0x448(0x08)
	UBoxComponent* UseBox_ResourceBank; // 0x450(0x08)
	USphereComponent* UseSphere_Return; // 0x458(0x08)
	USingleUsableComponent* ReturnToMissionUsable; // 0x460(0x08)
	UBoxComponent* Box1; // 0x468(0x08)
	UActorTrackingComponent* ActorTracking; // 0x470(0x08)
	UStaticMeshComponent* LightCone; // 0x478(0x08)
	USpotLightComponent* SpotLight; // 0x480(0x08)
	USceneComponent* FloodLight; // 0x488(0x08)
	UBoxComponent* Box; // 0x490(0x08)
	URadarPointComponent* radarPoint; // 0x498(0x08)
	bool IsTrayOpen; // 0x4a0(0x01)
	FName DestinationKeyName; // 0x4a4(0x08)
	ABP_DonkeyDestinationMarker_C* DonkeyMarker; // 0x4b0(0x08)
	FName ControlledKeyName; // 0x4b8(0x08)
	FName DropShipPosKey; // 0x4c0(0x08)
	FName GotoDropshipKey; // 0x4c8(0x08)
	FName BeingDepositedToName; // 0x4d0(0x08)
	bool HeadingForDropShip; // 0x4d8(0x01)
	int32_t OverlapsPlayer; // 0x4dc(0x04)
	FMulticastInlineDelegate PlayerOverlapsChanged; // 0x4e0(0x10)
	FTimerHandle BreadCrumbTimer; // 0x4f0(0x08)
	float PlayerStartRideTime; // 0x4f8(0x04)
	UFSDAchievement* MollyRiderAchievement; // 0x500(0x08)
	ADonkey_BreadCrumb_C* LastCrumb; // 0x508(0x08)
	FTimerHandle TimeoutHandle; // 0x510(0x08)
	ADonkey_BreadCrumb_C* BreadCrumpClass; // 0x518(0x08)
	TArray<APlayerState*> Users; // 0x520(0x10)

	void UpdateStopCallRequests();
	void HandlePhotosensitivity();
	void OnRep_IsTrayOpen();
	void GotoDropShip(FVector Pos);
	void Set Controlled by Drop Ship(bool Control);
	void SetDestination(FVector Destination);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnDonkeyCalled(FVector Position);
	void SetDonkeyPos(FVector Pos);
	void On Goto Dropship();
	void BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void BndEvt__Box1_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
	void BndEvt__ReturnToMissionUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(APlayerCharacter* User);
	void BndEvt__ReturnToMissionUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool canUse);
	void SpawnBreadCrumb();
	void BndEvt__ResourceBank_K2Node_ComponentBoundEvent_0_ResourceBankEvent__DelegateSignature(APlayerCharacter* User);
	void BndEvt__ResourceBank_K2Node_ComponentBoundEvent_1_ResourceBankEvent__DelegateSignature(APlayerCharacter* User);
	void BndEvt__Capsule_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void BndEvt__Capsule_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
	void Update Button State();
	void BndEvt__OxygenSource_K2Node_ComponentBoundEvent_9_OxygenActiveDelegate__DelegateSignature(bool IsActive);
	void EnableButton();
	void OnRep_IsDown();
	void SetControlledByDropShip(bool Control);
	void OnPlayerLeft(AFSDPlayerState* PlayerState);
	void SetGotoDropShip(FVector Location);
	void ExecuteUbergraph_BP_Donkey(int32_t EntryPoint);
	void PlayerOverlapsChanged__DelegateSignature(int32_t OverlapCount);
};

