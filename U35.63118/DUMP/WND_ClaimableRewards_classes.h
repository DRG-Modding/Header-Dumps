// WidgetBlueprintGeneratedClass WND_ClaimableRewards.WND_ClaimableRewards_C
// Size: 0x308 (Inherited: 0x270)
struct UWND_ClaimableRewards_C : UWindowWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	UWidgetAnimation* AnimBlurIn; // 0x278(0x08)
	UBasic_ButtonScalable2_C* ContinueButton; // 0x280(0x08)
	UUI_ClaimableRewards_View_C* RewardView; // 0x288(0x08)
	UAudioComponent* AudioSpeak; // 0x290(0x08)
	FClaimableRewardView Data; // 0x298(0x70)

	void GetData(FClaimableRewardView OutData);
	FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
	void OnShown();
	void BndEvt__RewardView_K2Node_ComponentBoundEvent_1_OnRewardsClaimed__DelegateSignature();
	void DoClose();
	void BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WND_ClaimableRewards(int32_t EntryPoint);
};

