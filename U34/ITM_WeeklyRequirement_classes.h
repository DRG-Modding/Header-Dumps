// WidgetBlueprintGeneratedClass ITM_WeeklyRequirement.ITM_WeeklyRequirement_C
// Size: 0x278 (Inherited: 0x230)
struct UITM_WeeklyRequirement_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UImage* BG_M_Back; // 0x238(0x08)
	struct UImage* BG_M_Outline; // 0x240(0x08)
	struct UImage* BG_R_Back; // 0x248(0x08)
	struct UImage* BG_R_Outline; // 0x250(0x08)
	struct UFSDLabelWidget* TXT_Countdown; // 0x258(0x08)
	struct UFSDLabelWidget* TXT_Header; // 0x260(0x08)
	struct UWeeklyTimerCampaignRequirement* Requirement; // 0x268(0x08)
	struct UCampaign* Campaign; // 0x270(0x08)

	struct FText DoubleDigit(int32_t Value); // Function ITM_WeeklyRequirement.ITM_WeeklyRequirement_C.DoubleDigit
	void GetTimeText(struct FText Message:, struct FTimespan Timespan, struct FText Result); // Function ITM_WeeklyRequirement.ITM_WeeklyRequirement_C.GetTimeText
	void PreConstruct(bool IsDesignTime); // Function ITM_WeeklyRequirement.ITM_WeeklyRequirement_C.PreConstruct
	void Construct(); // Function ITM_WeeklyRequirement.ITM_WeeklyRequirement_C.Construct
	void Update Time(); // Function ITM_WeeklyRequirement.ITM_WeeklyRequirement_C.Update Time
	void ExecuteUbergraph_ITM_WeeklyRequirement(int32_t EntryPoint); // Function ITM_WeeklyRequirement.ITM_WeeklyRequirement_C.ExecuteUbergraph_ITM_WeeklyRequirement
};

