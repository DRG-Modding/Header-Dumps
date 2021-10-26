// WidgetBlueprintGeneratedClass Itm_SeasonChallenge_Small.Itm_SeasonChallenge_Small_C
// Size: 0x360 (Inherited: 0x230)
struct UItm_SeasonChallenge_Small_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* ImageLoaded; // 0x238(0x08)
	UButton* Button_Outer; // 0x240(0x08)
	UImage* I_Background; // 0x248(0x08)
	UImage* I_ButtonStyle; // 0x250(0x08)
	UImage* I_ButtonStyle_2; // 0x258(0x08)
	UImage* I_ButtonStyle_3; // 0x260(0x08)
	UImage* Image_298; // 0x268(0x08)
	UImage* Image_Challenge; // 0x270(0x08)
	UImage* Image_Type; // 0x278(0x08)
	UProgressBar* ProgressBar_143; // 0x280(0x08)
	URetainerBox* RetainerBox_Masking; // 0x288(0x08)
	USizeBox* SizeBox_Outer; // 0x290(0x08)
	UTextBlock* Text_NumberOfWins; // 0x298(0x08)
	UTextBlock* TextBlock_ChallengeText; // 0x2a0(0x08)
	UVerticalBox* VerticalBox_Content; // 0x2a8(0x08)
	FChallengeInfo ChallengeInfo; // 0x2b0(0x98)
	int32_t challengeIndex; // 0x348(0x04)
	FMulticastInlineDelegate HoverChanged; // 0x350(0x10)

	void Refresh();
	void Construct();
	void OnImageLoaded();
	void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void SetHoverColor(FLinearColor InColorAndOpacity);
	void ExecuteUbergraph_Itm_SeasonChallenge_Small(int32_t EntryPoint);
	void HoverChanged__DelegateSignature(bool IsHovered, int32_t Index);
};

