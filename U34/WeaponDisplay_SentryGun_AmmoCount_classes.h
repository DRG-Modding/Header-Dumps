// WidgetBlueprintGeneratedClass WeaponDisplay_SentryGun_AmmoCount.WeaponDisplay_SentryGun_AmmoCount_C
// Size: 0x270 (Inherited: 0x250)
struct UWeaponDisplay_SentryGun_AmmoCount_C : UWeaponDisplay_Base_AmmoCount_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UWidgetAnimation* Fire; // 0x258(0x08)
	struct UTextBlock* AmmoCount; // 0x260(0x08)
	struct UAnimatedStaticOverlay_C* AnimatedStaticOverlay; // 0x268(0x08)

	void SetSentry(struct ASentryGun* SentryGun); // Function WeaponDisplay_SentryGun_AmmoCount.WeaponDisplay_SentryGun_AmmoCount_C.SetSentry
	void OnAmmoCountChanged(int32_t AmmoCount, int32_t Change); // Function WeaponDisplay_SentryGun_AmmoCount.WeaponDisplay_SentryGun_AmmoCount_C.OnAmmoCountChanged
	void Construct(); // Function WeaponDisplay_SentryGun_AmmoCount.WeaponDisplay_SentryGun_AmmoCount_C.Construct
	void ExecuteUbergraph_WeaponDisplay_SentryGun_AmmoCount(int32_t EntryPoint); // Function WeaponDisplay_SentryGun_AmmoCount.WeaponDisplay_SentryGun_AmmoCount_C.ExecuteUbergraph_WeaponDisplay_SentryGun_AmmoCount
};

