// WidgetBlueprintGeneratedClass WeaponDisplay_GrenadeLauncher_AmmoCounter.WeaponDisplay_GrenadeLauncher_AmmoCounter_C
// Size: 0x288 (Inherited: 0x250)
struct UWeaponDisplay_GrenadeLauncher_AmmoCounter_C : UWeaponDisplay_Base_AmmoCount_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UWidgetAnimation* AmmoCritical; // 0x258(0x08)
	struct UAnimatedStaticOverlay_WithScanlines_LightVersion_C* AnimatedStaticOverlay_WithScanlines_LightVersion; // 0x260(0x08)
	struct UImage* Image_89; // 0x268(0x08)
	struct UTextBlock* MaxAmmo; // 0x270(0x08)
	struct UTextBlock* TextBlock_1; // 0x278(0x08)
	struct UImage* WarningOverlay; // 0x280(0x08)

	void SetTotalCount(int32_t Value); // Function WeaponDisplay_GrenadeLauncher_AmmoCounter.WeaponDisplay_GrenadeLauncher_AmmoCounter_C.SetTotalCount
	void SetClipCount(int32_t Value); // Function WeaponDisplay_GrenadeLauncher_AmmoCounter.WeaponDisplay_GrenadeLauncher_AmmoCounter_C.SetClipCount
	void Construct(); // Function WeaponDisplay_GrenadeLauncher_AmmoCounter.WeaponDisplay_GrenadeLauncher_AmmoCounter_C.Construct
	void Max Ammo Changed(int32_t amount); // Function WeaponDisplay_GrenadeLauncher_AmmoCounter.WeaponDisplay_GrenadeLauncher_AmmoCounter_C.Max Ammo Changed
	void Total Ammo left changed(int32_t amount); // Function WeaponDisplay_GrenadeLauncher_AmmoCounter.WeaponDisplay_GrenadeLauncher_AmmoCounter_C.Total Ammo left changed
	void ExecuteUbergraph_WeaponDisplay_GrenadeLauncher_AmmoCounter(int32_t EntryPoint); // Function WeaponDisplay_GrenadeLauncher_AmmoCounter.WeaponDisplay_GrenadeLauncher_AmmoCounter_C.ExecuteUbergraph_WeaponDisplay_GrenadeLauncher_AmmoCounter
};

