// WidgetBlueprintGeneratedClass WND_JobsEntry_WeeklyV2.WND_JobsEntry_WeeklyV2_C
// Size: 0x2d0 (Inherited: 0x258)
struct UWND_JobsEntry_WeeklyV2_C : UWND_Jobs_Entry_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x258(0x08)
	struct UImage* Assignment_Image; // 0x260(0x08)
	struct UHorizontalBox* Box_CampaignItems; // 0x268(0x08)
	struct UButton* Button_Main; // 0x270(0x08)
	struct UImage* I_BG2; // 0x278(0x08)
	struct UImage* I_BG2_3; // 0x280(0x08)
	struct UImage* I_O2; // 0x288(0x08)
	struct UITM_Prerequisites_C* ITM_Prerequisites; // 0x290(0x08)
	struct UITM_WeeklyMissionOverlay_C* ITM_WeeklyMissionOverlay; // 0x298(0x08)
	struct UOverlay* Overlay_Scaler; // 0x2a0(0x08)
	struct UTextBlock* Text_AssignmentName; // 0x2a8(0x08)
	struct UWeekly_Deadline_Timer_C* Weekly_Deadline_Timer; // 0x2b0(0x08)
	struct UCampaign* Campaign; // 0x2b8(0x08)
	bool IsFolded; // 0x2c0(0x01)
	char UnknownData_2C1[0x7]; // 0x2c1(0x07)
	struct UMaterialInstanceDynamic* DynMaterial; // 0x2c8(0x08)

	bool VisibleAndEnabled(struct UWidget* Widget); // Function WND_JobsEntry_WeeklyV2.WND_JobsEntry_WeeklyV2_C.VisibleAndEnabled
	void SetInfo(); // Function WND_JobsEntry_WeeklyV2.WND_JobsEntry_WeeklyV2_C.SetInfo
	bool IsActiveCampaign(); // Function WND_JobsEntry_WeeklyV2.WND_JobsEntry_WeeklyV2_C.IsActiveCampaign
	void PreConstruct(bool IsDesignTime); // Function WND_JobsEntry_WeeklyV2.WND_JobsEntry_WeeklyV2_C.PreConstruct
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WND_JobsEntry_WeeklyV2.WND_JobsEntry_WeeklyV2_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WND_JobsEntry_WeeklyV2.WND_JobsEntry_WeeklyV2_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function WND_JobsEntry_WeeklyV2.WND_JobsEntry_WeeklyV2_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	void SetData(struct UCampaign* Campaign); // Function WND_JobsEntry_WeeklyV2.WND_JobsEntry_WeeklyV2_C.SetData
	void Refresh(); // Function WND_JobsEntry_WeeklyV2.WND_JobsEntry_WeeklyV2_C.Refresh
	void Event_Updated(); // Function WND_JobsEntry_WeeklyV2.WND_JobsEntry_WeeklyV2_C.Event_Updated
	void ExecuteUbergraph_WND_JobsEntry_WeeklyV2(int32_t EntryPoint); // Function WND_JobsEntry_WeeklyV2.WND_JobsEntry_WeeklyV2_C.ExecuteUbergraph_WND_JobsEntry_WeeklyV2
};

