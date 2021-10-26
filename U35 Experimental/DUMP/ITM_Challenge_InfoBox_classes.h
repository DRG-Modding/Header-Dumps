// WidgetBlueprintGeneratedClass ITM_Challenge_InfoBox.ITM_Challenge_InfoBox_C
// Size: 0x291 (Inherited: 0x230)
struct UITM_Challenge_InfoBox_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* HoverAnim; // 0x238(0x08)
	UWidgetAnimation* ClickAnim; // 0x240(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x248(0x08)
	UButton* BTN_Info; // 0x250(0x08)
	UButton* button_arrow; // 0x258(0x08)
	UGridPanel* Grid_Challenges; // 0x260(0x08)
	UImage* Image_BG; // 0x268(0x08)
	UOverlay* InfoOverlay; // 0x270(0x08)
	UOverlay* Overlay_ChallengeIcon; // 0x278(0x08)
	UOverlay* Overlay_Challenges; // 0x280(0x08)
	USizeBox* SBOX_ButtonGFX; // 0x288(0x08)
	bool IsOpen; // 0x290(0x01)

	void OnNewChallenge();
	void AddChallengeToGrid(FChallengeInfo ChallengeInfo, int32_t Column, UItm_SeasonChallenge_Small_C* W_Challenge);
	void SetOpen(bool InIsOpen);
	void BndEvt__BTN_Info_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void RefreshChallenges();
	void BndEvt__BTN_Info_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__BTN_Info_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Arrow_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_ITM_Challenge_InfoBox(int32_t EntryPoint);
};

