// WidgetBlueprintGeneratedClass WeaponDisplay_SMG_AmmoCount.WeaponDisplay_SMG_AmmoCount_C
// Size: 0x280 (Inherited: 0x250)
struct UWeaponDisplay_SMG_AmmoCount_C : UWeaponDisplay_Base_AmmoCount_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UWidgetAnimation* Fire; // 0x258(0x08)
	struct UAnimatedStaticOverlay_C* AnimatedStaticOverlay; // 0x260(0x08)
	struct UTextBlock* DATA_AmmoCurrent; // 0x268(0x08)
	struct UTextBlock* DATA_AmmoTotal; // 0x270(0x08)
	struct UTextBlock* TXT_Loading; // 0x278(0x08)

	void SetTotalCount(int32_t Value); // Function WeaponDisplay_SMG_AmmoCount.WeaponDisplay_SMG_AmmoCount_C.SetTotalCount
	void SetClipCount(int32_t Value); // Function WeaponDisplay_SMG_AmmoCount.WeaponDisplay_SMG_AmmoCount_C.SetClipCount
	void Construct(); // Function WeaponDisplay_SMG_AmmoCount.WeaponDisplay_SMG_AmmoCount_C.Construct
	void ExecuteUbergraph_WeaponDisplay_SMG_AmmoCount(int32_t EntryPoint); // Function WeaponDisplay_SMG_AmmoCount.WeaponDisplay_SMG_AmmoCount_C.ExecuteUbergraph_WeaponDisplay_SMG_AmmoCount
};

