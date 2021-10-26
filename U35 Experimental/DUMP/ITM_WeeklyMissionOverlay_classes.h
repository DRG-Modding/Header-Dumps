// WidgetBlueprintGeneratedClass ITM_WeeklyMissionOverlay.ITM_WeeklyMissionOverlay_C
// Size: 0x298 (Inherited: 0x230)
struct UITM_WeeklyMissionOverlay_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBorder* Border_Checkmark; // 0x238(0x08)
	UBorder* DeadlineTimer; // 0x240(0x08)
	UImage* I_Background; // 0x248(0x08)
	UImage* Image_Checkmark; // 0x250(0x08)
	UITM_TimeText_C* ITM_TimeText; // 0x258(0x08)
	UJobs_List_Element_BG_CutCorner_C* Jobs_List_Element_BG_CutCorner_2; // 0x260(0x08)
	UImage* outline; // 0x268(0x08)
	UImage* outline_2; // 0x270(0x08)
	UTextBlock* Text_Headline; // 0x278(0x08)
	UTextBlock* TextBlock_Timer; // 0x280(0x08)
	UCampaign* Campaign; // 0x288(0x08)
	UWeeklyTimerCampaignRequirement* Requirement; // 0x290(0x08)

	void PreConstruct(bool IsDesignTime);
	void SetData(UCampaign* Campaign, FText Headline, bool ShowTimer);
	void Update Time();
	void SetInvalid(UCampaign* Campaign);
	void ExecuteUbergraph_ITM_WeeklyMissionOverlay(int32_t EntryPoint);
};

