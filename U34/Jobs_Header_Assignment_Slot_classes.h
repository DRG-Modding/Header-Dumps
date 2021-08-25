// WidgetBlueprintGeneratedClass Jobs_Header_Assignment_Slot.Jobs_Header_Assignment_Slot_C
// Size: 0x31c (Inherited: 0x258)
struct UJobs_Header_Assignment_Slot_C : UWND_Jobs_Entry_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x258(0x08)
	struct UBasic_ButtonCutCorner_C* B_StopAssignment; // 0x260(0x08)
	struct UButton* Button_Outer; // 0x268(0x08)
	struct UTextBlock* DATA_RewardBrief; // 0x270(0x08)
	struct UImage* I_BG2; // 0x278(0x08)
	struct UImage* I_BG2_2; // 0x280(0x08)
	struct UImage* I_BG2_3; // 0x288(0x08)
	struct UImage* I_BG2_4; // 0x290(0x08)
	struct UImage* I_BG_Glow; // 0x298(0x08)
	struct UImage* I_CampaignIcon; // 0x2a0(0x08)
	struct UImage* I_O2; // 0x2a8(0x08)
	struct UImage* Image_2; // 0x2b0(0x08)
	struct UImage* Image_Assignment; // 0x2b8(0x08)
	struct UWidgetSwitcher* IsActive_WidgetSwitcher; // 0x2c0(0x08)
	struct UITM_CampaignProgress_NoBrackets_C* ITM_CampaignProgress_NoBrackets; // 0x2c8(0x08)
	struct UJobs_List_Element_BG_CutCorner_C* Jobs_List_Element_BG_CutCorner; // 0x2d0(0x08)
	struct UImage* outline; // 0x2d8(0x08)
	struct UImage* outline_2; // 0x2e0(0x08)
	struct UTextBlock* Text_AssignmentName; // 0x2e8(0x08)
	struct UTextBlock* Text_MissionDescription; // 0x2f0(0x08)
	struct UTextBlock* Text_PrefixName; // 0x2f8(0x08)
	struct UTextBlock* TextBlock_MainHeader; // 0x300(0x08)
	struct UTextBlock* TextBlock_MainHeader_2; // 0x308(0x08)
	struct UCampaign* Campaign; // 0x310(0x08)
	int32_t MaxCharacters; // 0x318(0x04)

	void BndEvt__B_StopAssignment_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct UBasic_ButtonCutCorner_C* Button); // Function Jobs_Header_Assignment_Slot.Jobs_Header_Assignment_Slot_C.BndEvt__B_StopAssignment_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	void OnAnswer(bool Yes); // Function Jobs_Header_Assignment_Slot.Jobs_Header_Assignment_Slot_C.OnAnswer
	void SetData(struct UCampaign* Campaign); // Function Jobs_Header_Assignment_Slot.Jobs_Header_Assignment_Slot_C.SetData
	void Refresh(); // Function Jobs_Header_Assignment_Slot.Jobs_Header_Assignment_Slot_C.Refresh
	void PreConstruct(bool IsDesignTime); // Function Jobs_Header_Assignment_Slot.Jobs_Header_Assignment_Slot_C.PreConstruct
	void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function Jobs_Header_Assignment_Slot.Jobs_Header_Assignment_Slot_C.BndEvt__Button_Outer_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	void Event_Updated(); // Function Jobs_Header_Assignment_Slot.Jobs_Header_Assignment_Slot_C.Event_Updated
	void ExecuteUbergraph_Jobs_Header_Assignment_Slot(int32_t EntryPoint); // Function Jobs_Header_Assignment_Slot.Jobs_Header_Assignment_Slot_C.ExecuteUbergraph_Jobs_Header_Assignment_Slot
};

