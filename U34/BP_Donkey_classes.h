// BlueprintGeneratedClass BP_Donkey.BP_Donkey_C
// Size: 0x530 (Inherited: 0x3b0)
struct ABP_Donkey_C : ADonkeyCharacter {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3b0(0x08)
	struct UStaticMeshComponent* TerrainScannerMesh; // 0x3b8(0x08)
	struct USphereComponent* Sphere; // 0x3c0(0x08)
	struct UAudioComponent* Oxygen_Leak; // 0x3c8(0x08)
	struct UStaticMeshComponent* SM_Screen_007; // 0x3d0(0x08)
	struct UStaticMeshComponent* FrontPlane1; // 0x3d8(0x08)
	struct UStaticMeshComponent* SM_Screen_005; // 0x3e0(0x08)
	struct UStaticMeshComponent* FrontPlane; // 0x3e8(0x08)
	struct UStaticMeshComponent* Plane1; // 0x3f0(0x08)
	struct UParticleSystemComponent* P_GasCanister_air_Mule1; // 0x3f8(0x08)
	struct UParticleSystemComponent* P_GasCanister_air_Mule; // 0x400(0x08)
	struct UStaticMeshComponent* SM_GasCanister1; // 0x408(0x08)
	struct UStaticMeshComponent* SM_GasCanister; // 0x410(0x08)
	struct UOxygenSourceComponent* OxygenSource; // 0x418(0x08)
	struct UCapsuleComponent* PlayerRideCapsule; // 0x420(0x08)
	struct UAudioComponent* AudioDepositing; // 0x428(0x08)
	struct UPointLightComponent* PointLight; // 0x430(0x08)
	struct UStaticMeshComponent* SM_Donkey_Button; // 0x438(0x08)
	struct UStaticMeshComponent* EscapeButton; // 0x440(0x08)
	struct UWidgetComponent* Widget; // 0x448(0x08)
	struct UBoxComponent* UseBox_ResourceBank; // 0x450(0x08)
	struct USphereComponent* UseSphere_Return; // 0x458(0x08)
	struct USingleUsableComponent* ReturnToMissionUsable; // 0x460(0x08)
	struct UBoxComponent* Box1; // 0x468(0x08)
	struct UActorTrackingComponent* ActorTracking; // 0x470(0x08)
	struct UStaticMeshComponent* LightCone; // 0x478(0x08)
	struct USpotLightComponent* SpotLight; // 0x480(0x08)
	struct USceneComponent* FloodLight; // 0x488(0x08)
	struct UBoxComponent* Box; // 0x490(0x08)
	struct URadarPointComponent* radarPoint; // 0x498(0x08)
	bool IsTrayOpen; // 0x4a0(0x01)
	char UnknownData_4A1[0x3]; // 0x4a1(0x03)
	struct FName DestinationKeyName; // 0x4a4(0x08)
	char UnknownData_4AC[0x4]; // 0x4ac(0x04)
	struct ABP_DonkeyDestinationMarker_C* DonkeyMarker; // 0x4b0(0x08)
	struct FName ControlledKeyName; // 0x4b8(0x08)
	struct FName DropShipPosKey; // 0x4c0(0x08)
	struct FName GotoDropshipKey; // 0x4c8(0x08)
	struct FName BeingDepositedToName; // 0x4d0(0x08)
	bool HeadingForDropShip; // 0x4d8(0x01)
	char UnknownData_4D9[0x3]; // 0x4d9(0x03)
	int32_t OverlapsPlayer; // 0x4dc(0x04)
	struct FMulticastInlineDelegate PlayerOverlapsChanged; // 0x4e0(0x10)
	struct FTimerHandle BreadCrumbTimer; // 0x4f0(0x08)
	float PlayerStartRideTime; // 0x4f8(0x04)
	char UnknownData_4FC[0x4]; // 0x4fc(0x04)
	struct UFSDAchievement* MollyRiderAchievement; // 0x500(0x08)
	struct ADonkey_BreadCrumb_C* LastCrumb; // 0x508(0x08)
	struct FTimerHandle TimeoutHandle; // 0x510(0x08)
	struct ADonkey_BreadCrumb_C* BreadCrumpClass; // 0x518(0x08)
	struct TArray<struct APlayerState*> Users; // 0x520(0x10)

	void UpdateStopCallRequests(); // Function BP_Donkey.BP_Donkey_C.UpdateStopCallRequests
	void HandlePhotosensitivity(); // Function BP_Donkey.BP_Donkey_C.HandlePhotosensitivity
	void OnRep_IsTrayOpen(); // Function BP_Donkey.BP_Donkey_C.OnRep_IsTrayOpen
	void GotoDropShip(struct FVector Pos); // Function BP_Donkey.BP_Donkey_C.GotoDropShip
	void Set Controlled by Drop Ship(bool Control); // Function BP_Donkey.BP_Donkey_C.Set Controlled by Drop Ship
	void SetDestination(struct FVector Destination); // Function BP_Donkey.BP_Donkey_C.SetDestination
	void UserConstructionScript(); // Function BP_Donkey.BP_Donkey_C.UserConstructionScript
	void ReceiveBeginPlay(); // Function BP_Donkey.BP_Donkey_C.ReceiveBeginPlay
	void OnDonkeyCalled(struct FVector Position); // Function BP_Donkey.BP_Donkey_C.OnDonkeyCalled
	void SetDonkeyPos(struct FVector Pos); // Function BP_Donkey.BP_Donkey_C.SetDonkeyPos
	void On Goto Dropship(); // Function BP_Donkey.BP_Donkey_C.On Goto Dropship
	void BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_Donkey.BP_Donkey_C.BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__Box1_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_Donkey.BP_Donkey_C.BndEvt__Box1_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	void BndEvt__ReturnToMissionUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(struct APlayerCharacter* User); // Function BP_Donkey.BP_Donkey_C.BndEvt__ReturnToMissionUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature
	void BndEvt__ReturnToMissionUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool canUse); // Function BP_Donkey.BP_Donkey_C.BndEvt__ReturnToMissionUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature
	void SpawnBreadCrumb(); // Function BP_Donkey.BP_Donkey_C.SpawnBreadCrumb
	void BndEvt__ResourceBank_K2Node_ComponentBoundEvent_0_ResourceBankEvent__DelegateSignature(struct APlayerCharacter* User); // Function BP_Donkey.BP_Donkey_C.BndEvt__ResourceBank_K2Node_ComponentBoundEvent_0_ResourceBankEvent__DelegateSignature
	void BndEvt__ResourceBank_K2Node_ComponentBoundEvent_1_ResourceBankEvent__DelegateSignature(struct APlayerCharacter* User); // Function BP_Donkey.BP_Donkey_C.BndEvt__ResourceBank_K2Node_ComponentBoundEvent_1_ResourceBankEvent__DelegateSignature
	void BndEvt__Capsule_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_Donkey.BP_Donkey_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__Capsule_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_Donkey.BP_Donkey_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature
	void Update Button State(); // Function BP_Donkey.BP_Donkey_C.Update Button State
	void BndEvt__OxygenSource_K2Node_ComponentBoundEvent_9_OxygenActiveDelegate__DelegateSignature(bool IsActive); // Function BP_Donkey.BP_Donkey_C.BndEvt__OxygenSource_K2Node_ComponentBoundEvent_9_OxygenActiveDelegate__DelegateSignature
	void EnableButton(); // Function BP_Donkey.BP_Donkey_C.EnableButton
	void OnRep_IsDown(); // Function BP_Donkey.BP_Donkey_C.OnRep_IsDown
	void SetControlledByDropShip(bool Control); // Function BP_Donkey.BP_Donkey_C.SetControlledByDropShip
	void OnPlayerLeft(struct AFSDPlayerState* PlayerState); // Function BP_Donkey.BP_Donkey_C.OnPlayerLeft
	void SetGotoDropShip(struct FVector Location); // Function BP_Donkey.BP_Donkey_C.SetGotoDropShip
	void ExecuteUbergraph_BP_Donkey(int32_t EntryPoint); // Function BP_Donkey.BP_Donkey_C.ExecuteUbergraph_BP_Donkey
	void PlayerOverlapsChanged__DelegateSignature(int32_t OverlapCount); // Function BP_Donkey.BP_Donkey_C.PlayerOverlapsChanged__DelegateSignature
};

