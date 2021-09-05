// WidgetBlueprintGeneratedClass ITM_EscapeMenu_MissionModifier.ITM_EscapeMenu_MissionModifier_C
// Size: 0x260 (Inherited: 0x230)
struct UITM_EscapeMenu_MissionModifier_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UButton* Button_Warning; // 0x238(0x08)
	UTextBlock* DataWarningName; // 0x240(0x08)
	UImage* Image_Warning; // 0x248(0x08)
	FMulticastInlineDelegate OnClicked; // 0x250(0x10)

	void GetToolTipWidget(UWidget* Return Value);
	void PreConstruct(bool IsDesignTime);
	void SetWarning(UMissionWarning* Warning);
	void SetMutator(UMissionMutator* Mutator);
	void Hide();
	void BndEvt__Button_Warning_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void SetVisuals(FText InText, UTexture2D* Icon, enum class ENUM_MenuColors Color);
	void ExecuteUbergraph_ITM_EscapeMenu_MissionModifier(int32_t EntryPoint);
	void OnClicked__DelegateSignature();
};

