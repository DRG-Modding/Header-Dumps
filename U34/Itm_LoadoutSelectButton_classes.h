// WidgetBlueprintGeneratedClass Itm_LoadoutSelectButton.ITM_LoadoutSelectButton_C
// Size: 0x2f0 (Inherited: 0x230)
struct UITM_LoadoutSelectButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* Hover; // 0x238(0x08)
	struct UBorder* Background; // 0x240(0x08)
	struct UButton* Button_1; // 0x248(0x08)
	struct UImage* Image_LoadoutIcon; // 0x250(0x08)
	struct UBorder* SelectionBorder; // 0x258(0x08)
	struct UTextBlock* TextBlock_ButtonText; // 0x260(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x268(0x10)
	bool IsSelected; // 0x278(0x01)
	char UnknownData_279[0x7]; // 0x279(0x07)
	struct FText ButtonText; // 0x280(0x18)
	struct FSlateColor IconSelectedColor; // 0x298(0x28)
	struct FSlateColor IconNotSelectedColor; // 0x2c0(0x28)
	struct UBasic_ToolTip_HeadlineAndText_C* HoverTooltipWidget; // 0x2e8(0x08)

	struct UWidget* GetToolTipWidget(); // Function Itm_LoadoutSelectButton.ITM_LoadoutSelectButton_C.GetToolTipWidget
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function Itm_LoadoutSelectButton.ITM_LoadoutSelectButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void SetSelected(bool inSelected); // Function Itm_LoadoutSelectButton.ITM_LoadoutSelectButton_C.SetSelected
	void PreConstruct(bool IsDesignTime); // Function Itm_LoadoutSelectButton.ITM_LoadoutSelectButton_C.PreConstruct
	void SetIcon(struct UTexture2D* Texture); // Function Itm_LoadoutSelectButton.ITM_LoadoutSelectButton_C.SetIcon
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function Itm_LoadoutSelectButton.ITM_LoadoutSelectButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function Itm_LoadoutSelectButton.ITM_LoadoutSelectButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	void ExecuteUbergraph_ITM_LoadoutSelectButton(int32_t EntryPoint); // Function Itm_LoadoutSelectButton.ITM_LoadoutSelectButton_C.ExecuteUbergraph_ITM_LoadoutSelectButton
	void OnClicked__DelegateSignature(struct UITM_LoadoutSelectButton_C* Button); // Function Itm_LoadoutSelectButton.ITM_LoadoutSelectButton_C.OnClicked__DelegateSignature
};

