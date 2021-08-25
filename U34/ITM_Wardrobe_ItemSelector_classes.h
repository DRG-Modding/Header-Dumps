// WidgetBlueprintGeneratedClass ITM_Wardrobe_ItemSelector.ITM_Wardrobe_ItemSelector_C
// Size: 0x2b0 (Inherited: 0x230)
struct UITM_Wardrobe_ItemSelector_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* AnimOpen; // 0x238(0x08)
	struct UBasic_ScrollBarBox_C* Basic_ScrollBarBox; // 0x240(0x08)
	struct UITM_MenuBackground_C* ITM_MenuBackground; // 0x248(0x08)
	struct UUniformGridPanel* SelectorGrid; // 0x250(0x08)
	int32_t MaxColumns; // 0x258(0x04)
	int32_t MinimumRows; // 0x25c(0x04)
	int32_t CellSize; // 0x260(0x04)
	struct FMargin InnerPadding; // 0x264(0x10)
	bool LeftSide; // 0x274(0x01)
	bool DesignTime; // 0x275(0x01)
	bool SelectorOpen; // 0x276(0x01)
	char UnknownData_277[0x1]; // 0x277(0x01)
	struct FMulticastInlineDelegate OnItemClicked; // 0x278(0x10)
	struct UITM_Wardrobe_ItemSlot_Base_C* ItemSlot; // 0x288(0x08)
	float AnimOpenProgress; // 0x290(0x04)
	char UnknownData_294[0x4]; // 0x294(0x04)
	struct FMulticastInlineDelegate OnSelectorOpenChanged; // 0x298(0x10)
	struct UITM_Wardrobe_ItemSelector_C* OtherSelector; // 0x2a8(0x08)

	void ItemUnhovered(int32_t Index, struct UWidget* Widget); // Function ITM_Wardrobe_ItemSelector.ITM_Wardrobe_ItemSelector_C.ItemUnhovered
	void ItemHovered(int32_t Index, struct UWidget* Widget); // Function ITM_Wardrobe_ItemSelector.ITM_Wardrobe_ItemSelector_C.ItemHovered
	void SetAnimOpenProgress(float InProgress); // Function ITM_Wardrobe_ItemSelector.ITM_Wardrobe_ItemSelector_C.SetAnimOpenProgress
	void ItemClicked(int32_t Index, struct UWidget* Widget); // Function ITM_Wardrobe_ItemSelector.ITM_Wardrobe_ItemSelector_C.ItemClicked
	void SetOpen(bool InOpen); // Function ITM_Wardrobe_ItemSelector.ITM_Wardrobe_ItemSelector_C.SetOpen
	void PadRowWithBlanks(); // Function ITM_Wardrobe_ItemSelector.ITM_Wardrobe_ItemSelector_C.PadRowWithBlanks
	void ShowSlot(struct UITM_Wardrobe_ItemSlot_Base_C* InSlot); // Function ITM_Wardrobe_ItemSelector.ITM_Wardrobe_ItemSelector_C.ShowSlot
	void ClearItems(); // Function ITM_Wardrobe_ItemSelector.ITM_Wardrobe_ItemSelector_C.ClearItems
	void AddItem(struct UWidget* InChildWidget, bool inSelected, bool IsNewItem, struct UITM_Wardrobe_ItemSelector_Entry_C* OutEntry, struct UWidget* OutItemWidget); // Function ITM_Wardrobe_ItemSelector.ITM_Wardrobe_ItemSelector_C.AddItem
	void PreConstruct(bool IsDesignTime); // Function ITM_Wardrobe_ItemSelector.ITM_Wardrobe_ItemSelector_C.PreConstruct
	void Construct(); // Function ITM_Wardrobe_ItemSelector.ITM_Wardrobe_ItemSelector_C.Construct
	void OnAnimOpenStarted(); // Function ITM_Wardrobe_ItemSelector.ITM_Wardrobe_ItemSelector_C.OnAnimOpenStarted
	void OnAnimOpenFinished(); // Function ITM_Wardrobe_ItemSelector.ITM_Wardrobe_ItemSelector_C.OnAnimOpenFinished
	void OnOtherSelectorOpen(bool IsOpen); // Function ITM_Wardrobe_ItemSelector.ITM_Wardrobe_ItemSelector_C.OnOtherSelectorOpen
	void ExecuteUbergraph_ITM_Wardrobe_ItemSelector(int32_t EntryPoint); // Function ITM_Wardrobe_ItemSelector.ITM_Wardrobe_ItemSelector_C.ExecuteUbergraph_ITM_Wardrobe_ItemSelector
	void OnSelectorOpenChanged__DelegateSignature(bool IsOpen); // Function ITM_Wardrobe_ItemSelector.ITM_Wardrobe_ItemSelector_C.OnSelectorOpenChanged__DelegateSignature
	void OnItemClicked__DelegateSignature(int32_t Index, struct UWidget* Widget); // Function ITM_Wardrobe_ItemSelector.ITM_Wardrobe_ItemSelector_C.OnItemClicked__DelegateSignature
};

