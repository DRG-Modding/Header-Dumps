// WidgetBlueprintGeneratedClass ITM_UnlockedCelebration.ITM_UnlockedCelebration_C
// Size: 0x298 (Inherited: 0x230)
struct UITM_UnlockedCelebration_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* AnimIntro; // 0x238(0x08)
	UITM_BigButton_C* ContinueButton; // 0x240(0x08)
	UTextBlock* ForgeItemName; // 0x248(0x08)
	UImage* Image_1; // 0x250(0x08)
	UImage* NoiseImage; // 0x258(0x08)
	UVerticalBox* RewardHolder; // 0x260(0x08)
	UUI_MasteryReward_C* UI_MasteryReward; // 0x268(0x08)
	UImage* UpperBarCorner; // 0x270(0x08)
	FMulticastInlineDelegate OnFinished; // 0x278(0x10)
	TArray<UUnlockReward*> Unlocks; // 0x288(0x10)

	FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
	void Construct();
	void BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void ClickContinue();
	void ShowRewards(FMasteryItem Rewards, AActor* Item);
	void ExecuteUbergraph_ITM_UnlockedCelebration(int32_t EntryPoint);
	void OnFinished__DelegateSignature(TArray<UUnlockReward*> Rewards);
};

