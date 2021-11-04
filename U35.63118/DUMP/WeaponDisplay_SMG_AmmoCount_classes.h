// WidgetBlueprintGeneratedClass WeaponDisplay_SMG_AmmoCount.WeaponDisplay_SMG_AmmoCount_C
// Size: 0x278 (Inherited: 0x250)
struct UWeaponDisplay_SMG_AmmoCount_C : UWeaponDisplay_Base_AmmoCount_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	UWidgetAnimation* Fire; // 0x258(0x08)
	UTextBlock* DATA_AmmoCurrent; // 0x260(0x08)
	UTextBlock* DATA_AmmoTotal; // 0x268(0x08)
	UTextBlock* TXT_Loading; // 0x270(0x08)

	void SetTotalCount(int32_t Value);
	void SetClipCount(int32_t Value);
	void Construct();
	void ExecuteUbergraph_WeaponDisplay_SMG_AmmoCount(int32_t EntryPoint);
};

