// BlueprintGeneratedClass WPN_PlatformGun.WPN_PlatformGun_C
// Size: 0x6c1 (Inherited: 0x690)
struct AWPN_PlatformGun_C : AAmmoDrivenWeapon {
	FPointerToUberGraphFrame UberGraphFrame; // 0x690(0x08)
	UFirstPersonPointLightComponent* FirstPersonPointLight; // 0x698(0x08)
	UFirstPersonWidgetComponent* FirstPersonWidget; // 0x6a0(0x08)
	UCrosshairAggregator* CrosshairAggregator; // 0x6a8(0x08)
	UProjectileLauncherComponent* ProjectileLauncher; // 0x6b0(0x08)
	bool UsingBigPlatform; // 0x6b8(0x01)
	bool UsingLessFallDamage; // 0x6b9(0x01)
	bool UsingBugRepellant; // 0x6ba(0x01)
	int32_t Material; // 0x6bc(0x04)
	bool UsingCubePlatform; // 0x6c0(0x01)

	void GetGearStatEntry(AFSDPlayerState* PlayerState, TArray<FGearStatEntry> Stats);
	void ReceiveBeginPlay();
	void BndEvt__ProjectileLauncher_K2Node_ComponentBoundEvent_4_WeaponFiredDelegate__DelegateSignature(FVector Location);
	void Upgraded_Blueprint_Implementation(TArray<UItemUpgrade*> Upgrades);
	void BndEvt__ProjectileLauncher_K2Node_ComponentBoundEvent_0_ProjectileSpawned__DelegateSignature(AProjectileBase* Projectile);
	void ExecuteUbergraph_WPN_PlatformGun(int32_t EntryPoint);
};

