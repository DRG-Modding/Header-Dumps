// WidgetBlueprintGeneratedClass Basic_RadioButton.Basic_RadioButton_C
// Size: 0x2b9 (Inherited: 0x230)
struct UBasic_RadioButton_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* TickShow; // 0x238(0x08)
	UWidgetAnimation* Click; // 0x240(0x08)
	UImage* BorderInner; // 0x248(0x08)
	UImage* BorderOuter; // 0x250(0x08)
	UButton* Checkbox_Button; // 0x258(0x08)
	UHorizontalBox* Horizontal; // 0x260(0x08)
	UTextBlock* RadioText; // 0x268(0x08)
	USizeBox* SizeBox_2; // 0x270(0x08)
	UImage* Tick; // 0x278(0x08)
	FMulticastInlineDelegate OnCheckStateChanged; // 0x280(0x10)
	float Size; // 0x290(0x04)
	bool IsChecked; // 0x294(0x01)
	bool CanUncheck; // 0x295(0x01)
	FText Text; // 0x298(0x18)
	bool UpperCase; // 0x2b0(0x01)
	int32_t Index; // 0x2b4(0x04)
	enum class ENUM_MenuColors TextColor; // 0x2b8(0x01)

	void GetText(FText Text);
	void SetTextColor(enum class ENUM_MenuColors Color);
	void SetText(FText InText, bool InUpperCase);
	void SetIsChecked(bool InIsChecked);
	bool GetIsChecked();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_Basic_RadioButton(int32_t EntryPoint);
	void OnCheckStateChanged__DelegateSignature(bool IsChecked);
};

