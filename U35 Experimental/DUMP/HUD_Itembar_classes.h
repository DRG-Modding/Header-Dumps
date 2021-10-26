// WidgetBlueprintGeneratedClass HUD_Itembar.HUD_Itembar_C
// Size: 0x2b1 (Inherited: 0x288)
struct UHUD_Itembar_C : UItemsBar {
	FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	UWidgetAnimation* FadeOut; // 0x290(0x08)
	UBorder* FadeBorder; // 0x298(0x08)
	UHorizontalBox* IconsParent; // 0x2a0(0x08)
	URetainerBox* RetainerBox_1; // 0x2a8(0x08)
	bool Fading; // 0x2b0(0x01)

	void OnItemAdded(UItemsBarIcon* ItemIcon);
	void OnClear();
	void Construct();
	void OnItemEquipped(UItemsBarIcon* ItemIcon);
	void Show();
	void OnInputSourceChanged(enum class EFSDInputSource InputSource);
	void OnItemClicked();
	void PreConstruct(bool IsDesignTime);
	void FadeOutFinished();
	void ExecuteUbergraph_HUD_Itembar(int32_t EntryPoint);
};

