// WidgetBlueprintGeneratedClass WeaponDisplay_Autocannon_AmmoCount.WeaponDisplay_Autocannon_AmmoCount_C
// Size: 0x290 (Inherited: 0x250)
struct UWeaponDisplay_Autocannon_AmmoCount_C : UWeaponDisplay_Base_AmmoCount_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	UWidgetAnimation* ReloadStart; // 0x258(0x08)
	UWidgetAnimation* ReloadLoop; // 0x260(0x08)
	UWidgetAnimation* ReloadEnd; // 0x268(0x08)
	UBorder* Border_4; // 0x270(0x08)
	UTextBlock* DATA_AmmoCurrent; // 0x278(0x08)
	UTextBlock* DATA_AmmoTotal; // 0x280(0x08)
	UTextBlock* TEXT_Reloading; // 0x288(0x08)

	void SetClipCount(int32_t Value);
	void OnReloadStarted();
	void OnReloadComplete();
	void SetTotalCount(int32_t Value);
	void Construct();
	void ExecuteUbergraph_WeaponDisplay_Autocannon_AmmoCount(int32_t EntryPoint);
};

