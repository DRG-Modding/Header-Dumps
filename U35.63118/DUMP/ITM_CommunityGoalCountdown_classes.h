// WidgetBlueprintGeneratedClass ITM_CommunityGoalCountdown.ITM_CommunityGoalCountdown_C
// Size: 0x298 (Inherited: 0x250)
struct UITM_CommunityGoalCountdown_C : UFSDUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	UTextBlock* CountDownTitle; // 0x258(0x08)
	UTextBlock* DaysTextBlock; // 0x260(0x08)
	UTextBlock* HoursTextBlock; // 0x268(0x08)
	UTextBlock* MinutesTextBlock; // 0x270(0x08)
	FTimespan TSpan; // 0x278(0x08)
	FText Title; // 0x280(0x18)

	void PreConstruct(bool IsDesignTime);
	void Tick(FGeometry MyGeometry, float InDeltaTime);
	void SetTime(float Seconds);
	void ExecuteUbergraph_ITM_CommunityGoalCountdown(int32_t EntryPoint);
};

