// WidgetBlueprintGeneratedClass Basic_ButtonScalable2.Basic_ButtonScalable2_C
// Size: 0x500 (Inherited: 0x268)
struct UBasic_ButtonScalable2_C : UFSDAdvancedLabel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* Anim_Btn_Click; // 0x270(0x08)
	struct UWidgetAnimation* Anim_Unhover; // 0x278(0x08)
	struct UWidgetAnimation* Anim_Hover; // 0x280(0x08)
	struct USizeBox* Bar_Left_Sizer; // 0x288(0x08)
	struct USizeBox* Bar_Right_Sizer; // 0x290(0x08)
	struct UBorder* BaseLeft; // 0x298(0x08)
	struct UBorder* BaseMid; // 0x2a0(0x08)
	struct UBorder* BaseRight; // 0x2a8(0x08)
	struct UButton* Button_1; // 0x2b0(0x08)
	struct UTextBlock* CountDownLabel; // 0x2b8(0x08)
	struct UImage* LeftIcon; // 0x2c0(0x08)
	struct UVerticalBox* Lines; // 0x2c8(0x08)
	struct UImage* RightIcon; // 0x2d0(0x08)
	struct USizeBox* Sizer; // 0x2d8(0x08)
	struct USpacer* Spacer_1; // 0x2e0(0x08)
	struct USpacer* Spacer_2; // 0x2e8(0x08)
	struct UHorizontalBox* CurrentLine; // 0x2f0(0x08)
	bool Thick Bars; // 0x2f8(0x01)
	char UnknownData_2F9[0x3]; // 0x2f9(0x03)
	float Width (minimum); // 0x2fc(0x04)
	float Height (minimum); // 0x300(0x04)
	int32_t Icon Size; // 0x304(0x04)
	int32_t Icon Size - Controller Override; // 0x308(0x04)
	struct FLinearColor Tint - PC Icon; // 0x30c(0x10)
	struct FLinearColor Tint - Controller Icon; // 0x31c(0x10)
	char UnknownData_32C[0x4]; // 0x32c(0x04)
	struct FSlateFontInfo Font; // 0x330(0x50)
	struct FMulticastInlineDelegate OnClicked; // 0x380(0x10)
	struct FSlateBrush LeftIconBrush; // 0x390(0x88)
	struct FMargin LeftIconPadding; // 0x418(0x10)
	struct FSlateBrush RightIconBrush; // 0x428(0x88)
	struct FMargin RightIconPadding; // 0x4b0(0x10)
	char BackgroundNormal; // 0x4c0(0x01)
	char BackgroundHover; // 0x4c1(0x01)
	char UnknownData_4C2[0x2]; // 0x4c2(0x02)
	struct FLinearColor Font Color; // 0x4c4(0x10)
	float Width2; // 0x4d4(0x04)
	float Width4; // 0x4d8(0x04)
	bool ToggledOn; // 0x4dc(0x01)
	char UnknownData_4DD[0x3]; // 0x4dd(0x03)
	struct FMulticastInlineDelegate OnHovered; // 0x4e0(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0x4f0(0x10)

	void HideCountDown(); // Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.HideCountDown
	void SetCountDown(int32_t SecondsRemaining, int32_t MinimumIntegralDigits); // Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.SetCountDown
	void SetBackgroundColor(char ColorSelector); // Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.SetBackgroundColor
	void SetIconBrush(struct UImage* Icon, struct FSlateBrush InBrush, struct FMargin InPadding); // Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.SetIconBrush
	void SetTints(struct FLinearColor PC  Icon Tint, struct FLinearColor Controller Icon Tint); // Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.SetTints
	void SetIconTint(struct FLinearColor PC  Icon Tint, struct FLinearColor Controller Icon Tint); // Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.SetIconTint
	void OnNewLine(int32_t Index); // Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.OnNewLine
	void OnAddIcon(struct FString Name, struct FActionIconMapping Icon); // Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.OnAddIcon
	void OnAddKeyName(struct FString Name); // Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.OnAddKeyName
	void PreConstruct(bool IsDesignTime); // Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.PreConstruct
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void OnAddString(struct FString Value); // Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.OnAddString
	void OnReset(); // Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.OnReset
	void Toggle(bool IsToggledOn); // Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.Toggle
	void SetToggled(); // Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.SetToggled
	void SetUntoggled(); // Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.SetUntoggled
	void Click(); // Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.Click
	void ExecuteUbergraph_Basic_ButtonScalable2(int32_t EntryPoint); // Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.ExecuteUbergraph_Basic_ButtonScalable2
	void OnUnhovered__DelegateSignature(); // Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.OnUnhovered__DelegateSignature
	void OnHovered__DelegateSignature(); // Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.OnHovered__DelegateSignature
	void OnClicked__DelegateSignature(); // Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.OnClicked__DelegateSignature
};

