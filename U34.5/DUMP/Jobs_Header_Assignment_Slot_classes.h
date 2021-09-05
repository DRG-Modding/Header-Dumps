// WidgetBlueprintGeneratedClass Jobs_Header_Assignment_Slot.Jobs_Header_Assignment_Slot_C
// Size: 0x31c (Inherited: 0x258)
struct UJobs_Header_Assignment_Slot_C : UWND_Jobs_Entry_Base_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x258(0x08)
	UBasic_ButtonCutCorner_C* B_StopAssignment; // 0x260(0x08)
	UButton* Button_Outer; // 0x268(0x08)
	UTextBlock* DATA_RewardBrief; // 0x270(0x08)
	UImage* I_BG2; // 0x278(0x08)
	UImage* I_BG2_2; // 0x280(0x08)
	UImage* I_BG2_3; // 0x288(0x08)
	UImage* I_BG2_4; // 0x290(0x08)
	UImage* I_BG_Glow; // 0x298(0x08)
	UImage* I_CampaignIcon; // 0x2a0(0x08)
	UImage* I_O2; // 0x2a8(0x08)
	UImage* Image_2; // 0x2b0(0x08)
	UImage* Image_Assignment; // 0x2b8(0x08)
	UWidgetSwitcher* IsActive_WidgetSwitcher; // 0x2c0(0x08)
	UITM_CampaignProgress_NoBrackets_C* ITM_CampaignProgress_NoBrackets; // 0x2c8(0x08)
	UJobs_List_Element_BG_CutCorner_C* Jobs_List_Element_BG_CutCorner; // 0x2d0(0x08)
	UImage* outline; // 0x2d8(0x08)
	UImage* outline_2; // 0x2e0(0x08)
	UTextBlock* Text_AssignmentName; // 0x2e8(0x08)
	UTextBlock* Text_MissionDescription; // 0x2f0(0x08)
	UTextBlock* Text_PrefixName; // 0x2f8(0x08)
	UTextBlock* TextBlock_MainHeader; // 0x300(0x08)
	UTextBlock* TextBlock_MainHeader_2; // 0x308(0x08)
	UCampaign* Campaign; // 0x310(0x08)
	int32_t MaxCharacters; // 0x318(0x04)

	void BndEvt__B_StopAssignment_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(UBasic_ButtonCutCorner_C* Button);
	void OnAnswer(bool Yes);
	void SetData(UCampaign* Campaign);
	void Refresh();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void Event_Updated();
	void ExecuteUbergraph_Jobs_Header_Assignment_Slot(int32_t EntryPoint);
};

