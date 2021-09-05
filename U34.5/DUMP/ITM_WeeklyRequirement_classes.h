// WidgetBlueprintGeneratedClass ITM_WeeklyRequirement.ITM_WeeklyRequirement_C
// Size: 0x278 (Inherited: 0x230)
struct UITM_WeeklyRequirement_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* BG_M_Back; // 0x238(0x08)
	UImage* BG_M_Outline; // 0x240(0x08)
	UImage* BG_R_Back; // 0x248(0x08)
	UImage* BG_R_Outline; // 0x250(0x08)
	UFSDLabelWidget* TXT_Countdown; // 0x258(0x08)
	UFSDLabelWidget* TXT_Header; // 0x260(0x08)
	UWeeklyTimerCampaignRequirement* Requirement; // 0x268(0x08)
	UCampaign* Campaign; // 0x270(0x08)

	FText DoubleDigit(int32_t Value);
	void GetTimeText(FText Message:, FTimespan Timespan, FText Result);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Update Time();
	void ExecuteUbergraph_ITM_WeeklyRequirement(int32_t EntryPoint);
};

