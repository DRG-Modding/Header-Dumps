// WidgetBlueprintGeneratedClass ITM_Wardrobe_ItemSelector_Entry.ITM_Wardrobe_ItemSelector_Entry_C
// Size: 0x2c8 (Inherited: 0x230)
struct UITM_Wardrobe_ItemSelector_Entry_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* BlankImage; // 0x238(0x08)
	UBorder* Border_Inner; // 0x240(0x08)
	UBorder* Border_Selection; // 0x248(0x08)
	UOverlay* ChildOverlay; // 0x250(0x08)
	UWidgetSwitcher* ContentSwitcher; // 0x258(0x08)
	UUI_DLC_Indicator_C* DLC_Indicator; // 0x260(0x08)
	UButton* EntryButton; // 0x268(0x08)
	UITM_ItemUnlockedIcon_C* Notification_NewItem; // 0x270(0x08)
	int32_t Index; // 0x278(0x04)
	FMulticastInlineDelegate OnEntryHovered; // 0x280(0x10)
	FMulticastInlineDelegate OnEntryUnhovered; // 0x290(0x10)
	FMulticastInlineDelegate OnEntryClicked; // 0x2a0(0x10)
	UWidget* Widget; // 0x2b0(0x08)
	bool Hovered; // 0x2b8(0x01)
	enum class ENUM_MenuColors BorderColor; // 0x2b9(0x01)
	bool Selected; // 0x2ba(0x01)
	bool IsNewItem; // 0x2bb(0x01)
	UDLCBase* FromDLC; // 0x2c0(0x08)

	void SetFromDLC(UDLCBase* InDLC);
	void SetHovered(bool InHovered);
	void SetSelected(bool InSelected);
	void SetIsNewItem(bool IsNew);
	void UpdateBorder();
	void CreateChild(TSoftClassPtr<UObject> InChildClass, UWidget* OutChild);
	void SetChild(UWidget* InWidget);
	void BndEvt__EntryButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__EntryButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__EntryButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ITM_Wardrobe_ItemSelector_Entry(int32_t EntryPoint);
	void OnEntryClicked__DelegateSignature(int32_t Index, UWidget* Widget);
	void OnEntryUnhovered__DelegateSignature(int32_t Index, UWidget* Widget);
	void OnEntryHovered__DelegateSignature(int32_t Index, UWidget* Widget);
};

