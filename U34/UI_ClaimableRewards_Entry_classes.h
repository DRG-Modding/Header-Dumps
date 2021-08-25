// WidgetBlueprintGeneratedClass UI_ClaimableRewards_Entry.UI_ClaimableRewards_Entry_C
// Size: 0x300 (Inherited: 0x298)
struct UUI_ClaimableRewards_Entry_C : UClaimableRewardEntryWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	struct UWidgetAnimation* AnimClaim; // 0x2a0(0x08)
	struct UWidgetAnimation* AnimPing; // 0x2a8(0x08)
	struct UWidgetAnimation* AnimMoveIn; // 0x2b0(0x08)
	struct UBorder* BorderHeader; // 0x2b8(0x08)
	struct USizeBox* BoxSizer; // 0x2c0(0x08)
	struct UITM_BigButton_C* BTN_Claim; // 0x2c8(0x08)
	struct UOverlay* ClaimOverlay; // 0x2d0(0x08)
	struct UImage* HeaderEndImage; // 0x2d8(0x08)
	struct UImage* RewardImage; // 0x2e0(0x08)
	struct URichTextBlock* TextBlock; // 0x2e8(0x08)
	struct UTextBlock* TextHeader; // 0x2f0(0x08)
	struct UBorder* WindowBorder; // 0x2f8(0x08)

	void SequenceEvent__ENTRYPOINTUI_ClaimableRewards_Entry_1(); // Function UI_ClaimableRewards_Entry.UI_ClaimableRewards_Entry_C.SequenceEvent__ENTRYPOINTUI_ClaimableRewards_Entry_1
	void Refresh(); // Function UI_ClaimableRewards_Entry.UI_ClaimableRewards_Entry_C.Refresh
	void PlayRevealAudio(); // Function UI_ClaimableRewards_Entry.UI_ClaimableRewards_Entry_C.PlayRevealAudio
	void PreConstruct(bool IsDesignTime); // Function UI_ClaimableRewards_Entry.UI_ClaimableRewards_Entry_C.PreConstruct
	void Construct(); // Function UI_ClaimableRewards_Entry.UI_ClaimableRewards_Entry_C.Construct
	void MoveIn(float StartDelay); // Function UI_ClaimableRewards_Entry.UI_ClaimableRewards_Entry_C.MoveIn
	void OnClaimAnimFinished(); // Function UI_ClaimableRewards_Entry.UI_ClaimableRewards_Entry_C.OnClaimAnimFinished
	void BndEvt__ITM_BigButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(); // Function UI_ClaimableRewards_Entry.UI_ClaimableRewards_Entry_C.BndEvt__ITM_BigButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	void ExecuteUbergraph_UI_ClaimableRewards_Entry(int32_t EntryPoint); // Function UI_ClaimableRewards_Entry.UI_ClaimableRewards_Entry_C.ExecuteUbergraph_UI_ClaimableRewards_Entry
};

