// WidgetBlueprintGeneratedClass ITM_DeepDives_RejoinButton.ITM_DeepDives_RejoinButton_C
// Size: 0x2d8 (Inherited: 0x230)
struct UITM_DeepDives_RejoinButton_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* HoverEnd; // 0x238(0x08)
	UWidgetAnimation* HoverStart; // 0x240(0x08)
	UWidgetAnimation* Hover; // 0x248(0x08)
	UWidgetAnimation* Idle; // 0x250(0x08)
	UImage* BGglow; // 0x258(0x08)
	UBorder* Border_130; // 0x260(0x08)
	UButton* Button_1; // 0x268(0x08)
	UImage* Image_87; // 0x270(0x08)
	UImage* Image_155; // 0x278(0x08)
	UImage* Image_156; // 0x280(0x08)
	UImage* Image_157; // 0x288(0x08)
	UImage* Image_158; // 0x290(0x08)
	UImage* Image_159; // 0x298(0x08)
	UImage* Image_160; // 0x2a0(0x08)
	UImage* Image_161; // 0x2a8(0x08)
	UImage* Image_162; // 0x2b0(0x08)
	UImage* Image_163; // 0x2b8(0x08)
	UTextBlock* TextBlock_93; // 0x2c0(0x08)
	FMulticastInlineDelegate OnClicked; // 0x2c8(0x10)

	void PreConstruct(bool IsDesignTime);
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void Click();
	void ExecuteUbergraph_ITM_DeepDives_RejoinButton(int32_t EntryPoint);
	void OnClicked__DelegateSignature();
};

