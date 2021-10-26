// WidgetBlueprintGeneratedClass WeaponDisplay_BoltActionRifle_AmmoCount.WeaponDisplay_BoltActionRifle_AmmoCount_C
// Size: 0x278 (Inherited: 0x250)
struct UWeaponDisplay_BoltActionRifle_AmmoCount_C : UWeaponDisplay_Base_AmmoCount_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	UHorizontalBox* AmmoBox; // 0x258(0x08)
	UTextBlock* AmmoCount; // 0x260(0x08)
	UImage* Image_89; // 0x268(0x08)
	UTextBlock* MaxAmmo; // 0x270(0x08)

	void SetTotalCount(int32_t Value);
	void SetClipCount(int32_t Value);
	void ExecuteUbergraph_WeaponDisplay_BoltActionRifle_AmmoCount(int32_t EntryPoint);
};

