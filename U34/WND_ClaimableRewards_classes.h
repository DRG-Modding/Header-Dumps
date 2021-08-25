// WidgetBlueprintGeneratedClass WND_ClaimableRewards.WND_ClaimableRewards_C
// Size: 0x308 (Inherited: 0x270)
struct UWND_ClaimableRewards_C : UWindowWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UWidgetAnimation* AnimBlurIn; // 0x278(0x08)
	struct UBasic_ButtonScalable2_C* ContinueButton; // 0x280(0x08)
	struct UUI_ClaimableRewards_View_C* RewardView; // 0x288(0x08)
	struct UAudioComponent* AudioSpeak; // 0x290(0x08)
	struct FClaimableRewardView Data; // 0x298(0x70)

	void GetData(struct FClaimableRewardView OutData); // Function WND_ClaimableRewards.WND_ClaimableRewards_C.GetData
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function WND_ClaimableRewards.WND_ClaimableRewards_C.OnKeyUp
	void OnShown(); // Function WND_ClaimableRewards.WND_ClaimableRewards_C.OnShown
	void BndEvt__RewardView_K2Node_ComponentBoundEvent_1_OnRewardsClaimed__DelegateSignature(); // Function WND_ClaimableRewards.WND_ClaimableRewards_C.BndEvt__RewardView_K2Node_ComponentBoundEvent_1_OnRewardsClaimed__DelegateSignature
	void DoClose(); // Function WND_ClaimableRewards.WND_ClaimableRewards_C.DoClose
	void BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function WND_ClaimableRewards.WND_ClaimableRewards_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	void PreConstruct(bool IsDesignTime); // Function WND_ClaimableRewards.WND_ClaimableRewards_C.PreConstruct
	void ExecuteUbergraph_WND_ClaimableRewards(int32_t EntryPoint); // Function WND_ClaimableRewards.WND_ClaimableRewards_C.ExecuteUbergraph_WND_ClaimableRewards
};

