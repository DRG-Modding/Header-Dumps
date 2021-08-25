// WidgetBlueprintGeneratedClass ITM_BigButton.ITM_BigButton_C
// Size: 0x30c (Inherited: 0x230)
struct UITM_BigButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* HoverEnd; // 0x238(0x08)
	struct UWidgetAnimation* HoverStart; // 0x240(0x08)
	struct UWidgetAnimation* Hover; // 0x248(0x08)
	struct UWidgetAnimation* Idle; // 0x250(0x08)
	struct UImage* BGglow; // 0x258(0x08)
	struct UBorder* Border_130; // 0x260(0x08)
	struct UButton* Button_1; // 0x268(0x08)
	struct UImage* Image_87; // 0x270(0x08)
	struct UImage* Image_155; // 0x278(0x08)
	struct UImage* Image_156; // 0x280(0x08)
	struct UImage* Image_157; // 0x288(0x08)
	struct UImage* Image_158; // 0x290(0x08)
	struct UImage* Image_159; // 0x298(0x08)
	struct UImage* Image_160; // 0x2a0(0x08)
	struct UImage* Image_161; // 0x2a8(0x08)
	struct UImage* Image_162; // 0x2b0(0x08)
	struct UImage* Image_163; // 0x2b8(0x08)
	struct USizeBox* SizeBox_1; // 0x2c0(0x08)
	struct UTextBlock* TextBlock_93; // 0x2c8(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x2d0(0x10)
	struct FText Text; // 0x2e0(0x18)
	struct USoundBase* AudioClick; // 0x2f8(0x08)
	struct USoundBase* AudioHover; // 0x300(0x08)
	float ButtonHeight; // 0x308(0x04)

	void SetText(struct FText InText); // Function ITM_BigButton.ITM_BigButton_C.SetText
	void PreConstruct(bool IsDesignTime); // Function ITM_BigButton.ITM_BigButton_C.PreConstruct
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function ITM_BigButton.ITM_BigButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function ITM_BigButton.ITM_BigButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function ITM_BigButton.ITM_BigButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	void Click(); // Function ITM_BigButton.ITM_BigButton_C.Click
	void SetColor(struct FLinearColor Color); // Function ITM_BigButton.ITM_BigButton_C.SetColor
	void ExecuteUbergraph_ITM_BigButton(int32_t EntryPoint); // Function ITM_BigButton.ITM_BigButton_C.ExecuteUbergraph_ITM_BigButton
	void OnClicked__DelegateSignature(); // Function ITM_BigButton.ITM_BigButton_C.OnClicked__DelegateSignature
};

