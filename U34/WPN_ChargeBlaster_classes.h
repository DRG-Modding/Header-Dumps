// BlueprintGeneratedClass WPN_ChargeBlaster.WPN_ChargeBlaster_C
// Size: 0x7f0 (Inherited: 0x728)
struct AWPN_ChargeBlaster_C : AChargedWeapon {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x728(0x08)
	struct UAudioComponent* AC_ChargeLevel; // 0x730(0x08)
	struct UFirstPersonWidgetComponent* Widget_ChargeNew; // 0x738(0x08)
	struct UFirstPersonStaticMeshComponent* FirstPersonStaticMesh2; // 0x740(0x08)
	struct UFirstPersonWidgetComponent* Widget_Ammo; // 0x748(0x08)
	struct UFirstPersonWidgetComponent* Widget_HeatNew; // 0x750(0x08)
	struct UFirstPersonStaticMeshComponent* FirstPersonStaticMesh1; // 0x758(0x08)
	struct UFirstPersonStaticMeshComponent* FirstPersonStaticMesh; // 0x760(0x08)
	struct UFirstPersonParticleSystemComponent* FirstPersonParticleSystem_Arc; // 0x768(0x08)
	struct UFirstPersonParticleSystemComponent* FirstPersonParticleSystem_Right; // 0x770(0x08)
	struct UFirstPersonParticleSystemComponent* FirstPersonParticleSystem_Left; // 0x778(0x08)
	struct UChargedProjectileLauncherComponent* ChargedProjectileLauncher; // 0x780(0x08)
	struct UPointLightComponent* MuzzlePointLight; // 0x788(0x08)
	struct UCrosshairAggregator* CrosshairAggregator; // 0x790(0x08)
	struct UWeaponDisplay_ChargeBlaster_Charge_C* ChargeUI; // 0x798(0x08)
	struct UWeaponDisplay_ChargeBlaster_Heat_C* OverheatUI; // 0x7a0(0x08)
	struct UWeaponDisplay_ChargeBlaster_AmmoCounter_C* AmmoUI; // 0x7a8(0x08)
	int32_t ChargeLevel; // 0x7b0(0x04)
	char UnknownData_7B4[0x4]; // 0x7b4(0x04)
	struct UAudioComponent* AC_Heat; // 0x7b8(0x08)
	struct USoundBase* TemperatureAudio; // 0x7c0(0x08)
	struct USoundBase* OverheatedAudio; // 0x7c8(0x08)
	struct UAudioComponent* AC_ChargeLevel_1; // 0x7d0(0x08)
	struct UAudioComponent* AC_ChargeSpinUp; // 0x7d8(0x08)
	struct UParticleSystemComponent* OverheatEmitterInstance; // 0x7e0(0x08)
	struct UMaterialInstanceDynamic* SlideParameter; // 0x7e8(0x08)

	void FadeOutIfValid(struct UAudioComponent* AC); // Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.FadeOutIfValid
	void HandleHeatAudio(); // Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.HandleHeatAudio
	void HandleChargeAudio(float charge); // Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.HandleChargeAudio
	void GetGearStatEntry(struct AFSDPlayerState* PlayerState, struct TArray<struct FGearStatEntry> Stats); // Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.GetGearStatEntry
	void UserConstructionScript(); // Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.UserConstructionScript
	void OnHeatChanged_Event_1(float charge); // Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.OnHeatChanged_Event_1
	void ChargeChanged(float charge); // Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.ChargeChanged
	void RecieveUnequipped(); // Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.RecieveUnequipped
	void ReceiveOverheatedChanged(bool isOverheated); // Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.ReceiveOverheatedChanged
	void OnSkinChanged(struct USkinEffect* Skin); // Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.OnSkinChanged
	void AddedToInventory(struct APlayerCharacter* ItemOwner); // Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.AddedToInventory
	void ExecuteUbergraph_WPN_ChargeBlaster(int32_t EntryPoint); // Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.ExecuteUbergraph_WPN_ChargeBlaster
};

