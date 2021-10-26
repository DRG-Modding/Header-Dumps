// BlueprintGeneratedClass WPN_ZipLineGun.WPN_ZipLineGun_C
// Size: 0x790 (Inherited: 0x730)
struct AWPN_ZipLineGun_C : AZipLineItem {
	FPointerToUberGraphFrame UberGraphFrame; // 0x730(0x08)
	UPointLightComponent* PointLight; // 0x738(0x08)
	USpotLightComponent* SpotLight; // 0x740(0x08)
	UFirstPersonWidgetComponent* FirstPersonWidget; // 0x748(0x08)
	UFirstPersonStaticMeshComponent* FirstPersonStaticMesh; // 0x750(0x08)
	UPointLightComponent* Muzzle Light; // 0x758(0x08)
	UZiplineLauncherComponent* ZiplineLauncher; // 0x760(0x08)
	USceneComponent* Beam; // 0x768(0x08)
	UCrosshairAggregator* CrosshairAggregator; // 0x770(0x08)
	float debug_t; // 0x778(0x04)
	UHUD_Crosshair_ZiplineGun_C* Crosshair; // 0x780(0x08)
	float BeamDelay; // 0x788(0x04)
	bool InRange; // 0x78c(0x01)
	bool TooFar; // 0x78d(0x01)
	bool TooClose; // 0x78e(0x01)
	bool WeaponFired; // 0x78f(0x01)

	void GetGrounded(bool OutGrounded);
	FVector CalcFirstPersonMuzzleLocation();
	bool CanFireWeapon(FText FailMsg, UDialogDataAsset* FailShout);
	void GetGearStatEntry(AFSDPlayerState* PlayerState, TArray<FGearStatEntry> Stats);
	void GetCrosshair(UHUD_Crosshair_ZiplineGun_C* Result);
	void Update Line Of Sight(FVector Direction, FVector End, bool DidHit);
	void Negate(float Value, float Result);
	void Between(float Value, float Min, float Max, bool IsBetween);
	void Can Fire(FText FailMsg, UDialogDataAsset* FailShout, bool CanShoot);
	FVector GetStartLocation();
	void LineTrace(FHitResult OutHit, FVector Direction, float Distance, bool HitAny);
	void ReceiveTick(float DeltaSeconds);
	void RecieveStopUsing();
	void RecieveEquipped();
	void AddedToInventory(APlayerCharacter* ItemOwner);
	void ReceiveBeginPlay();
	void BndEvt__CrosshairAggregator_K2Node_ComponentBoundEvent_0_CrosshairCreated__DelegateSignature(UUserWidget* Crosshair);
	void RecieveUnequipped();
	void BndEvt__ZiplineLauncher_K2Node_ComponentBoundEvent_2_WeaponFiredDelegate__DelegateSignature(FVector Location);
	void ExecuteUbergraph_WPN_ZipLineGun(int32_t EntryPoint);
};

