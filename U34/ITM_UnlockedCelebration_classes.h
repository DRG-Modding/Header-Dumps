// WidgetBlueprintGeneratedClass ITM_UnlockedCelebration.ITM_UnlockedCelebration_C
// Size: 0x298 (Inherited: 0x230)
struct UITM_UnlockedCelebration_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* AnimIntro; // 0x238(0x08)
	struct UITM_BigButton_C* ContinueButton; // 0x240(0x08)
	struct UTextBlock* ForgeItemName; // 0x248(0x08)
	struct UImage* Image_1; // 0x250(0x08)
	struct UImage* NoiseImage; // 0x258(0x08)
	struct UVerticalBox* RewardHolder; // 0x260(0x08)
	struct UUI_MasteryReward_C* UI_MasteryReward; // 0x268(0x08)
	struct UImage* UpperBarCorner; // 0x270(0x08)
	struct FMulticastInlineDelegate OnFinished; // 0x278(0x10)
	struct TArray<struct UUnlockReward*> Unlocks; // 0x288(0x10)

	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function ITM_UnlockedCelebration.ITM_UnlockedCelebration_C.OnKeyUp
	void Construct(); // Function ITM_UnlockedCelebration.ITM_UnlockedCelebration_C.Construct
	void BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function ITM_UnlockedCelebration.ITM_UnlockedCelebration_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	void ClickContinue(); // Function ITM_UnlockedCelebration.ITM_UnlockedCelebration_C.ClickContinue
	void ShowRewards(struct FMasteryItem Rewards, struct AActor* Item); // Function ITM_UnlockedCelebration.ITM_UnlockedCelebration_C.ShowRewards
	void ExecuteUbergraph_ITM_UnlockedCelebration(int32_t EntryPoint); // Function ITM_UnlockedCelebration.ITM_UnlockedCelebration_C.ExecuteUbergraph_ITM_UnlockedCelebration
	void OnFinished__DelegateSignature(struct TArray<struct UUnlockReward*> Rewards); // Function ITM_UnlockedCelebration.ITM_UnlockedCelebration_C.OnFinished__DelegateSignature
};

