// WidgetBlueprintGeneratedClass GooCannon_AmmoCounter.GooCannon_AmmoCounter_C
// Size: 0x290 (Inherited: 0x250)
struct UGooCannon_AmmoCounter_C : UWeaponDisplay_Base_AmmoCount_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	UWidgetAnimation* AmmoCritical; // 0x258(0x08)
	UImage* BG; // 0x260(0x08)
	UTextBlock* ClipCount; // 0x268(0x08)
	UTextBlock* TotalCount; // 0x270(0x08)
	UImage* WarningOverlay; // 0x278(0x08)
	int32_t ActualClipCount; // 0x280(0x04)
	int32_t AnimatedClipCount; // 0x284(0x04)
	FTimerHandle CountHandle; // 0x288(0x08)

	void UpdateClipCount();
	void UpdateAmmoCritical();
	void SetNumber(int32_t Value, UTextBlock* Label, int32_t OutValue);
	void SetTotalCount(int32_t Value);
	void Construct();
	void SetClipCount(int32_t Value);
	void ExecuteUbergraph_GooCannon_AmmoCounter(int32_t EntryPoint);
};

