// BlueprintGeneratedClass WPN_Cryospray.WPN_Cryospray_C
// Size: 0x8c8 (Inherited: 0x860)
struct AWPN_Cryospray_C : ACryosprayItem {
	FPointerToUberGraphFrame UberGraphFrame; // 0x860(0x08)
	UAudioComponent* AudioPressurerising; // 0x868(0x08)
	UFirstPersonPointLightComponent* GaugeLight; // 0x870(0x08)
	UFirstPersonStaticMeshComponent* FirstPersonStaticMesh; // 0x878(0x08)
	UFirstPersonStaticMeshComponent* FP_Widget_Shooting_Gauge; // 0x880(0x08)
	UFirstPersonParticleSystemComponent* PressureVent_Particle; // 0x888(0x08)
	UFirstPersonWidgetComponent* FPwidget_Ammo; // 0x890(0x08)
	UCrosshairAggregator* CrosshairAggregator; // 0x898(0x08)
	UPointLightComponent* MuzzleLight; // 0x8a0(0x08)
	UWeaponDisplay_CryoSpray_Ammo_C* UI_Ammo; // 0x8a8(0x08)
	UParticleSystemComponent* ChargeInstance; // 0x8b0(0x08)
	UParticleSystem* LaunchProjectileParticlesFP; // 0x8b8(0x08)
	UParticleSystem* LaunchProjectileParticlesTP; // 0x8c0(0x08)

	void GetGearStatEntry(AFSDPlayerState* PlayerState, TArray<FGearStatEntry> Stats);
	void UserConstructionScript();
	void BndEvt__Aggregator_K2Node_ComponentBoundEvent_0_AmountChangedSignature__DelegateSignature(int32_t Amount);
	void Update Ammo Display();
	void ReceiveRepressurisingChanged(bool Value);
	void RecieveEquipped();
	void RecieveUnequipped();
	void Toggle RepressurerisingFX(bool On);
	void OnProjectileLaunched(FVector Location);
	void ReceiveBeginPlay();
	void OnPreProjectileLaunch();
	void ExecuteUbergraph_WPN_Cryospray(int32_t EntryPoint);
};

