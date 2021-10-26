// WidgetBlueprintGeneratedClass WeaponDisplay_DualSMG_AmmoCount.WeaponDisplay_DualSMG_AmmoCount_C
// Size: 0x278 (Inherited: 0x250)
struct UWeaponDisplay_DualSMG_AmmoCount_C : UWeaponDisplay_Base_AmmoCount_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	UAnimatedStaticOverlay_WithScanlines_LightVersion_C* AnimatedStaticOverlay_WithScanlines_LightVersion; // 0x258(0x08)
	UTextBlock* DATA_AmmoClip; // 0x260(0x08)
	UTextBlock* DATA_AmmoTotal; // 0x268(0x08)
	UImage* Image_89; // 0x270(0x08)

	void SetClipCount(int32_t Value);
	void SetTotalCount(int32_t Value);
	void ExecuteUbergraph_WeaponDisplay_DualSMG_AmmoCount(int32_t EntryPoint);
};

