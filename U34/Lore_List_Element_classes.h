// WidgetBlueprintGeneratedClass Lore_List_Element.Lore_List_Element_C
// Size: 0x329 (Inherited: 0x230)
struct ULore_List_Element_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* FadeOutNavigationIcon; // 0x238(0x08)
	struct UWidgetAnimation* IntroAnim; // 0x240(0x08)
	struct UButton* Button_Outer; // 0x248(0x08)
	struct UCategoryImage_C* CategoryImage; // 0x250(0x08)
	struct UImage* Image_Arrow; // 0x258(0x08)
	struct UImage* Image_ArrowDown; // 0x260(0x08)
	struct UImage* Image_ArrowUp; // 0x268(0x08)
	struct UImage* Image_DPad; // 0x270(0x08)
	struct UTextBlock* TextBlock_Header; // 0x278(0x08)
	struct UTextBlock* TextBlock_Subtext; // 0x280(0x08)
	struct UUI_AdvancedLabel_C* UI_AdvancedLabel; // 0x288(0x08)
	struct UUI_AdvancedLabel_C* UI_AdvancedLabel_C_2; // 0x290(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Navigation; // 0x298(0x08)
	struct FText Header; // 0x2a0(0x18)
	struct FText SubText; // 0x2b8(0x18)
	struct UTexture2D* BGimage; // 0x2d0(0x08)
	struct FLinearColor BackgroundColor; // 0x2d8(0x10)
	struct UTexture2D* FrontImage; // 0x2e8(0x08)
	struct FObjectiveMissionIcon MissionIcon; // 0x2f0(0x18)
	char IsEnabled; // 0x308(0x01)
	char UnknownData_309[0x3]; // 0x309(0x03)
	int32_t Index; // 0x30c(0x04)
	bool IsSelected; // 0x310(0x01)
	char UnknownData_311[0x7]; // 0x311(0x07)
	struct FMulticastInlineDelegate OnClicked; // 0x318(0x10)
	bool ShowArrow; // 0x328(0x01)

	void SetData(struct FText Header, struct FText SubText, struct UTexture2D* BackgroundImage, struct FLinearColor BackgroundColor, struct UTexture2D* FrontImage, int32_t Index, struct FObjectiveMissionIcon MissionIcon, bool ShowArrow, char IsEnabled); // Function Lore_List_Element.Lore_List_Element_C.SetData
	void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function Lore_List_Element.Lore_List_Element_C.BndEvt__Button_Outer_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function Lore_List_Element.Lore_List_Element_C.BndEvt__Button_Outer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function Lore_List_Element.Lore_List_Element_C.BndEvt__Button_Outer_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	void SetSelected(bool IsSelected); // Function Lore_List_Element.Lore_List_Element_C.SetSelected
	void Construct(); // Function Lore_List_Element.Lore_List_Element_C.Construct
	void UpdateBorder(); // Function Lore_List_Element.Lore_List_Element_C.UpdateBorder
	void PlayIntroAnim(); // Function Lore_List_Element.Lore_List_Element_C.PlayIntroAnim
	void InputSourceChanged(enum class EFSDInputSource InputSource); // Function Lore_List_Element.Lore_List_Element_C.InputSourceChanged
	void HideNavIcon(); // Function Lore_List_Element.Lore_List_Element_C.HideNavIcon
	void ExecuteUbergraph_Lore_List_Element(int32_t EntryPoint); // Function Lore_List_Element.Lore_List_Element_C.ExecuteUbergraph_Lore_List_Element
	void OnClicked__DelegateSignature(int32_t Index); // Function Lore_List_Element.Lore_List_Element_C.OnClicked__DelegateSignature
};

