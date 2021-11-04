// WidgetBlueprintGeneratedClass WND_JobsEntry_WeeklyV2.WND_JobsEntry_WeeklyV2_C
// Size: 0x2d0 (Inherited: 0x258)
struct UWND_JobsEntry_WeeklyV2_C : UWND_Jobs_Entry_Base_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x258(0x08)
	UImage* Assignment_Image; // 0x260(0x08)
	UHorizontalBox* Box_CampaignItems; // 0x268(0x08)
	UButton* Button_Main; // 0x270(0x08)
	UImage* I_BG2; // 0x278(0x08)
	UImage* I_BG2_3; // 0x280(0x08)
	UImage* I_O2; // 0x288(0x08)
	UITM_Prerequisites_C* ITM_Prerequisites; // 0x290(0x08)
	UITM_WeeklyMissionOverlay_C* ITM_WeeklyMissionOverlay; // 0x298(0x08)
	UOverlay* Overlay_Scaler; // 0x2a0(0x08)
	UTextBlock* Text_AssignmentName; // 0x2a8(0x08)
	UWeekly_Deadline_Timer_C* Weekly_Deadline_Timer; // 0x2b0(0x08)
	UCampaign* Campaign; // 0x2b8(0x08)
	bool IsFolded; // 0x2c0(0x01)
	UMaterialInstanceDynamic* DynMaterial; // 0x2c8(0x08)

	bool VisibleAndEnabled(UWidget* Widget);
	void SetInfo();
	bool IsActiveCampaign();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void SetData(UCampaign* Campaign);
	void Refresh();
	void Event_Updated();
	void ExecuteUbergraph_WND_JobsEntry_WeeklyV2(int32_t EntryPoint);
};
