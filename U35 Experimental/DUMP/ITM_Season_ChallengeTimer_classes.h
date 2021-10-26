// WidgetBlueprintGeneratedClass ITM_Season_ChallengeTimer.ITM_Season_ChallengeTimer_C
// Size: 0x290 (Inherited: 0x230)
struct UITM_Season_ChallengeTimer_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* RotateHourGlass; // 0x238(0x08)
	UWidgetAnimation* OnHover; // 0x240(0x08)
	UButton* Button_Outer; // 0x248(0x08)
	UImage* I_Background; // 0x250(0x08)
	UImage* I_Outline; // 0x258(0x08)
	UImage* Image_Timeglass; // 0x260(0x08)
	UITM_TimeText_C* ITM_TimeText; // 0x268(0x08)
	UOverlay* Overlay_Outer; // 0x270(0x08)
	UTextBlock* TextBlock_ChallengeText; // 0x278(0x08)
	FMulticastInlineDelegate ShouldGetNewChallenge; // 0x280(0x10)

	void Construct();
	void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void UpdateTime();
	void ExecuteUbergraph_ITM_Season_ChallengeTimer(int32_t EntryPoint);
	void ShouldGetNewChallenge__DelegateSignature();
};

