// WidgetBlueprintGeneratedClass Discord_Popup_YesNoPrompt.Discord_Popup_YesNoPrompt_C
// Size: 0x2e8 (Inherited: 0x288)
struct UDiscord_Popup_YesNoPrompt_C : UYesNoPromptWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UBasic_Menu_MinimalWindow_C* BasicWindow_Minimal; // 0x290(0x08)
	struct UBlurBackground_C* BlurBackground; // 0x298(0x08)
	struct UBasic_ButtonScalable2_C* BTN_No; // 0x2a0(0x08)
	struct UBasic_ButtonScalable2_C* BTN_Yes; // 0x2a8(0x08)
	struct UTextBlock* DATA_Content; // 0x2b0(0x08)
	struct UTextBlock* DATA_Header; // 0x2b8(0x08)
	struct UTextBlock* DiscordMoreInfo; // 0x2c0(0x08)
	struct UTextBlock* TextBlock_2; // 0x2c8(0x08)
	struct UTextBlock* TextBlock_3; // 0x2d0(0x08)
	struct UTextBlock* TextBlock_4; // 0x2d8(0x08)
	struct UUI_HorizontalResourceBar_C* UI_HorizontalResourceBar; // 0x2e0(0x08)

	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function Discord_Popup_YesNoPrompt.Discord_Popup_YesNoPrompt_C.OnKeyUp
	void OnShow(struct FText Title, struct FText Message); // Function Discord_Popup_YesNoPrompt.Discord_Popup_YesNoPrompt_C.OnShow
	void BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function Discord_Popup_YesNoPrompt.Discord_Popup_YesNoPrompt_C.BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	void BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(); // Function Discord_Popup_YesNoPrompt.Discord_Popup_YesNoPrompt_C.BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	void PreConstruct(bool IsDesignTime); // Function Discord_Popup_YesNoPrompt.Discord_Popup_YesNoPrompt_C.PreConstruct
	void Yes(); // Function Discord_Popup_YesNoPrompt.Discord_Popup_YesNoPrompt_C.Yes
	void No(); // Function Discord_Popup_YesNoPrompt.Discord_Popup_YesNoPrompt_C.No
	void Clear Resources(); // Function Discord_Popup_YesNoPrompt.Discord_Popup_YesNoPrompt_C.Clear Resources
	void Add Resource(struct UResourceData* InResource, float InAmount); // Function Discord_Popup_YesNoPrompt.Discord_Popup_YesNoPrompt_C.Add Resource
	void SetResources(struct TArray<struct FCraftingCost> Resources); // Function Discord_Popup_YesNoPrompt.Discord_Popup_YesNoPrompt_C.SetResources
	void ExecuteUbergraph_Discord_Popup_YesNoPrompt(int32_t EntryPoint); // Function Discord_Popup_YesNoPrompt.Discord_Popup_YesNoPrompt_C.ExecuteUbergraph_Discord_Popup_YesNoPrompt
};

