// WidgetBlueprintGeneratedClass ITM_Wardrobe_ItemSelector_Entry.ITM_Wardrobe_ItemSelector_Entry_C
// Size: 0x2b4 (Inherited: 0x230)
struct UITM_Wardrobe_ItemSelector_Entry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UImage* BlankImage; // 0x238(0x08)
	struct UBorder* Border_Inner; // 0x240(0x08)
	struct UBorder* Border_Selection; // 0x248(0x08)
	struct UOverlay* ChildOverlay; // 0x250(0x08)
	struct UWidgetSwitcher* ContentSwitcher; // 0x258(0x08)
	struct UButton* EntryButton; // 0x260(0x08)
	struct UITM_ItemUnlockedIcon_C* Notification_NewItem; // 0x268(0x08)
	int32_t Index; // 0x270(0x04)
	char UnknownData_274[0x4]; // 0x274(0x04)
	struct FMulticastInlineDelegate OnEntryHovered; // 0x278(0x10)
	struct FMulticastInlineDelegate OnEntryUnhovered; // 0x288(0x10)
	struct FMulticastInlineDelegate OnEntryClicked; // 0x298(0x10)
	struct UWidget* Widget; // 0x2a8(0x08)
	bool Hovered; // 0x2b0(0x01)
	char BorderColor; // 0x2b1(0x01)
	bool Selected; // 0x2b2(0x01)
	bool IsNewItem; // 0x2b3(0x01)

	void SetHovered(bool InHovered); // Function ITM_Wardrobe_ItemSelector_Entry.ITM_Wardrobe_ItemSelector_Entry_C.SetHovered
	void SetSelected(bool inSelected); // Function ITM_Wardrobe_ItemSelector_Entry.ITM_Wardrobe_ItemSelector_Entry_C.SetSelected
	void SetIsNewItem(bool IsNew); // Function ITM_Wardrobe_ItemSelector_Entry.ITM_Wardrobe_ItemSelector_Entry_C.SetIsNewItem
	void UpdateBorder(); // Function ITM_Wardrobe_ItemSelector_Entry.ITM_Wardrobe_ItemSelector_Entry_C.UpdateBorder
	void CreateChild(SoftClassProperty InChildClass, struct UWidget* OutChild); // Function ITM_Wardrobe_ItemSelector_Entry.ITM_Wardrobe_ItemSelector_Entry_C.CreateChild
	void SetChild(struct UWidget* InWidget); // Function ITM_Wardrobe_ItemSelector_Entry.ITM_Wardrobe_ItemSelector_Entry_C.SetChild
	void BndEvt__EntryButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function ITM_Wardrobe_ItemSelector_Entry.ITM_Wardrobe_ItemSelector_Entry_C.BndEvt__EntryButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void BndEvt__EntryButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function ITM_Wardrobe_ItemSelector_Entry.ITM_Wardrobe_ItemSelector_Entry_C.BndEvt__EntryButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__EntryButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function ITM_Wardrobe_ItemSelector_Entry.ITM_Wardrobe_ItemSelector_Entry_C.BndEvt__EntryButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	void PreConstruct(bool IsDesignTime); // Function ITM_Wardrobe_ItemSelector_Entry.ITM_Wardrobe_ItemSelector_Entry_C.PreConstruct
	void ExecuteUbergraph_ITM_Wardrobe_ItemSelector_Entry(int32_t EntryPoint); // Function ITM_Wardrobe_ItemSelector_Entry.ITM_Wardrobe_ItemSelector_Entry_C.ExecuteUbergraph_ITM_Wardrobe_ItemSelector_Entry
	void OnEntryClicked__DelegateSignature(int32_t Index, struct UWidget* Widget); // Function ITM_Wardrobe_ItemSelector_Entry.ITM_Wardrobe_ItemSelector_Entry_C.OnEntryClicked__DelegateSignature
	void OnEntryUnhovered__DelegateSignature(int32_t Index, struct UWidget* Widget); // Function ITM_Wardrobe_ItemSelector_Entry.ITM_Wardrobe_ItemSelector_Entry_C.OnEntryUnhovered__DelegateSignature
	void OnEntryHovered__DelegateSignature(int32_t Index, struct UWidget* Widget); // Function ITM_Wardrobe_ItemSelector_Entry.ITM_Wardrobe_ItemSelector_Entry_C.OnEntryHovered__DelegateSignature
};

