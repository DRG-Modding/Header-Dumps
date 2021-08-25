// BlueprintGeneratedClass WPN_Gatling.WPN_Gatling_C
// Size: 0x778 (Inherited: 0x720)
struct AWPN_Gatling_C : AGatlingGun {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x720(0x08)
	struct UNiagaraComponent* ParticleSystem; // 0x728(0x08)
	struct UWeaponImpactComponent* WeaponImpact; // 0x730(0x08)
	struct UDamageComponent* CritcalOverheatDamage; // 0x738(0x08)
	struct UFirstPersonParticleSystemComponent* FirstPersonParticleSystem; // 0x740(0x08)
	struct UFirstPersonPointLightComponent* Light_MuzzleFlash; // 0x748(0x08)
	struct UFirstPersonWidgetComponent* Widget_Overheat; // 0x750(0x08)
	struct UHeatMaterialComponent* HeatMaterial; // 0x758(0x08)
	struct UFirstPersonWidgetComponent* Widget_Ammo; // 0x760(0x08)
	struct UCrosshairAggregator* CrosshairAggregator; // 0x768(0x08)
	struct UHitscanComponent* HitScan; // 0x770(0x08)

	void GetGearStatEntry(struct AFSDPlayerState* PlayerState, struct TArray<struct FGearStatEntry> Stats); // Function WPN_Gatling.WPN_Gatling_C.GetGearStatEntry
	void UserConstructionScript(); // Function WPN_Gatling.WPN_Gatling_C.UserConstructionScript
	void Receive_Overheated(); // Function WPN_Gatling.WPN_Gatling_C.Receive_Overheated
	void Receive_IsFiringChanged(bool NewValue); // Function WPN_Gatling.WPN_Gatling_C.Receive_IsFiringChanged
	void RecieveEquipped(); // Function WPN_Gatling.WPN_Gatling_C.RecieveEquipped
	void RecieveUnequipped(); // Function WPN_Gatling.WPN_Gatling_C.RecieveUnequipped
	void All_SpawnHeatBurst(); // Function WPN_Gatling.WPN_Gatling_C.All_SpawnHeatBurst
	void TriggerCriticalOverheat(); // Function WPN_Gatling.WPN_Gatling_C.TriggerCriticalOverheat
	void OnTemperatureChanged(float Temperature, bool Overheated); // Function WPN_Gatling.WPN_Gatling_C.OnTemperatureChanged
	void ReceiveBeginPlay(); // Function WPN_Gatling.WPN_Gatling_C.ReceiveBeginPlay
	void OnSkinChanged(struct USkinEffect* Skin); // Function WPN_Gatling.WPN_Gatling_C.OnSkinChanged
	void BndEvt__WeaponImpact_K2Node_ComponentBoundEvent_1_HightAccelerationSignature__DelegateSignature(); // Function WPN_Gatling.WPN_Gatling_C.BndEvt__WeaponImpact_K2Node_ComponentBoundEvent_1_HightAccelerationSignature__DelegateSignature
	void ExecuteUbergraph_WPN_Gatling(int32_t EntryPoint); // Function WPN_Gatling.WPN_Gatling_C.ExecuteUbergraph_WPN_Gatling
};

