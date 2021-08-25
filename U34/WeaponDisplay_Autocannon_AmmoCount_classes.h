// WidgetBlueprintGeneratedClass WeaponDisplay_Autocannon_AmmoCount.WeaponDisplay_Autocannon_AmmoCount_C
// Size: 0x298 (Inherited: 0x250)
struct UWeaponDisplay_Autocannon_AmmoCount_C : UWeaponDisplay_Base_AmmoCount_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UWidgetAnimation* ReloadStart; // 0x258(0x08)
	struct UWidgetAnimation* ReloadLoop; // 0x260(0x08)
	struct UWidgetAnimation* ReloadEnd; // 0x268(0x08)
	struct UAnimatedStaticOverlay_C* AnimatedStaticOverlay; // 0x270(0x08)
	struct UBorder* Border_4; // 0x278(0x08)
	struct UTextBlock* DATA_AmmoCurrent; // 0x280(0x08)
	struct UTextBlock* DATA_AmmoTotal; // 0x288(0x08)
	struct UTextBlock* TEXT_Reloading; // 0x290(0x08)

	void SetClipCount(int32_t Value); // Function WeaponDisplay_Autocannon_AmmoCount.WeaponDisplay_Autocannon_AmmoCount_C.SetClipCount
	void OnReloadStarted(); // Function WeaponDisplay_Autocannon_AmmoCount.WeaponDisplay_Autocannon_AmmoCount_C.OnReloadStarted
	void OnReloadComplete(); // Function WeaponDisplay_Autocannon_AmmoCount.WeaponDisplay_Autocannon_AmmoCount_C.OnReloadComplete
	void SetTotalCount(int32_t Value); // Function WeaponDisplay_Autocannon_AmmoCount.WeaponDisplay_Autocannon_AmmoCount_C.SetTotalCount
	void Construct(); // Function WeaponDisplay_Autocannon_AmmoCount.WeaponDisplay_Autocannon_AmmoCount_C.Construct
	void ExecuteUbergraph_WeaponDisplay_Autocannon_AmmoCount(int32_t EntryPoint); // Function WeaponDisplay_Autocannon_AmmoCount.WeaponDisplay_Autocannon_AmmoCount_C.ExecuteUbergraph_WeaponDisplay_Autocannon_AmmoCount
};

