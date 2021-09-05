// WidgetBlueprintGeneratedClass ITM_Wardrobe_ItemSelector.ITM_Wardrobe_ItemSelector_C
// Size: 0x2b0 (Inherited: 0x230)
struct UITM_Wardrobe_ItemSelector_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* AnimOpen; // 0x238(0x08)
	UBasic_ScrollBarBox_C* Basic_ScrollBarBox; // 0x240(0x08)
	UITM_MenuBackground_C* ITM_MenuBackground; // 0x248(0x08)
	UUniformGridPanel* SelectorGrid; // 0x250(0x08)
	int32_t MaxColumns; // 0x258(0x04)
	int32_t MinimumRows; // 0x25c(0x04)
	int32_t CellSize; // 0x260(0x04)
	FMargin InnerPadding; // 0x264(0x10)
	bool LeftSide; // 0x274(0x01)
	bool DesignTime; // 0x275(0x01)
	bool SelectorOpen; // 0x276(0x01)
	FMulticastInlineDelegate OnItemClicked; // 0x278(0x10)
	UITM_Wardrobe_ItemSlot_Base_C* ItemSlot; // 0x288(0x08)
	float AnimOpenProgress; // 0x290(0x04)
	FMulticastInlineDelegate OnSelectorOpenChanged; // 0x298(0x10)
	UITM_Wardrobe_ItemSelector_C* OtherSelector; // 0x2a8(0x08)

	void ItemUnhovered(int32_t Index, UWidget* Widget);
	void ItemHovered(int32_t Index, UWidget* Widget);
	void SetAnimOpenProgress(float InProgress);
	void ItemClicked(int32_t Index, UWidget* Widget);
	void SetOpen(bool InOpen);
	void PadRowWithBlanks();
	void ShowSlot(UITM_Wardrobe_ItemSlot_Base_C* InSlot);
	void ClearItems();
	void AddItem(UWidget* InChildWidget, bool InSelected, bool IsNewItem, UITM_Wardrobe_ItemSelector_Entry_C* OutEntry, UWidget* OutItemWidget);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnAnimOpenStarted();
	void OnAnimOpenFinished();
	void OnOtherSelectorOpen(bool IsOpen);
	void ExecuteUbergraph_ITM_Wardrobe_ItemSelector(int32_t EntryPoint);
	void OnSelectorOpenChanged__DelegateSignature(bool IsOpen);
	void OnItemClicked__DelegateSignature(int32_t Index, UWidget* Widget);
};

