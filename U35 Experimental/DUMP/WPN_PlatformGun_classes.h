// BlueprintGeneratedClass WPN_PlatformGun.WPN_PlatformGun_C
// Size: 0x709 (Inherited: 0x6d8)
struct AWPN_PlatformGun_C : AAmmoDrivenWeapon {
	FPointerToUberGraphFrame UberGraphFrame; // 0x6d8(0x08)
	UFirstPersonPointLightComponent* FirstPersonPointLight; // 0x6e0(0x08)
	UFirstPersonWidgetComponent* FirstPersonWidget; // 0x6e8(0x08)
	UCrosshairAggregator* CrosshairAggregator; // 0x6f0(0x08)
	UProjectileLauncherComponent* ProjectileLauncher; // 0x6f8(0x08)
	bool UsingBigPlatform; // 0x700(0x01)
	bool UsingLessFallDamage; // 0x701(0x01)
	bool UsingBugRepellant; // 0x702(0x01)
	int32_t Material; // 0x704(0x04)
	bool UsingCubePlatform; // 0x708(0x01)

	void GetGearStatEntry(AFSDPlayerState* PlayerState, TArray<FGearStatEntry> Stats);
	void ReceiveBeginPlay();
	void BndEvt__ProjectileLauncher_K2Node_ComponentBoundEvent_4_WeaponFiredDelegate__DelegateSignature(FVector Location);
	void Upgraded_Blueprint_Implementation(TArray<UItemUpgrade*> upgrades);
	void BndEvt__ProjectileLauncher_K2Node_ComponentBoundEvent_0_ProjectileSpawned__DelegateSignature(AProjectileBase* Projectile);
	void ExecuteUbergraph_WPN_PlatformGun(int32_t EntryPoint);
};

