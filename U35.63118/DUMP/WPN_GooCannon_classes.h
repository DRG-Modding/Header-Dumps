// BlueprintGeneratedClass WPN_GooCannon.WPN_GooCannon_C
// Size: 0x7f0 (Inherited: 0x788)
struct AWPN_GooCannon_C : AGooGun {
	FPointerToUberGraphFrame UberGraphFrame; // 0x788(0x08)
	UFirstPersonParticleSystemComponent* FirstPersonParticleSystemTest; // 0x790(0x08)
	UAudioComponent* GooCannon_FullyCharged_Cue; // 0x798(0x08)
	UFirstPersonWidgetComponent* Widget_Ammo; // 0x7a0(0x08)
	UAudioComponent* GooCannonCharge_Cue; // 0x7a8(0x08)
	UChargedProjectileLauncherComponent* ChargedProjectileLauncher; // 0x7b0(0x08)
	UPointLightComponent* MuzzlePointLight; // 0x7b8(0x08)
	UCrosshairAggregator* CrosshairAggregator; // 0x7c0(0x08)
	UWeaponDisplay_ChargeBlaster_AmmoCounter_C* AmmoUI; // 0x7c8(0x08)
	UAudioComponent* AC_ChargeLevel_1; // 0x7d0(0x08)
	UAudioComponent* AC_ChargeSpinUp; // 0x7d8(0x08)
	UParticleSystemComponent* OverheatEmitterInstance; // 0x7e0(0x08)
	bool BurstFireActive; // 0x7e8(0x01)
	bool HasChargeUpgrade; // 0x7e9(0x01)
	bool HasVacuum; // 0x7ea(0x01)
	float PuddleAmmoPool; // 0x7ec(0x04)

	void ApplyUpgradeModifiers(UItemUpgrade* ItemUpgrade);
	void GetNearbyPuddles();
	void FadeOutIfValid(UAudioComponent* AC);
	void Handle Charge Audio(float charge);
	void GetGearStatEntry(AFSDPlayerState* PlayerState, TArray<FGearStatEntry> Stats);
	void UserConstructionScript();
	void AddedToInventory(APlayerCharacter* ItemOwner);
	void OnChargeChanged_Event_1(float charge);
	void CustomEvent1(UItemUpgrade* Event);
	void RecieveUnequipped();
	void ReloadEvent();
	void SuckInPuddle(ABP_GooCannon_GooPuddle_C* Puddle);
	void ServerSuckInPuddle(ABP_GooCannon_GooPuddle_C* Puddle);
	void OnPuddleSuckedIn();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_WPN_GooCannon(int32_t EntryPoint);
};

