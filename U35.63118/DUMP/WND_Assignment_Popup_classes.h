// WidgetBlueprintGeneratedClass WND_Assignment_Popup.WND_Assignment_Popup_C
// Size: 0x308 (Inherited: 0x270)
struct UWND_Assignment_Popup_C : UWindowWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	UBasic_ButtonCutCorner_C* B_AbortAssignment; // 0x278(0x08)
	UBasic_ButtonCutCorner_C* B_ClosePopup; // 0x280(0x08)
	UBasic_ButtonCutCorner_C* B_StartAssignment; // 0x288(0x08)
	UImage* Background; // 0x290(0x08)
	UImage* Image_Assignment; // 0x298(0x08)
	UITM_CampaignProgress_NoBrackets_C* ITM_CampaignProgress_NoBrackets; // 0x2a0(0x08)
	UImage* outline; // 0x2a8(0x08)
	UWidgetSwitcher* Switcher_AssignmentButton; // 0x2b0(0x08)
	UTextBlock* Text_AssignmentName_2; // 0x2b8(0x08)
	UTextBlock* Text_AssignmentPrefix; // 0x2c0(0x08)
	UTextBlock* Text_DescBody; // 0x2c8(0x08)
	UTextBlock* Text_DescHeader; // 0x2d0(0x08)
	UTextBlock* Text_RewardFluff; // 0x2d8(0x08)
	UTextBlock* Text_RewardHeader; // 0x2e0(0x08)
	UTextBlock* Text_RewardInfo; // 0x2e8(0x08)
	UCampaign* Campaign; // 0x2f0(0x08)
	FMulticastInlineDelegate Updated; // 0x2f8(0x10)

	void BndEvt__B_ClosePopup_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(UBasic_ButtonCutCorner_C* Button);
	void BndEvt__B_StartAssignment_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(UBasic_ButtonCutCorner_C* Button);
	void BndEvt__B_AbortAssignment_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(UBasic_ButtonCutCorner_C* Button);
	void SetData(UCampaign* Campaign);
	void PreConstruct(bool IsDesignTime);
	void OnAnswer(bool Yes);
	void ExecuteUbergraph_WND_Assignment_Popup(int32_t EntryPoint);
	void Updated__DelegateSignature();
};

