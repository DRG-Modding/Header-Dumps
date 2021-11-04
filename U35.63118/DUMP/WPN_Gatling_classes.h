// BlueprintGeneratedClass WPN_Gatling.WPN_Gatling_C
// Size: 0x7c0 (Inherited: 0x768)
struct AWPN_Gatling_C : AGatlingGun {
	FPointerToUberGraphFrame UberGraphFrame; // 0x768(0x08)
	UNiagaraComponent* ParticleSystem; // 0x770(0x08)
	UWeaponImpactComponent* WeaponImpact; // 0x778(0x08)
	UDamageComponent* CritcalOverheatDamage; // 0x780(0x08)
	UFirstPersonParticleSystemComponent* FirstPersonParticleSystem; // 0x788(0x08)
	UFirstPersonPointLightComponent* Light_MuzzleFlash; // 0x790(0x08)
	UFirstPersonWidgetComponent* Widget_Overheat; // 0x798(0x08)
	UHeatMaterialComponent* HeatMaterial; // 0x7a0(0x08)
	UFirstPersonWidgetComponent* Widget_Ammo; // 0x7a8(0x08)
	UCrosshairAggregator* CrosshairAggregator; // 0x7b0(0x08)
	UHitscanComponent* HitScan; // 0x7b8(0x08)

	void GetGearStatEntry(AFSDPlayerState* PlayerState, TArray<FGearStatEntry> Stats);
	void UserConstructionScript();
	void Receive_Overheated();
	void Receive_IsFiringChanged(bool NewValue);
	void RecieveEquipped();
	void RecieveUnequipped();
	void All_SpawnHeatBurst();
	void TriggerCriticalOverheat();
	void OnTemperatureChanged(float Temperature, bool Overheated);
	void ReceiveBeginPlay();
	void OnSkinChanged(USkinEffect* Skin);
	void BndEvt__WeaponImpact_K2Node_ComponentBoundEvent_1_HightAccelerationSignature__DelegateSignature();
	void CustomEvent1(UItemUpgrade* Event);
	void ExecuteUbergraph_WPN_Gatling(int32_t EntryPoint);
};

