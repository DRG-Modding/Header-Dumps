// BlueprintGeneratedClass WPN_PlatformGun.WPN_PlatformGun_C
// Size: 0x6c1 (Inherited: 0x690)
struct AWPN_PlatformGun_C : AAmmoDrivenWeapon {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x690(0x08)
	struct UFirstPersonPointLightComponent* FirstPersonPointLight; // 0x698(0x08)
	struct UFirstPersonWidgetComponent* FirstPersonWidget; // 0x6a0(0x08)
	struct UCrosshairAggregator* CrosshairAggregator; // 0x6a8(0x08)
	struct UProjectileLauncherComponent* ProjectileLauncher; // 0x6b0(0x08)
	bool UsingBigPlatform; // 0x6b8(0x01)
	bool UsingLessFallDamage; // 0x6b9(0x01)
	bool UsingBugRepellant; // 0x6ba(0x01)
	char UnknownData_6BB[0x1]; // 0x6bb(0x01)
	int32_t Material; // 0x6bc(0x04)
	bool UsingCubePlatform; // 0x6c0(0x01)

	void GetGearStatEntry(struct AFSDPlayerState* PlayerState, struct TArray<struct FGearStatEntry> Stats); // Function WPN_PlatformGun.WPN_PlatformGun_C.GetGearStatEntry
	void ReceiveBeginPlay(); // Function WPN_PlatformGun.WPN_PlatformGun_C.ReceiveBeginPlay
	void BndEvt__ProjectileLauncher_K2Node_ComponentBoundEvent_4_WeaponFiredDelegate__DelegateSignature(struct FVector Location); // Function WPN_PlatformGun.WPN_PlatformGun_C.BndEvt__ProjectileLauncher_K2Node_ComponentBoundEvent_4_WeaponFiredDelegate__DelegateSignature
	void Upgraded_Blueprint_Implementation(struct TArray<struct UItemUpgrade*> Upgrades); // Function WPN_PlatformGun.WPN_PlatformGun_C.Upgraded_Blueprint_Implementation
	void BndEvt__ProjectileLauncher_K2Node_ComponentBoundEvent_0_ProjectileSpawned__DelegateSignature(struct AProjectileBase* Projectile); // Function WPN_PlatformGun.WPN_PlatformGun_C.BndEvt__ProjectileLauncher_K2Node_ComponentBoundEvent_0_ProjectileSpawned__DelegateSignature
	void ExecuteUbergraph_WPN_PlatformGun(int32_t EntryPoint); // Function WPN_PlatformGun.WPN_PlatformGun_C.ExecuteUbergraph_WPN_PlatformGun
};

