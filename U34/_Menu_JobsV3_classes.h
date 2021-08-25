// WidgetBlueprintGeneratedClass _Menu_JobsV3._Menu_JobsV3_C
// Size: 0x2f8 (Inherited: 0x270)
struct U_Menu_JobsV3_C : UWindowWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UBasic_ScrollBarBox_C* Basic_ScrollBarBox; // 0x278(0x08)
	struct UBasic_ScrollBarBox_C* Basic_ScrollBarBox_2; // 0x280(0x08)
	struct UITM_Job_Section_Header_C* ITM_Job_Section_Header; // 0x288(0x08)
	struct UITM_Job_Section_Header_C* ITM_Job_Section_Header_158; // 0x290(0x08)
	struct UJobs_Header_Assignment_Slot_C* Jobs_Header_Assignment_Slot; // 0x298(0x08)
	struct UVerticalBox* JobsList; // 0x2a0(0x08)
	struct UMENU_SpaceRigTemplate_C* MENU_SpaceRigTemplate; // 0x2a8(0x08)
	struct UVerticalBox* WeeklyJobList; // 0x2b0(0x08)
	struct UWND_JobsEntry_WeeklyV2_C* WND_JobsEntry_WeeklyV2; // 0x2b8(0x08)
	struct UWND_JobsEntry_WeeklyV2_C* WND_JobsEntry_WeeklyV2_2; // 0x2c0(0x08)
	struct UWND_JobsEntryV2_C* WND_JobsEntryV2; // 0x2c8(0x08)
	struct UWND_JobsEntryV2_C* WND_JobsEntryV2_141; // 0x2d0(0x08)
	struct UWND_JobsEntryV2_C* WND_JobsEntryV2_274; // 0x2d8(0x08)
	struct UWND_JobsEntryV2_C* WND_JobsEntryV2_393; // 0x2e0(0x08)
	struct UWND_JobsEntryV2_C* WND_JobsEntryV2_520; // 0x2e8(0x08)
	struct UWND_Jobs_Entry_Base_C* LastUnfolded; // 0x2f0(0x08)

	void HasCompletedIntro(bool OutCompleted); // Function _Menu_JobsV3._Menu_JobsV3_C.HasCompletedIntro
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function _Menu_JobsV3._Menu_JobsV3_C.OnKeyUp
	void RefreshJobs(); // Function _Menu_JobsV3._Menu_JobsV3_C.RefreshJobs
	void AddJobEntry(struct UCampaign* Campaign); // Function _Menu_JobsV3._Menu_JobsV3_C.AddJobEntry
	void GetFSDPlayer(struct AFSDPlayerController* AsFSDPlayer Controller); // Function _Menu_JobsV3._Menu_JobsV3_C.GetFSDPlayer
	void BndEvt__BTN_Back_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(); // Function _Menu_JobsV3._Menu_JobsV3_C.BndEvt__BTN_Back_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	void OnShown(); // Function _Menu_JobsV3._Menu_JobsV3_C.OnShown
	void Back(); // Function _Menu_JobsV3._Menu_JobsV3_C.Back
	void PreConstruct(bool IsDesignTime); // Function _Menu_JobsV3._Menu_JobsV3_C.PreConstruct
	void Construct(); // Function _Menu_JobsV3._Menu_JobsV3_C.Construct
	void OnCampaignCompleted_Event(); // Function _Menu_JobsV3._Menu_JobsV3_C.OnCampaignCompleted_Event
	void BuildList(); // Function _Menu_JobsV3._Menu_JobsV3_C.BuildList
	void ExecuteUbergraph__Menu_JobsV3(int32_t EntryPoint); // Function _Menu_JobsV3._Menu_JobsV3_C.ExecuteUbergraph__Menu_JobsV3
};

