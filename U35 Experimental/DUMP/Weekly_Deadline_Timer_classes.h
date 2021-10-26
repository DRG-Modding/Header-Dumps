// WidgetBlueprintGeneratedClass Weekly_Deadline_Timer.Weekly_Deadline_Timer_C
// Size: 0x268 (Inherited: 0x230)
struct UWeekly_Deadline_Timer_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* I_Background; // 0x238(0x08)
	UImage* I_Outline; // 0x240(0x08)
	UITM_TimeText_C* ITM_TimeText; // 0x248(0x08)
	UTextBlock* TextBlock_Headline; // 0x250(0x08)
	UCampaign* Campaign; // 0x258(0x08)
	UWeeklyTimerCampaignRequirement* Requirement; // 0x260(0x08)

	void PreConstruct(bool IsDesignTime);
	void SetData(UCampaign* Campaign);
	void Update Time();
	void ExecuteUbergraph_Weekly_Deadline_Timer(int32_t EntryPoint);
};

