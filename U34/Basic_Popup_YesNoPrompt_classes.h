// WidgetBlueprintGeneratedClass Basic_Popup_YesNoPrompt.Basic_Popup_YesNoPrompt_C
// Size: 0x2c8 (Inherited: 0x288)
struct UBasic_Popup_YesNoPrompt_C : UYesNoPromptWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UBasic_Menu_MinimalWindow_C* BasicWindow_Minimal; // 0x290(0x08)
	struct UBasic_ButtonScalable2_C* BTN_No; // 0x298(0x08)
	struct UBasic_ButtonScalable2_C* BTN_Yes; // 0x2a0(0x08)
	struct UTextBlock* DATA_Content; // 0x2a8(0x08)
	struct UTextBlock* DATA_Header; // 0x2b0(0x08)
	struct UITM_MenuBackground_C* ITM_MenuBackground; // 0x2b8(0x08)
	struct UUI_HorizontalResourceBar_C* UI_HorizontalResourceBar; // 0x2c0(0x08)

	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function Basic_Popup_YesNoPrompt.Basic_Popup_YesNoPrompt_C.OnKeyUp
	void OnShow(struct FText Title, struct FText Message); // Function Basic_Popup_YesNoPrompt.Basic_Popup_YesNoPrompt_C.OnShow
	void BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function Basic_Popup_YesNoPrompt.Basic_Popup_YesNoPrompt_C.BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	void BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(); // Function Basic_Popup_YesNoPrompt.Basic_Popup_YesNoPrompt_C.BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	void PreConstruct(bool IsDesignTime); // Function Basic_Popup_YesNoPrompt.Basic_Popup_YesNoPrompt_C.PreConstruct
	void Yes(); // Function Basic_Popup_YesNoPrompt.Basic_Popup_YesNoPrompt_C.Yes
	void No(); // Function Basic_Popup_YesNoPrompt.Basic_Popup_YesNoPrompt_C.No
	void Clear Resources(); // Function Basic_Popup_YesNoPrompt.Basic_Popup_YesNoPrompt_C.Clear Resources
	void Add Resource(struct UResourceData* InResource, float InAmount); // Function Basic_Popup_YesNoPrompt.Basic_Popup_YesNoPrompt_C.Add Resource
	void SetResources(struct TArray<struct FCraftingCost> Resources); // Function Basic_Popup_YesNoPrompt.Basic_Popup_YesNoPrompt_C.SetResources
	void SetMappedResources(struct TMap<struct UResourceData*, int32_t> Resources); // Function Basic_Popup_YesNoPrompt.Basic_Popup_YesNoPrompt_C.SetMappedResources
	void ExecuteUbergraph_Basic_Popup_YesNoPrompt(int32_t EntryPoint); // Function Basic_Popup_YesNoPrompt.Basic_Popup_YesNoPrompt_C.ExecuteUbergraph_Basic_Popup_YesNoPrompt
};

