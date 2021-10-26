// WidgetBlueprintGeneratedClass HUD_AmmoCount.HUD_AmmoCount_C
// Size: 0x270 (Inherited: 0x250)
struct UHUD_AmmoCount_C : UAmmoCountWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	UHorizontalBox* AmmoBox; // 0x258(0x08)
	UTextBlock* DATA_Current; // 0x260(0x08)
	UTextBlock* DATA_Total; // 0x268(0x08)

	void OnTotalChanged(int32_t Total);
	void OnAmountChanged(int32_t count);
	void OnVisibleChanged(bool Visible, bool showClipCount);
	void Construct();
	void OnTotalVisibleChanged(bool Visible);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_HUD_AmmoCount(int32_t EntryPoint);
};

