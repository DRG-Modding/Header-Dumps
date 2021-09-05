// BlueprintGeneratedClass WPN_Cryospray.WPN_Cryospray_C
// Size: 0x880 (Inherited: 0x818)
struct AWPN_Cryospray_C : ACryosprayItem {
	FPointerToUberGraphFrame UberGraphFrame; // 0x818(0x08)
	UAudioComponent* AudioPressurerising; // 0x820(0x08)
	UFirstPersonPointLightComponent* GaugeLight; // 0x828(0x08)
	UFirstPersonStaticMeshComponent* FirstPersonStaticMesh; // 0x830(0x08)
	UFirstPersonStaticMeshComponent* FP_Widget_Shooting_Gauge; // 0x838(0x08)
	UFirstPersonParticleSystemComponent* PressureVent_Particle; // 0x840(0x08)
	UFirstPersonWidgetComponent* FPwidget_Ammo; // 0x848(0x08)
	UCrosshairAggregator* CrosshairAggregator; // 0x850(0x08)
	UPointLightComponent* MuzzleLight; // 0x858(0x08)
	UWeaponDisplay_CryoSpray_Ammo_C* UI_Ammo; // 0x860(0x08)
	UParticleSystemComponent* ChargeInstance; // 0x868(0x08)
	UParticleSystem* LaunchProjectileParticlesFP; // 0x870(0x08)
	UParticleSystem* LaunchProjectileParticlesTP; // 0x878(0x08)

	void GetGearStatEntry(AFSDPlayerState* PlayerState, TArray<FGearStatEntry> Stats);
	void UserConstructionScript();
	void BndEvt__Aggregator_K2Node_ComponentBoundEvent_0_AmountChangedSignature__DelegateSignature(int32_t amount);
	void Update Ammo Display();
	void ReceiveRepressurisingChanged(bool Value);
	void RecieveEquipped();
	void RecieveUnequipped();
	void Toggle RepressurerisingFX(bool on);
	void OnProjectileLaunched(FVector Location);
	void ReceiveBeginPlay();
	void OnPreProjectileLaunch();
	void ExecuteUbergraph_WPN_Cryospray(int32_t EntryPoint);
};

