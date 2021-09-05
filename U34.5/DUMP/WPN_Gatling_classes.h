// BlueprintGeneratedClass WPN_Gatling.WPN_Gatling_C
// Size: 0x778 (Inherited: 0x720)
struct AWPN_Gatling_C : AGatlingGun {
	FPointerToUberGraphFrame UberGraphFrame; // 0x720(0x08)
	UNiagaraComponent* ParticleSystem; // 0x728(0x08)
	UWeaponImpactComponent* WeaponImpact; // 0x730(0x08)
	UDamageComponent* CritcalOverheatDamage; // 0x738(0x08)
	UFirstPersonParticleSystemComponent* FirstPersonParticleSystem; // 0x740(0x08)
	UFirstPersonPointLightComponent* Light_MuzzleFlash; // 0x748(0x08)
	UFirstPersonWidgetComponent* Widget_Overheat; // 0x750(0x08)
	UHeatMaterialComponent* HeatMaterial; // 0x758(0x08)
	UFirstPersonWidgetComponent* Widget_Ammo; // 0x760(0x08)
	UCrosshairAggregator* CrosshairAggregator; // 0x768(0x08)
	UHitscanComponent* HitScan; // 0x770(0x08)

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
	void ExecuteUbergraph_WPN_Gatling(int32_t EntryPoint);
};

