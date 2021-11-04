// WidgetBlueprintGeneratedClass Itm_LoadoutSelectButton.ITM_LoadoutSelectButton_C
// Size: 0x2f0 (Inherited: 0x230)
struct UITM_LoadoutSelectButton_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* Hover; // 0x238(0x08)
	UBorder* Background; // 0x240(0x08)
	UButton* Button_1; // 0x248(0x08)
	UImage* Image_LoadoutIcon; // 0x250(0x08)
	UBorder* SelectionBorder; // 0x258(0x08)
	UTextBlock* TextBlock_ButtonText; // 0x260(0x08)
	FMulticastInlineDelegate OnClicked; // 0x268(0x10)
	bool IsSelected; // 0x278(0x01)
	FText ButtonText; // 0x280(0x18)
	FSlateColor IconSelectedColor; // 0x298(0x28)
	FSlateColor IconNotSelectedColor; // 0x2c0(0x28)
	UBasic_ToolTip_HeadlineAndText_C* HoverTooltipWidget; // 0x2e8(0x08)

	UWidget* GetToolTipWidget();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void SetSelected(bool InSelected);
	void PreConstruct(bool IsDesignTime);
	void SetIcon(UTexture2D* Texture);
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_ITM_LoadoutSelectButton(int32_t EntryPoint);
	void OnClicked__DelegateSignature(UITM_LoadoutSelectButton_C* Button);
};

