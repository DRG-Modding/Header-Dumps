// WidgetBlueprintGeneratedClass WeaponDisplay_BoltActionRifle_AmmoCount.WeaponDisplay_BoltActionRifle_AmmoCount_C
// Size: 0x280 (Inherited: 0x250)
struct UWeaponDisplay_BoltActionRifle_AmmoCount_C : UWeaponDisplay_Base_AmmoCount_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UHorizontalBox* AmmoBox; // 0x258(0x08)
	struct UTextBlock* AmmoCount; // 0x260(0x08)
	struct UAnimatedStaticOverlay_WithScanlines_LightVersion_C* AnimatedStaticOverlay_WithScanlines_LightVersion; // 0x268(0x08)
	struct UImage* Image_89; // 0x270(0x08)
	struct UTextBlock* MaxAmmo; // 0x278(0x08)

	void SetTotalCount(int32_t Value); // Function WeaponDisplay_BoltActionRifle_AmmoCount.WeaponDisplay_BoltActionRifle_AmmoCount_C.SetTotalCount
	void SetClipCount(int32_t Value); // Function WeaponDisplay_BoltActionRifle_AmmoCount.WeaponDisplay_BoltActionRifle_AmmoCount_C.SetClipCount
	void ExecuteUbergraph_WeaponDisplay_BoltActionRifle_AmmoCount(int32_t EntryPoint); // Function WeaponDisplay_BoltActionRifle_AmmoCount.WeaponDisplay_BoltActionRifle_AmmoCount_C.ExecuteUbergraph_WeaponDisplay_BoltActionRifle_AmmoCount
};

