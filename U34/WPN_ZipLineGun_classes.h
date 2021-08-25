// BlueprintGeneratedClass WPN_ZipLineGun.WPN_ZipLineGun_C
// Size: 0x747 (Inherited: 0x6e8)
struct AWPN_ZipLineGun_C : AZipLineItem {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6e8(0x08)
	struct UPointLightComponent* PointLight; // 0x6f0(0x08)
	struct USpotLightComponent* SpotLight; // 0x6f8(0x08)
	struct UFirstPersonWidgetComponent* FirstPersonWidget; // 0x700(0x08)
	struct UFirstPersonStaticMeshComponent* FirstPersonStaticMesh; // 0x708(0x08)
	struct UPointLightComponent* Muzzle light; // 0x710(0x08)
	struct UZiplineLauncherComponent* ZiplineLauncher; // 0x718(0x08)
	struct USceneComponent* Beam; // 0x720(0x08)
	struct UCrosshairAggregator* CrosshairAggregator; // 0x728(0x08)
	float debug_t; // 0x730(0x04)
	char UnknownData_734[0x4]; // 0x734(0x04)
	struct UHUD_Crosshair_ZiplineGun_C* Crosshair; // 0x738(0x08)
	float BeamDelay; // 0x740(0x04)
	bool InRange; // 0x744(0x01)
	bool TooFar; // 0x745(0x01)
	bool TooClose; // 0x746(0x01)

	void GetGrounded(bool OutGrounded); // Function WPN_ZipLineGun.WPN_ZipLineGun_C.GetGrounded
	struct FVector CalcFirstPersonMuzzleLocation(); // Function WPN_ZipLineGun.WPN_ZipLineGun_C.CalcFirstPersonMuzzleLocation
	bool CanFireWeapon(struct FText FailMsg, struct UDialogDataAsset* FailShout); // Function WPN_ZipLineGun.WPN_ZipLineGun_C.CanFireWeapon
	void GetGearStatEntry(struct AFSDPlayerState* PlayerState, struct TArray<struct FGearStatEntry> Stats); // Function WPN_ZipLineGun.WPN_ZipLineGun_C.GetGearStatEntry
	void GetCrosshair(struct UHUD_Crosshair_ZiplineGun_C* Result); // Function WPN_ZipLineGun.WPN_ZipLineGun_C.GetCrosshair
	void Update Line Of Sight(struct FVector Direction, struct FVector End, bool DidHit); // Function WPN_ZipLineGun.WPN_ZipLineGun_C.Update Line Of Sight
	void Negate(float Value, float Result); // Function WPN_ZipLineGun.WPN_ZipLineGun_C.Negate
	void Between(float Value, float Min, float Max, bool IsBetween); // Function WPN_ZipLineGun.WPN_ZipLineGun_C.Between
	void Can Fire(struct FText FailMsg, struct UDialogDataAsset* FailShout, bool CanShoot); // Function WPN_ZipLineGun.WPN_ZipLineGun_C.Can Fire
	struct FVector GetStartLocation(); // Function WPN_ZipLineGun.WPN_ZipLineGun_C.GetStartLocation
	void LineTrace(struct FHitResult OutHit, struct FVector Direction, float Distance, bool HitAny); // Function WPN_ZipLineGun.WPN_ZipLineGun_C.LineTrace
	void ClientShoot(); // Function WPN_ZipLineGun.WPN_ZipLineGun_C.ClientShoot
	void ReceiveTick(float DeltaSeconds); // Function WPN_ZipLineGun.WPN_ZipLineGun_C.ReceiveTick
	void RecieveStopUsing(); // Function WPN_ZipLineGun.WPN_ZipLineGun_C.RecieveStopUsing
	void AddedToInventory(struct APlayerCharacter* ItemOwner); // Function WPN_ZipLineGun.WPN_ZipLineGun_C.AddedToInventory
	void RecieveStartUsing(); // Function WPN_ZipLineGun.WPN_ZipLineGun_C.RecieveStartUsing
	void ReceiveBeginPlay(); // Function WPN_ZipLineGun.WPN_ZipLineGun_C.ReceiveBeginPlay
	void BndEvt__CrosshairAggregator_K2Node_ComponentBoundEvent_0_CrosshairCreated__DelegateSignature(struct UUserWidget* Crosshair); // Function WPN_ZipLineGun.WPN_ZipLineGun_C.BndEvt__CrosshairAggregator_K2Node_ComponentBoundEvent_0_CrosshairCreated__DelegateSignature
	void RecieveEquipped(); // Function WPN_ZipLineGun.WPN_ZipLineGun_C.RecieveEquipped
	void BndEvt__ZiplineLauncher_K2Node_ComponentBoundEvent_1_WeaponFiredDelegate__DelegateSignature(struct FVector Location); // Function WPN_ZipLineGun.WPN_ZipLineGun_C.BndEvt__ZiplineLauncher_K2Node_ComponentBoundEvent_1_WeaponFiredDelegate__DelegateSignature
	void RecieveUnequipped(); // Function WPN_ZipLineGun.WPN_ZipLineGun_C.RecieveUnequipped
	void ExecuteUbergraph_WPN_ZipLineGun(int32_t EntryPoint); // Function WPN_ZipLineGun.WPN_ZipLineGun_C.ExecuteUbergraph_WPN_ZipLineGun
};

