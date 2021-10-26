// BlueprintGeneratedClass WPN_ChargeBlaster.WPN_ChargeBlaster_C
// Size: 0x838 (Inherited: 0x770)
struct AWPN_ChargeBlaster_C : AChargedWeapon {
	FPointerToUberGraphFrame UberGraphFrame; // 0x770(0x08)
	UAudioComponent* AC_ChargeLevel; // 0x778(0x08)
	UFirstPersonWidgetComponent* Widget_ChargeNew; // 0x780(0x08)
	UFirstPersonStaticMeshComponent* FirstPersonStaticMesh2; // 0x788(0x08)
	UFirstPersonWidgetComponent* Widget_Ammo; // 0x790(0x08)
	UFirstPersonWidgetComponent* Widget_HeatNew; // 0x798(0x08)
	UFirstPersonStaticMeshComponent* FirstPersonStaticMesh1; // 0x7a0(0x08)
	UFirstPersonStaticMeshComponent* FirstPersonStaticMesh; // 0x7a8(0x08)
	UFirstPersonParticleSystemComponent* FirstPersonParticleSystem_Arc; // 0x7b0(0x08)
	UFirstPersonParticleSystemComponent* FirstPersonParticleSystem_Right; // 0x7b8(0x08)
	UFirstPersonParticleSystemComponent* FirstPersonParticleSystem_Left; // 0x7c0(0x08)
	UChargedProjectileLauncherComponent* ChargedProjectileLauncher; // 0x7c8(0x08)
	UPointLightComponent* MuzzlePointLight; // 0x7d0(0x08)
	UCrosshairAggregator* CrosshairAggregator; // 0x7d8(0x08)
	UWeaponDisplay_ChargeBlaster_Charge_C* ChargeUI; // 0x7e0(0x08)
	UWeaponDisplay_ChargeBlaster_Heat_C* OverheatUI; // 0x7e8(0x08)
	UWeaponDisplay_ChargeBlaster_AmmoCounter_C* AmmoUI; // 0x7f0(0x08)
	int32_t ChargeLevel; // 0x7f8(0x04)
	UAudioComponent* AC_Heat; // 0x800(0x08)
	USoundBase* TemperatureAudio; // 0x808(0x08)
	USoundBase* OverheatedAudio; // 0x810(0x08)
	UAudioComponent* AC_ChargeLevel_1; // 0x818(0x08)
	UAudioComponent* AC_ChargeSpinUp; // 0x820(0x08)
	UParticleSystemComponent* OverheatEmitterInstance; // 0x828(0x08)
	UMaterialInstanceDynamic* SlideParameter; // 0x830(0x08)

	void FadeOutIfValid(UAudioComponent* AC);
	void HandleHeatAudio();
	void HandleChargeAudio(float charge);
	void GetGearStatEntry(AFSDPlayerState* PlayerState, TArray<FGearStatEntry> Stats);
	void UserConstructionScript();
	void OnHeatChanged_Event_1(float charge);
	void ChargeChanged(float charge);
	void RecieveUnequipped();
	void ReceiveOverheatedChanged(bool isOverheated);
	void OnSkinChanged(USkinEffect* Skin);
	void AddedToInventory(APlayerCharacter* ItemOwner);
	void ExecuteUbergraph_WPN_ChargeBlaster(int32_t EntryPoint);
};

