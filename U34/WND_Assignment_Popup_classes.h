// WidgetBlueprintGeneratedClass WND_Assignment_Popup.WND_Assignment_Popup_C
// Size: 0x308 (Inherited: 0x270)
struct UWND_Assignment_Popup_C : UWindowWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UBasic_ButtonCutCorner_C* B_AbortAssignment; // 0x278(0x08)
	struct UBasic_ButtonCutCorner_C* B_ClosePopup; // 0x280(0x08)
	struct UBasic_ButtonCutCorner_C* B_StartAssignment; // 0x288(0x08)
	struct UImage* Background; // 0x290(0x08)
	struct UImage* Image_Assignment; // 0x298(0x08)
	struct UITM_CampaignProgress_NoBrackets_C* ITM_CampaignProgress_NoBrackets; // 0x2a0(0x08)
	struct UImage* outline; // 0x2a8(0x08)
	struct UWidgetSwitcher* Switcher_AssignmentButton; // 0x2b0(0x08)
	struct UTextBlock* Text_AssignmentName_2; // 0x2b8(0x08)
	struct UTextBlock* Text_AssignmentPrefix; // 0x2c0(0x08)
	struct UTextBlock* Text_DescBody; // 0x2c8(0x08)
	struct UTextBlock* Text_DescHeader; // 0x2d0(0x08)
	struct UTextBlock* Text_RewardFluff; // 0x2d8(0x08)
	struct UTextBlock* Text_RewardHeader; // 0x2e0(0x08)
	struct UTextBlock* Text_RewardInfo; // 0x2e8(0x08)
	struct UCampaign* Campaign; // 0x2f0(0x08)
	struct FMulticastInlineDelegate Updated; // 0x2f8(0x10)

	void BndEvt__B_ClosePopup_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct UBasic_ButtonCutCorner_C* Button); // Function WND_Assignment_Popup.WND_Assignment_Popup_C.BndEvt__B_ClosePopup_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	void BndEvt__B_StartAssignment_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(struct UBasic_ButtonCutCorner_C* Button); // Function WND_Assignment_Popup.WND_Assignment_Popup_C.BndEvt__B_StartAssignment_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	void BndEvt__B_AbortAssignment_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(struct UBasic_ButtonCutCorner_C* Button); // Function WND_Assignment_Popup.WND_Assignment_Popup_C.BndEvt__B_AbortAssignment_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	void SetData(struct UCampaign* Campaign); // Function WND_Assignment_Popup.WND_Assignment_Popup_C.SetData
	void PreConstruct(bool IsDesignTime); // Function WND_Assignment_Popup.WND_Assignment_Popup_C.PreConstruct
	void OnAnswer(bool Yes); // Function WND_Assignment_Popup.WND_Assignment_Popup_C.OnAnswer
	void ExecuteUbergraph_WND_Assignment_Popup(int32_t EntryPoint); // Function WND_Assignment_Popup.WND_Assignment_Popup_C.ExecuteUbergraph_WND_Assignment_Popup
	void Updated__DelegateSignature(); // Function WND_Assignment_Popup.WND_Assignment_Popup_C.Updated__DelegateSignature
};

