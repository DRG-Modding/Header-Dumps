// WidgetBlueprintGeneratedClass WND_PromotionDirections.WND_PromotionDirections_C
// Size: 0x2c8 (Inherited: 0x270)
struct UWND_PromotionDirections_C : UWindowWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	UWidgetAnimation* IntroOutro; // 0x278(0x08)
	UBasic_Window_CutCorner_C* Basic_Window_CutCorner; // 0x280(0x08)
	UBorder* Border_Glow; // 0x288(0x08)
	UBorder* Border_Outline; // 0x290(0x08)
	UImage* Image_BG; // 0x298(0x08)
	UImage* Image_Character; // 0x2a0(0x08)
	UITM_Special_ButtonCutCorner_C* ITM_Special_ButtonCutCorner; // 0x2a8(0x08)
	UImage* PromotionTerminal; // 0x2b0(0x08)
	URichTextSizable* RichTextSizable_117; // 0x2b8(0x08)
	UTextBlock* TextBlock_Headline; // 0x2c0(0x08)

	void OnShown();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__ITM_Special_ButtonCutCorner_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
	void SetCharacter(UPlayerCharacterID* Character);
	void ExecuteUbergraph_WND_PromotionDirections(int32_t EntryPoint);
};

