// WidgetBlueprintGeneratedClass Itm_HeaderCategory.Itm_HeaderCategory_C
// Size: 0x2a8 (Inherited: 0x230)
struct UItm_HeaderCategory_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UButton* Button_Main; // 0x238(0x08)
	UTextBlock* ButtonText; // 0x240(0x08)
	UImage* Filled_Left; // 0x248(0x08)
	UImage* Filled_Middle; // 0x250(0x08)
	UImage* Filled_Right; // 0x258(0x08)
	UImage* Outline_Left; // 0x260(0x08)
	UImage* Outline_Middle; // 0x268(0x08)
	UImage* Outline_Right; // 0x270(0x08)
	FText Text; // 0x278(0x18)
	bool IsSelected; // 0x290(0x01)
	bool UseFlatLeftside; // 0x291(0x01)
	FMulticastInlineDelegate OnClicked; // 0x298(0x10)

	void PreConstruct(bool IsDesignTime);
	void SetSelected(bool IsSelected);
	void SetColor(FSlateColor Filled, FSlateColor outline, FSlateColor Text);
	void BndEvt__Button_Main_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Main_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Main_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void SetText(FText Text);
	void ExecuteUbergraph_Itm_HeaderCategory(int32_t EntryPoint);
	void OnClicked__DelegateSignature();
};

