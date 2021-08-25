// WidgetBlueprintGeneratedClass HUD_Itembar.HUD_Itembar_C
// Size: 0x2b1 (Inherited: 0x288)
struct UHUD_Itembar_C : UItemsBar {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UWidgetAnimation* FadeOut; // 0x290(0x08)
	struct UBorder* FadeBorder; // 0x298(0x08)
	struct UHorizontalBox* IconsParent; // 0x2a0(0x08)
	struct URetainerBox* RetainerBox_1; // 0x2a8(0x08)
	bool Fading; // 0x2b0(0x01)

	void OnItemAdded(struct UItemsBarIcon* ItemIcon); // Function HUD_Itembar.HUD_Itembar_C.OnItemAdded
	void OnClear(); // Function HUD_Itembar.HUD_Itembar_C.OnClear
	void Construct(); // Function HUD_Itembar.HUD_Itembar_C.Construct
	void OnItemEquipped(struct UItemsBarIcon* ItemIcon); // Function HUD_Itembar.HUD_Itembar_C.OnItemEquipped
	void Show(); // Function HUD_Itembar.HUD_Itembar_C.Show
	void OnInputSourceChanged(enum class EFSDInputSource InputSource); // Function HUD_Itembar.HUD_Itembar_C.OnInputSourceChanged
	void OnItemClicked(); // Function HUD_Itembar.HUD_Itembar_C.OnItemClicked
	void PreConstruct(bool IsDesignTime); // Function HUD_Itembar.HUD_Itembar_C.PreConstruct
	void FadeOutFinished(); // Function HUD_Itembar.HUD_Itembar_C.FadeOutFinished
	void ExecuteUbergraph_HUD_Itembar(int32_t EntryPoint); // Function HUD_Itembar.HUD_Itembar_C.ExecuteUbergraph_HUD_Itembar
};

