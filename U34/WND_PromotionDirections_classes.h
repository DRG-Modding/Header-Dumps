// WidgetBlueprintGeneratedClass WND_PromotionDirections.WND_PromotionDirections_C
// Size: 0x2c8 (Inherited: 0x270)
struct UWND_PromotionDirections_C : UWindowWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UWidgetAnimation* IntroOutro; // 0x278(0x08)
	struct UBasic_Window_CutCorner_C* Basic_Window_CutCorner; // 0x280(0x08)
	struct UBorder* Border_Glow; // 0x288(0x08)
	struct UBorder* Border_Outline; // 0x290(0x08)
	struct UImage* Image_BG; // 0x298(0x08)
	struct UImage* Image_Character; // 0x2a0(0x08)
	struct UITM_Special_ButtonCutCorner_C* ITM_Special_ButtonCutCorner; // 0x2a8(0x08)
	struct UImage* PromotionTerminal; // 0x2b0(0x08)
	struct URichTextSizable* RichTextSizable_117; // 0x2b8(0x08)
	struct UTextBlock* TextBlock_Headline; // 0x2c0(0x08)

	void OnShown(); // Function WND_PromotionDirections.WND_PromotionDirections_C.OnShown
	void PreConstruct(bool IsDesignTime); // Function WND_PromotionDirections.WND_PromotionDirections_C.PreConstruct
	void BndEvt__ITM_Special_ButtonCutCorner_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(); // Function WND_PromotionDirections.WND_PromotionDirections_C.BndEvt__ITM_Special_ButtonCutCorner_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	void SetCharacter(struct UPlayerCharacterID* Character); // Function WND_PromotionDirections.WND_PromotionDirections_C.SetCharacter
	void ExecuteUbergraph_WND_PromotionDirections(int32_t EntryPoint); // Function WND_PromotionDirections.WND_PromotionDirections_C.ExecuteUbergraph_WND_PromotionDirections
};

