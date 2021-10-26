// WidgetBlueprintGeneratedClass Basic_ButtonScalable2.Basic_ButtonScalable2_C
// Size: 0x500 (Inherited: 0x268)
struct UBasic_ButtonScalable2_C : UFSDAdvancedLabel {
	FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	UWidgetAnimation* Anim_Btn_Click; // 0x270(0x08)
	UWidgetAnimation* Anim_Unhover; // 0x278(0x08)
	UWidgetAnimation* Anim_Hover; // 0x280(0x08)
	USizeBox* Bar_Left_Sizer; // 0x288(0x08)
	USizeBox* Bar_Right_Sizer; // 0x290(0x08)
	UBorder* BaseLeft; // 0x298(0x08)
	UBorder* BaseMid; // 0x2a0(0x08)
	UBorder* BaseRight; // 0x2a8(0x08)
	UButton* Button_1; // 0x2b0(0x08)
	UTextBlock* CountDownLabel; // 0x2b8(0x08)
	UImage* LeftIcon; // 0x2c0(0x08)
	UVerticalBox* Lines; // 0x2c8(0x08)
	UImage* RightIcon; // 0x2d0(0x08)
	USizeBox* Sizer; // 0x2d8(0x08)
	USpacer* Spacer_1; // 0x2e0(0x08)
	USpacer* Spacer_2; // 0x2e8(0x08)
	UHorizontalBox* CurrentLine; // 0x2f0(0x08)
	bool Thick Bars; // 0x2f8(0x01)
	float Width (minimum); // 0x2fc(0x04)
	float Height (minimum); // 0x300(0x04)
	int32_t Icon Size; // 0x304(0x04)
	int32_t Icon Size - Controller Override; // 0x308(0x04)
	FLinearColor Tint - PC Icon; // 0x30c(0x10)
	FLinearColor Tint - Controller Icon; // 0x31c(0x10)
	FSlateFontInfo Font; // 0x330(0x50)
	FMulticastInlineDelegate OnClicked; // 0x380(0x10)
	FSlateBrush LeftIconBrush; // 0x390(0x88)
	FMargin LeftIconPadding; // 0x418(0x10)
	FSlateBrush RightIconBrush; // 0x428(0x88)
	FMargin RightIconPadding; // 0x4b0(0x10)
	enum class ENUM_MenuColors BackgroundNormal; // 0x4c0(0x01)
	enum class ENUM_MenuColors BackgroundHover; // 0x4c1(0x01)
	FLinearColor Font Color; // 0x4c4(0x10)
	float Width2; // 0x4d4(0x04)
	float Width4; // 0x4d8(0x04)
	bool ToggledOn; // 0x4dc(0x01)
	FMulticastInlineDelegate OnHovered; // 0x4e0(0x10)
	FMulticastInlineDelegate OnUnhovered; // 0x4f0(0x10)

	void HideCountDown();
	void SetCountDown(int32_t SecondsRemaining, int32_t MinimumIntegralDigits);
	void SetBackgroundColor(enum class ENUM_MenuColors ColorSelector);
	void SetIconBrush(UImage* Icon, FSlateBrush InBrush, FMargin InPadding);
	void SetTints(FLinearColor PC  Icon Tint, FLinearColor Controller Icon Tint);
	void SetIconTint(FLinearColor PC  Icon Tint, FLinearColor Controller Icon Tint);
	void OnNewLine(int32_t Index);
	void OnAddIcon(FString Name, FActionIconMapping Icon);
	void OnAddKeyName(FString Name);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void OnAddString(FString Value);
	void OnReset();
	void Toggle(bool IsToggledOn);
	void SetToggled();
	void SetUntoggled();
	void Click();
	void ExecuteUbergraph_Basic_ButtonScalable2(int32_t EntryPoint);
	void OnUnhovered__DelegateSignature();
	void OnHovered__DelegateSignature();
	void OnClicked__DelegateSignature();
};

