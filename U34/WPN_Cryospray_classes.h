// BlueprintGeneratedClass WPN_Cryospray.WPN_Cryospray_C
// Size: 0x880 (Inherited: 0x818)
struct AWPN_Cryospray_C : ACryosprayItem {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x818(0x08)
	struct UAudioComponent* AudioPressurerising; // 0x820(0x08)
	struct UFirstPersonPointLightComponent* GaugeLight; // 0x828(0x08)
	struct UFirstPersonStaticMeshComponent* FirstPersonStaticMesh; // 0x830(0x08)
	struct UFirstPersonStaticMeshComponent* FP_Widget_Shooting_Gauge; // 0x838(0x08)
	struct UFirstPersonParticleSystemComponent* PressureVent_Particle; // 0x840(0x08)
	struct UFirstPersonWidgetComponent* FPwidget_Ammo; // 0x848(0x08)
	struct UCrosshairAggregator* CrosshairAggregator; // 0x850(0x08)
	struct UPointLightComponent* MuzzleLight; // 0x858(0x08)
	struct UWeaponDisplay_CryoSpray_Ammo_C* UI_Ammo; // 0x860(0x08)
	struct UParticleSystemComponent* ChargeInstance; // 0x868(0x08)
	struct UParticleSystem* LaunchProjectileParticlesFP; // 0x870(0x08)
	struct UParticleSystem* LaunchProjectileParticlesTP; // 0x878(0x08)

	void GetGearStatEntry(struct AFSDPlayerState* PlayerState, struct TArray<struct FGearStatEntry> Stats); // Function WPN_Cryospray.WPN_Cryospray_C.GetGearStatEntry
	void UserConstructionScript(); // Function WPN_Cryospray.WPN_Cryospray_C.UserConstructionScript
	void BndEvt__Aggregator_K2Node_ComponentBoundEvent_0_AmountChangedSignature__DelegateSignature(int32_t amount); // Function WPN_Cryospray.WPN_Cryospray_C.BndEvt__Aggregator_K2Node_ComponentBoundEvent_0_AmountChangedSignature__DelegateSignature
	void Update Ammo Display(); // Function WPN_Cryospray.WPN_Cryospray_C.Update Ammo Display
	void ReceiveRepressurisingChanged(bool Value); // Function WPN_Cryospray.WPN_Cryospray_C.ReceiveRepressurisingChanged
	void RecieveEquipped(); // Function WPN_Cryospray.WPN_Cryospray_C.RecieveEquipped
	void RecieveUnequipped(); // Function WPN_Cryospray.WPN_Cryospray_C.RecieveUnequipped
	void Toggle RepressurerisingFX(bool on); // Function WPN_Cryospray.WPN_Cryospray_C.Toggle RepressurerisingFX
	void OnProjectileLaunched(struct FVector Location); // Function WPN_Cryospray.WPN_Cryospray_C.OnProjectileLaunched
	void ReceiveBeginPlay(); // Function WPN_Cryospray.WPN_Cryospray_C.ReceiveBeginPlay
	void OnPreProjectileLaunch(); // Function WPN_Cryospray.WPN_Cryospray_C.OnPreProjectileLaunch
	void ExecuteUbergraph_WPN_Cryospray(int32_t EntryPoint); // Function WPN_Cryospray.WPN_Cryospray_C.ExecuteUbergraph_WPN_Cryospray
};

