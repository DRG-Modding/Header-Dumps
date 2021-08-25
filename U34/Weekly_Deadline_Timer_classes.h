// WidgetBlueprintGeneratedClass Weekly_Deadline_Timer.Weekly_Deadline_Timer_C
// Size: 0x268 (Inherited: 0x230)
struct UWeekly_Deadline_Timer_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UImage* I_Background; // 0x238(0x08)
	struct UImage* I_Outline; // 0x240(0x08)
	struct UITM_TimeText_C* ITM_TimeText; // 0x248(0x08)
	struct UTextBlock* TextBlock_Headline; // 0x250(0x08)
	struct UCampaign* Campaign; // 0x258(0x08)
	struct UWeeklyTimerCampaignRequirement* Requirement; // 0x260(0x08)

	void PreConstruct(bool IsDesignTime); // Function Weekly_Deadline_Timer.Weekly_Deadline_Timer_C.PreConstruct
	void SetData(struct UCampaign* Campaign); // Function Weekly_Deadline_Timer.Weekly_Deadline_Timer_C.SetData
	void Update Time(); // Function Weekly_Deadline_Timer.Weekly_Deadline_Timer_C.Update Time
	void ExecuteUbergraph_Weekly_Deadline_Timer(int32_t EntryPoint); // Function Weekly_Deadline_Timer.Weekly_Deadline_Timer_C.ExecuteUbergraph_Weekly_Deadline_Timer
};

