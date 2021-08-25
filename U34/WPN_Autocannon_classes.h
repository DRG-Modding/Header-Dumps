// BlueprintGeneratedClass WPN_Autocannon.WPN_Autocannon_C
// Size: 0x7b4 (Inherited: 0x758)
struct AWPN_Autocannon_C : AAutoCannon {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x758(0x08)
	struct UNiagaraComponent* ParticleSystem; // 0x760(0x08)
	struct UWeaponImpactComponent* WeaponImpact; // 0x768(0x08)
	struct UDamageComponent* Damage; // 0x770(0x08)
	struct UFirstPersonParticleSystemComponent* FirstPersonParticleSystem; // 0x778(0x08)
	struct UFirstPersonPointLightComponent* Light_MuzzleFlash; // 0x780(0x08)
	struct UFirstPersonWidgetComponent* Widget_Overheat; // 0x788(0x08)
	struct UFirstPersonWidgetComponent* Widget_Ammo; // 0x790(0x08)
	struct UCrosshairAggregator* CrosshairAggregator; // 0x798(0x08)
	struct UHitscanComponent* HitScan; // 0x7a0(0x08)
	float SplashDamage; // 0x7a8(0x04)
	float SplashRadius; // 0x7ac(0x04)
	float StartTime; // 0x7b0(0x04)

	struct FText RoundStatValue(struct FText InText, struct FString Suffix, bool KeepSign); // Function WPN_Autocannon.WPN_Autocannon_C.RoundStatValue
	void GetGearStatEntry(struct AFSDPlayerState* PlayerState, struct TArray<struct FGearStatEntry> Stats); // Function WPN_Autocannon.WPN_Autocannon_C.GetGearStatEntry
	void UserConstructionScript(); // Function WPN_Autocannon.WPN_Autocannon_C.UserConstructionScript
	void ShowCurentFireTime(); // Function WPN_Autocannon.WPN_Autocannon_C.ShowCurentFireTime
	void ReceiveBeginPlay(); // Function WPN_Autocannon.WPN_Autocannon_C.ReceiveBeginPlay
	void RecieveUnequipped(); // Function WPN_Autocannon.WPN_Autocannon_C.RecieveUnequipped
	void RecieveEquipped(); // Function WPN_Autocannon.WPN_Autocannon_C.RecieveEquipped
	void Receive_IsFiringChanged(bool NewValue); // Function WPN_Autocannon.WPN_Autocannon_C.Receive_IsFiringChanged
	void BndEvt__WeaponImpact_K2Node_ComponentBoundEvent_1_HightAccelerationSignature__DelegateSignature(); // Function WPN_Autocannon.WPN_Autocannon_C.BndEvt__WeaponImpact_K2Node_ComponentBoundEvent_1_HightAccelerationSignature__DelegateSignature
	void RecieveFiredWeapon(); // Function WPN_Autocannon.WPN_Autocannon_C.RecieveFiredWeapon
	void ExecuteUbergraph_WPN_Autocannon(int32_t EntryPoint); // Function WPN_Autocannon.WPN_Autocannon_C.ExecuteUbergraph_WPN_Autocannon
};

