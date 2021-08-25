// WidgetBlueprintGeneratedClass ITM_WeeklyMissionOverlay.ITM_WeeklyMissionOverlay_C
// Size: 0x298 (Inherited: 0x230)
struct UITM_WeeklyMissionOverlay_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBorder* Border_Checkmark; // 0x238(0x08)
	struct UBorder* DeadlineTimer; // 0x240(0x08)
	struct UImage* I_Background; // 0x248(0x08)
	struct UImage* Image_Checkmark; // 0x250(0x08)
	struct UITM_TimeText_C* ITM_TimeText; // 0x258(0x08)
	struct UJobs_List_Element_BG_CutCorner_C* Jobs_List_Element_BG_CutCorner_2; // 0x260(0x08)
	struct UImage* outline; // 0x268(0x08)
	struct UImage* outline_2; // 0x270(0x08)
	struct UTextBlock* Text_Headline; // 0x278(0x08)
	struct UTextBlock* TextBlock_Timer; // 0x280(0x08)
	struct UCampaign* Campaign; // 0x288(0x08)
	struct UWeeklyTimerCampaignRequirement* Requirement; // 0x290(0x08)

	void PreConstruct(bool IsDesignTime); // Function ITM_WeeklyMissionOverlay.ITM_WeeklyMissionOverlay_C.PreConstruct
	void SetData(struct UCampaign* Campaign, struct FText Headline, bool ShowTimer); // Function ITM_WeeklyMissionOverlay.ITM_WeeklyMissionOverlay_C.SetData
	void Update Time(); // Function ITM_WeeklyMissionOverlay.ITM_WeeklyMissionOverlay_C.Update Time
	void SetInvalid(struct UCampaign* Campaign); // Function ITM_WeeklyMissionOverlay.ITM_WeeklyMissionOverlay_C.SetInvalid
	void ExecuteUbergraph_ITM_WeeklyMissionOverlay(int32_t EntryPoint); // Function ITM_WeeklyMissionOverlay.ITM_WeeklyMissionOverlay_C.ExecuteUbergraph_ITM_WeeklyMissionOverlay
};

