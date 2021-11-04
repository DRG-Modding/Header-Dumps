// WidgetBlueprintGeneratedClass WeaponDisplay_FlareGun_AmmoCount.WeaponDisplay_FlareGun_AmmoCount_C
// Size: 0x288 (Inherited: 0x250)
struct UWeaponDisplay_FlareGun_AmmoCount_C : UWeaponDisplay_Base_AmmoCount_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	UTextBlock* AmmoCount; // 0x258(0x08)
	UAnimatedStaticOverlay_WithScanlines_LightVersion_C* AnimatedStaticOverlay_WithScanlines_LightVersion; // 0x260(0x08)
	UImage* Image_1; // 0x268(0x08)
	UImage* Image_2; // 0x270(0x08)
	UImage* Image_89; // 0x278(0x08)
	UTextBlock* MaxAmmo; // 0x280(0x08)

	void SetTotalCount(int32_t Value);
	void SetClipCount(int32_t Value);
	void ExecuteUbergraph_WeaponDisplay_FlareGun_AmmoCount(int32_t EntryPoint);
};

