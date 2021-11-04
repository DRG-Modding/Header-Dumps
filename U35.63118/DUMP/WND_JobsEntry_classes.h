// WidgetBlueprintGeneratedClass WND_JobsEntry.WND_JobsEntry_C
// Size: 0x381 (Inherited: 0x258)
struct UWND_JobsEntry_C : UWND_Jobs_Entry_Base_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x258(0x08)
	UWidgetAnimation* Hover; // 0x260(0x08)
	UWidgetAnimation* ClickFoldIn; // 0x268(0x08)
	UWidgetAnimation* ClickFoldOut; // 0x270(0x08)
	UBasic_Menu_ColorBarVertical_C* Basic_Menu_ColorBarVertical; // 0x278(0x08)
	UImage* BG_M_Back; // 0x280(0x08)
	UImage* BG_M_Outline; // 0x288(0x08)
	UImage* BG_R_Back; // 0x290(0x08)
	UImage* BG_R_Outline; // 0x298(0x08)
	UImage* BigThumb_Gradient; // 0x2a0(0x08)
	UImage* BigThumb_Image; // 0x2a8(0x08)
	UBasic_ButtonScalable2_C* BTN_Abort; // 0x2b0(0x08)
	UBasic_ButtonScalable2_C* BTN_Accept; // 0x2b8(0x08)
	UButton* Button_1; // 0x2c0(0x08)
	UImage* CenterBar; // 0x2c8(0x08)
	UImage* CenterBar_Icon_Back; // 0x2d0(0x08)
	UImage* CenterBar_Icon_Border; // 0x2d8(0x08)
	UImage* CenterBar_Icon_Main; // 0x2e0(0x08)
	UTextBlock* DATA_AssignmentName; // 0x2e8(0x08)
	UTextBlock* Data_Description; // 0x2f0(0x08)
	UTextBlock* DATA_Header; // 0x2f8(0x08)
	UTextBlock* DATA_Prefix; // 0x300(0x08)
	UTextBlock* DATA_RewardBrief; // 0x308(0x08)
	UTextBlock* DATA_RewardFlavor; // 0x310(0x08)
	UBasic_Menu_MinimalWindow_C* FoldOut; // 0x318(0x08)
	UImage* Image_1; // 0x320(0x08)
	UITM_CampaignProgress_NoBrackets_C* ITM_CampaignProgress_NoBrackets; // 0x328(0x08)
	UITM_CampaignProgress_NoBrackets_C* ITM_CampaignProgress_NoBrackets_Small; // 0x330(0x08)
	UHorizontalBox* PrereqHolder; // 0x338(0x08)
	UBorder* RootBorder; // 0x340(0x08)
	UImage* Thumbnail_Image; // 0x348(0x08)
	UImage* Thumbnail_Outline; // 0x350(0x08)
	UTextBlock* TXT_Prereqs; // 0x358(0x08)
	UHorizontalBox* WeeklyAssignmentCountdownHolder; // 0x360(0x08)
	UCampaign* Campaign; // 0x368(0x08)
	FMulticastInlineDelegate OnBeginUnfolding; // 0x370(0x10)
	bool IsFolded; // 0x380(0x01)

	void CreateValidSeedRequirement(UValidWeeklySeedCampaignRequirement* Requirement, UCampaign* Campaign);
	void CreateCampaignCompletedRequirement(UCamapaignCompletedRequirement* Requirement, UCampaign* Campaign);
	void CreateAnyRequirement(UAnyRetiredCampaignRequirement* Requirement, UCampaign* Campaign);
	bool CanStartCampaign(UCampaign* InCampaign);
	void CreateWeeklyRequirement(UWeeklyTimerCampaignRequirement* Requirement, UCampaign* Campaign);
	void CreatePlayerRankBox(int32_t RequiredRank);
	bool VisibleAndEnabled(UWidget* Widget);
	void CreateLevelRequirementBox(int32_t RequiredLevel, UPlayerCharacterID* ID);
	void HandleAbortMissionButton();
	void SetInfo();
	bool IsActiveCampaign();
	void CreateRequirements();
	void SetActiveLook();
	void SetInactiveLook();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__BTN_Accept_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
	void BndEvt__BTN_Abort_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
	void fold();
	void Answer(bool Yes);
	void SkipAnswer(bool Yes);
	void SetData(UCampaign* Campaign);
	void Refresh();
	void SetFolded(bool IsFolded);
	void Unfold();
	void ExecuteUbergraph_WND_JobsEntry(int32_t EntryPoint);
	void OnBeginUnfolding__DelegateSignature(UWND_JobsEntry_C* Entry);
};

