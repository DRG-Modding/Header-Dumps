// WidgetBlueprintGeneratedClass WeaponDisplay_DualSMG_AmmoCount.WeaponDisplay_DualSMG_AmmoCount_C
// Size: 0x278 (Inherited: 0x250)
struct UWeaponDisplay_DualSMG_AmmoCount_C : UWeaponDisplay_Base_AmmoCount_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UAnimatedStaticOverlay_WithScanlines_LightVersion_C* AnimatedStaticOverlay_WithScanlines_LightVersion; // 0x258(0x08)
	struct UTextBlock* DATA_AmmoClip; // 0x260(0x08)
	struct UTextBlock* DATA_AmmoTotal; // 0x268(0x08)
	struct UImage* Image_89; // 0x270(0x08)

	void SetClipCount(int32_t Value); // Function WeaponDisplay_DualSMG_AmmoCount.WeaponDisplay_DualSMG_AmmoCount_C.SetClipCount
	void SetTotalCount(int32_t Value); // Function WeaponDisplay_DualSMG_AmmoCount.WeaponDisplay_DualSMG_AmmoCount_C.SetTotalCount
	void ExecuteUbergraph_WeaponDisplay_DualSMG_AmmoCount(int32_t EntryPoint); // Function WeaponDisplay_DualSMG_AmmoCount.WeaponDisplay_DualSMG_AmmoCount_C.ExecuteUbergraph_WeaponDisplay_DualSMG_AmmoCount
};

