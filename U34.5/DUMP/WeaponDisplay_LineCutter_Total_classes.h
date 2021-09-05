// WidgetBlueprintGeneratedClass WeaponDisplay_LineCutter_Total.WeaponDisplay_LineCutter_Total_C
// Size: 0x278 (Inherited: 0x250)
struct UWeaponDisplay_LineCutter_Total_C : UWeaponDisplay_Base_AmmoCount_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	UAnimatedStaticOverlay_WithScanlines_LightVersion_C* AnimatedStaticOverlay_WithScanlines_LightVersion; // 0x258(0x08)
	UImage* Image_89; // 0x260(0x08)
	UTextBlock* MaxAmmo; // 0x268(0x08)
	UTextBlock* TextBlock_1; // 0x270(0x08)

	void SetTotalCount(int32_t Value);
	void SetClipCount(int32_t Value);
	void ExecuteUbergraph_WeaponDisplay_LineCutter_Total(int32_t EntryPoint);
};

