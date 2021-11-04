// WidgetBlueprintGeneratedClass WeaponDisplay_FlameThrower.WeaponDisplay_FlameThrower_C
// Size: 0x270 (Inherited: 0x250)
struct UWeaponDisplay_FlameThrower_C : UWeaponDisplay_Base_AmmoCount_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	UHorizontalBox* AmmoBox; // 0x258(0x08)
	UTextBlock* AmmoCount; // 0x260(0x08)
	UImage* Image_89; // 0x268(0x08)

	void SetTotalCount(int32_t Value);
	void ExecuteUbergraph_WeaponDisplay_FlameThrower(int32_t EntryPoint);
};

