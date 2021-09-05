// WidgetBlueprintGeneratedClass WeaponDisplay_Drill_AmmoCount.WeaponDisplay_Drill_AmmoCount_C
// Size: 0x280 (Inherited: 0x250)
struct UWeaponDisplay_Drill_AmmoCount_C : UWeaponDisplay_Base_AmmoCount_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	UTextBlock* AmmoCount; // 0x258(0x08)
	UProgressBar* AmmoProgressBar; // 0x260(0x08)
	UImage* Image_88; // 0x268(0x08)
	UImage* Image_247; // 0x270(0x08)
	int32_t CurrentClipCount; // 0x278(0x04)
	int32_t TotalClipCount; // 0x27c(0x04)

	void AdjustProgressBar();
	void SetClipCount(int32_t Value);
	void SetTotalCount(int32_t Value);
	void Construct();
	void ExecuteUbergraph_WeaponDisplay_Drill_AmmoCount(int32_t EntryPoint);
};

