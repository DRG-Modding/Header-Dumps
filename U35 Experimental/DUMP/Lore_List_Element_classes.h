// WidgetBlueprintGeneratedClass Lore_List_Element.Lore_List_Element_C
// Size: 0x329 (Inherited: 0x230)
struct ULore_List_Element_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* FadeOutNavigationIcon; // 0x238(0x08)
	UWidgetAnimation* IntroAnim; // 0x240(0x08)
	UButton* Button_Outer; // 0x248(0x08)
	UCategoryImage_C* CategoryImage; // 0x250(0x08)
	UImage* Image_Arrow; // 0x258(0x08)
	UImage* Image_ArrowDown; // 0x260(0x08)
	UImage* Image_ArrowUp; // 0x268(0x08)
	UImage* Image_DPad; // 0x270(0x08)
	UTextBlock* TextBlock_Header; // 0x278(0x08)
	UTextBlock* TextBlock_Subtext; // 0x280(0x08)
	UUI_AdvancedLabel_C* UI_AdvancedLabel; // 0x288(0x08)
	UUI_AdvancedLabel_C* UI_AdvancedLabel_C_2; // 0x290(0x08)
	UWidgetSwitcher* WidgetSwitcher_Navigation; // 0x298(0x08)
	FText Header; // 0x2a0(0x18)
	FText SubText; // 0x2b8(0x18)
	UTexture2D* BGimage; // 0x2d0(0x08)
	FLinearColor BackgroundColor; // 0x2d8(0x10)
	UTexture2D* FrontImage; // 0x2e8(0x08)
	FObjectiveMissionIcon MissionIcon; // 0x2f0(0x18)
	enum class E_MM_ButtonStyle IsEnabled; // 0x308(0x01)
	int32_t Index; // 0x30c(0x04)
	bool IsSelected; // 0x310(0x01)
	FMulticastInlineDelegate OnClicked; // 0x318(0x10)
	bool ShowArrow; // 0x328(0x01)

	void SetData(FText Header, FText SubText, UTexture2D* BackgroundImage, FLinearColor BackgroundColor, UTexture2D* FrontImage, int32_t Index, FObjectiveMissionIcon MissionIcon, bool ShowArrow, enum class E_MM_ButtonStyle IsEnabled);
	void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void SetSelected(bool IsSelected);
	void Construct();
	void UpdateBorder();
	void PlayIntroAnim();
	void InputSourceChanged(enum class EFSDInputSource InputSource);
	void HideNavIcon();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_Lore_List_Element(int32_t EntryPoint);
	void OnClicked__DelegateSignature(int32_t Index);
};

