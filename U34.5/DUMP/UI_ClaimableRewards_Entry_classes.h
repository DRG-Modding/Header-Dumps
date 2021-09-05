// WidgetBlueprintGeneratedClass UI_ClaimableRewards_Entry.UI_ClaimableRewards_Entry_C
// Size: 0x300 (Inherited: 0x298)
struct UUI_ClaimableRewards_Entry_C : UClaimableRewardEntryWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	UWidgetAnimation* AnimClaim; // 0x2a0(0x08)
	UWidgetAnimation* AnimPing; // 0x2a8(0x08)
	UWidgetAnimation* AnimMoveIn; // 0x2b0(0x08)
	UBorder* BorderHeader; // 0x2b8(0x08)
	USizeBox* BoxSizer; // 0x2c0(0x08)
	UITM_BigButton_C* BTN_Claim; // 0x2c8(0x08)
	UOverlay* ClaimOverlay; // 0x2d0(0x08)
	UImage* HeaderEndImage; // 0x2d8(0x08)
	UImage* RewardImage; // 0x2e0(0x08)
	URichTextBlock* TextBlock; // 0x2e8(0x08)
	UTextBlock* TextHeader; // 0x2f0(0x08)
	UBorder* WindowBorder; // 0x2f8(0x08)

	void SequenceEvent__ENTRYPOINTUI_ClaimableRewards_Entry_1();
	void Refresh();
	void PlayRevealAudio();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void MoveIn(float StartDelay);
	void OnClaimAnimFinished();
	void BndEvt__ITM_BigButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void ExecuteUbergraph_UI_ClaimableRewards_Entry(int32_t EntryPoint);
};

