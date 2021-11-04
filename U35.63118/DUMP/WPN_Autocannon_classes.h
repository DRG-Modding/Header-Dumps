// BlueprintGeneratedClass WPN_Autocannon.WPN_Autocannon_C
// Size: 0x7fc (Inherited: 0x7a0)
struct AWPN_Autocannon_C : AAutoCannon {
	FPointerToUberGraphFrame UberGraphFrame; // 0x7a0(0x08)
	UNiagaraComponent* ParticleSystem; // 0x7a8(0x08)
	UWeaponImpactComponent* WeaponImpact; // 0x7b0(0x08)
	UDamageComponent* Damage; // 0x7b8(0x08)
	UFirstPersonParticleSystemComponent* FirstPersonParticleSystem; // 0x7c0(0x08)
	UFirstPersonPointLightComponent* Light_MuzzleFlash; // 0x7c8(0x08)
	UFirstPersonWidgetComponent* Widget_Overheat; // 0x7d0(0x08)
	UFirstPersonWidgetComponent* Widget_Ammo; // 0x7d8(0x08)
	UCrosshairAggregator* CrosshairAggregator; // 0x7e0(0x08)
	UHitscanComponent* HitScan; // 0x7e8(0x08)
	float SplashDamage; // 0x7f0(0x04)
	float SplashRadius; // 0x7f4(0x04)
	float StartTime; // 0x7f8(0x04)

	FText RoundStatValue(FText InText, FString Suffix, bool KeepSign);
	void GetGearStatEntry(AFSDPlayerState* PlayerState, TArray<FGearStatEntry> Stats);
	void UserConstructionScript();
	void ShowCurentFireTime();
	void ReceiveBeginPlay();
	void RecieveUnequipped();
	void RecieveEquipped();
	void Receive_IsFiringChanged(bool NewValue);
	void BndEvt__WeaponImpact_K2Node_ComponentBoundEvent_1_HightAccelerationSignature__DelegateSignature();
	void RecieveFiredWeapon();
	void ExecuteUbergraph_WPN_Autocannon(int32_t EntryPoint);
};

