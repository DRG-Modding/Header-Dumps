// WidgetBlueprintGeneratedClass _Menu_JobsV3._Menu_JobsV3_C
// Size: 0x2f8 (Inherited: 0x270)
struct U_Menu_JobsV3_C : UWindowWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	UBasic_ScrollBarBox_C* Basic_ScrollBarBox; // 0x278(0x08)
	UBasic_ScrollBarBox_C* Basic_ScrollBarBox_2; // 0x280(0x08)
	UITM_Job_Section_Header_C* ITM_Job_Section_Header; // 0x288(0x08)
	UITM_Job_Section_Header_C* ITM_Job_Section_Header_158; // 0x290(0x08)
	UJobs_Header_Assignment_Slot_C* Jobs_Header_Assignment_Slot; // 0x298(0x08)
	UVerticalBox* JobsList; // 0x2a0(0x08)
	UMENU_SpaceRigTemplate_C* MENU_SpaceRigTemplate; // 0x2a8(0x08)
	UVerticalBox* WeeklyJobList; // 0x2b0(0x08)
	UWND_JobsEntry_WeeklyV2_C* WND_JobsEntry_WeeklyV2; // 0x2b8(0x08)
	UWND_JobsEntry_WeeklyV2_C* WND_JobsEntry_WeeklyV2_2; // 0x2c0(0x08)
	UWND_JobsEntryV2_C* WND_JobsEntryV2; // 0x2c8(0x08)
	UWND_JobsEntryV2_C* WND_JobsEntryV2_141; // 0x2d0(0x08)
	UWND_JobsEntryV2_C* WND_JobsEntryV2_274; // 0x2d8(0x08)
	UWND_JobsEntryV2_C* WND_JobsEntryV2_393; // 0x2e0(0x08)
	UWND_JobsEntryV2_C* WND_JobsEntryV2_520; // 0x2e8(0x08)
	UWND_Jobs_Entry_Base_C* LastUnfolded; // 0x2f0(0x08)

	void HasCompletedIntro(bool OutCompleted);
	FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
	void RefreshJobs();
	void AddJobEntry(UCampaign* Campaign);
	void GetFSDPlayer(AFSDPlayerController* AsFSDPlayer Controller);
	void BndEvt__BTN_Back_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
	void OnShown();
	void Back();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnCampaignCompleted_Event();
	void BuildList();
	void ExecuteUbergraph__Menu_JobsV3(int32_t EntryPoint);
};

