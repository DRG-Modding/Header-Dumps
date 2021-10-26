// WidgetBlueprintGeneratedClass Basic_CheckBox.Basic_CheckBox_C
// Size: 0x2bd (Inherited: 0x230)
struct UBasic_CheckBox_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* TickShow; // 0x238(0x08)
	UWidgetAnimation* Click; // 0x240(0x08)
	UImage* Checkbox_Border; // 0x248(0x08)
	UButton* Checkbox_Button; // 0x250(0x08)
	UImage* CheckBox_Tick; // 0x258(0x08)
	UImage* Checkbox_Undetermined; // 0x260(0x08)
	UTextBlock* CheckBoxText; // 0x268(0x08)
	UHorizontalBox* Horizontal; // 0x270(0x08)
	USizeBox* SizeBox_2; // 0x278(0x08)
	UWidgetSwitcher* StateSwitcher; // 0x280(0x08)
	FMulticastInlineDelegate OnCheckStateChanged; // 0x288(0x10)
	float Size; // 0x298(0x04)
	bool IsChecked; // 0x29c(0x01)
	FText Text; // 0x2a0(0x18)
	bool UpperCase; // 0x2b8(0x01)
	enum class ENUM_MenuColors TextColor; // 0x2b9(0x01)
	enum class ECheckBoxState State; // 0x2ba(0x01)
	enum class ENUM_MenuColors FrameColor; // 0x2bb(0x01)
	enum class ENUM_MenuColors HoveredColor; // 0x2bc(0x01)

	void SetHovered(bool InHovered);
	void SetSize(float InSize);
	void GetState(enum class ECheckBoxState State);
	void SetState(enum class ECheckBoxState InState);
	void GetUpperCased(bool UpperCase);
	void SetText(FText InText, bool InUpperCase);
	void SetIsChecked(bool InIsChecked);
	bool GetIsChecked();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void ClickButton();
	void OnClicked(bool InChecked);
	void ExecuteUbergraph_Basic_CheckBox(int32_t EntryPoint);
	void OnCheckStateChanged__DelegateSignature(bool IsChecked);
};

