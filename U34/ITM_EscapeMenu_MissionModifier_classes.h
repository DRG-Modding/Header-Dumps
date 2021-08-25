// WidgetBlueprintGeneratedClass ITM_EscapeMenu_MissionModifier.ITM_EscapeMenu_MissionModifier_C
// Size: 0x260 (Inherited: 0x230)
struct UITM_EscapeMenu_MissionModifier_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UButton* Button_Warning; // 0x238(0x08)
	struct UTextBlock* DataWarningName; // 0x240(0x08)
	struct UImage* Image_Warning; // 0x248(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x250(0x10)

	void GetToolTipWidget(struct UWidget* return value); // Function ITM_EscapeMenu_MissionModifier.ITM_EscapeMenu_MissionModifier_C.GetToolTipWidget
	void PreConstruct(bool IsDesignTime); // Function ITM_EscapeMenu_MissionModifier.ITM_EscapeMenu_MissionModifier_C.PreConstruct
	void SetWarning(struct UMissionWarning* Warning); // Function ITM_EscapeMenu_MissionModifier.ITM_EscapeMenu_MissionModifier_C.SetWarning
	void SetMutator(struct UMissionMutator* Mutator); // Function ITM_EscapeMenu_MissionModifier.ITM_EscapeMenu_MissionModifier_C.SetMutator
	void Hide(); // Function ITM_EscapeMenu_MissionModifier.ITM_EscapeMenu_MissionModifier_C.Hide
	void BndEvt__Button_Warning_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function ITM_EscapeMenu_MissionModifier.ITM_EscapeMenu_MissionModifier_C.BndEvt__Button_Warning_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void SetVisuals(struct FText InText, struct UTexture2D* Icon, char Color); // Function ITM_EscapeMenu_MissionModifier.ITM_EscapeMenu_MissionModifier_C.SetVisuals
	void ExecuteUbergraph_ITM_EscapeMenu_MissionModifier(int32_t EntryPoint); // Function ITM_EscapeMenu_MissionModifier.ITM_EscapeMenu_MissionModifier_C.ExecuteUbergraph_ITM_EscapeMenu_MissionModifier
	void OnClicked__DelegateSignature(); // Function ITM_EscapeMenu_MissionModifier.ITM_EscapeMenu_MissionModifier_C.OnClicked__DelegateSignature
};

