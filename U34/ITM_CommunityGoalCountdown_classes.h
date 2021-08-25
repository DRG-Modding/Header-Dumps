// WidgetBlueprintGeneratedClass ITM_CommunityGoalCountdown.ITM_CommunityGoalCountdown_C
// Size: 0x298 (Inherited: 0x250)
struct UITM_CommunityGoalCountdown_C : UFSDUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UTextBlock* CountDownTitle; // 0x258(0x08)
	struct UTextBlock* DaysTextBlock; // 0x260(0x08)
	struct UTextBlock* HoursTextBlock; // 0x268(0x08)
	struct UTextBlock* MinutesTextBlock; // 0x270(0x08)
	struct FTimespan TSpan; // 0x278(0x08)
	struct FText Title; // 0x280(0x18)

	void PreConstruct(bool IsDesignTime); // Function ITM_CommunityGoalCountdown.ITM_CommunityGoalCountdown_C.PreConstruct
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function ITM_CommunityGoalCountdown.ITM_CommunityGoalCountdown_C.Tick
	void SetTime(float Seconds); // Function ITM_CommunityGoalCountdown.ITM_CommunityGoalCountdown_C.SetTime
	void ExecuteUbergraph_ITM_CommunityGoalCountdown(int32_t EntryPoint); // Function ITM_CommunityGoalCountdown.ITM_CommunityGoalCountdown_C.ExecuteUbergraph_ITM_CommunityGoalCountdown
};

