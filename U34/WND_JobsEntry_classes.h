// WidgetBlueprintGeneratedClass WND_JobsEntry.WND_JobsEntry_C
// Size: 0x381 (Inherited: 0x258)
struct UWND_JobsEntry_C : UWND_Jobs_Entry_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x258(0x08)
	struct UWidgetAnimation* Hover; // 0x260(0x08)
	struct UWidgetAnimation* ClickFoldIn; // 0x268(0x08)
	struct UWidgetAnimation* ClickFoldOut; // 0x270(0x08)
	struct UBasic_Menu_ColorBarVertical_C* Basic_Menu_ColorBarVertical; // 0x278(0x08)
	struct UImage* BG_M_Back; // 0x280(0x08)
	struct UImage* BG_M_Outline; // 0x288(0x08)
	struct UImage* BG_R_Back; // 0x290(0x08)
	struct UImage* BG_R_Outline; // 0x298(0x08)
	struct UImage* BigThumb_Gradient; // 0x2a0(0x08)
	struct UImage* BigThumb_Image; // 0x2a8(0x08)
	struct UBasic_ButtonScalable2_C* BTN_Abort; // 0x2b0(0x08)
	struct UBasic_ButtonScalable2_C* BTN_Accept; // 0x2b8(0x08)
	struct UButton* Button_1; // 0x2c0(0x08)
	struct UImage* CenterBar; // 0x2c8(0x08)
	struct UImage* CenterBar_Icon_Back; // 0x2d0(0x08)
	struct UImage* CenterBar_Icon_Border; // 0x2d8(0x08)
	struct UImage* CenterBar_Icon_Main; // 0x2e0(0x08)
	struct UTextBlock* DATA_AssignmentName; // 0x2e8(0x08)
	struct UTextBlock* Data_Description; // 0x2f0(0x08)
	struct UTextBlock* DATA_Header; // 0x2f8(0x08)
	struct UTextBlock* DATA_Prefix; // 0x300(0x08)
	struct UTextBlock* DATA_RewardBrief; // 0x308(0x08)
	struct UTextBlock* DATA_RewardFlavor; // 0x310(0x08)
	struct UBasic_Menu_MinimalWindow_C* FoldOut; // 0x318(0x08)
	struct UImage* Image_1; // 0x320(0x08)
	struct UITM_CampaignProgress_NoBrackets_C* ITM_CampaignProgress_NoBrackets; // 0x328(0x08)
	struct UITM_CampaignProgress_NoBrackets_C* ITM_CampaignProgress_NoBrackets_Small; // 0x330(0x08)
	struct UHorizontalBox* PrereqHolder; // 0x338(0x08)
	struct UBorder* RootBorder; // 0x340(0x08)
	struct UImage* Thumbnail_Image; // 0x348(0x08)
	struct UImage* Thumbnail_Outline; // 0x350(0x08)
	struct UTextBlock* TXT_Prereqs; // 0x358(0x08)
	struct UHorizontalBox* WeeklyAssignmentCountdownHolder; // 0x360(0x08)
	struct UCampaign* Campaign; // 0x368(0x08)
	struct FMulticastInlineDelegate OnBeginUnfolding; // 0x370(0x10)
	bool IsFolded; // 0x380(0x01)

	void CreateValidSeedRequirement(struct UValidWeeklySeedCampaignRequirement* Requirement, struct UCampaign* Campaign); // Function WND_JobsEntry.WND_JobsEntry_C.CreateValidSeedRequirement
	void CreateCampaignCompletedRequirement(struct UCamapaignCompletedRequirement* Requirement, struct UCampaign* Campaign); // Function WND_JobsEntry.WND_JobsEntry_C.CreateCampaignCompletedRequirement
	void CreateAnyRequirement(struct UAnyRetiredCampaignRequirement* Requirement, struct UCampaign* Campaign); // Function WND_JobsEntry.WND_JobsEntry_C.CreateAnyRequirement
	bool CanStartCampaign(struct UCampaign* InCampaign); // Function WND_JobsEntry.WND_JobsEntry_C.CanStartCampaign
	void CreateWeeklyRequirement(struct UWeeklyTimerCampaignRequirement* Requirement, struct UCampaign* Campaign); // Function WND_JobsEntry.WND_JobsEntry_C.CreateWeeklyRequirement
	void CreatePlayerRankBox(int32_t RequiredRank); // Function WND_JobsEntry.WND_JobsEntry_C.CreatePlayerRankBox
	bool VisibleAndEnabled(struct UWidget* Widget); // Function WND_JobsEntry.WND_JobsEntry_C.VisibleAndEnabled
	void CreateLevelRequirementBox(int32_t RequiredLevel, struct UPlayerCharacterID* ID); // Function WND_JobsEntry.WND_JobsEntry_C.CreateLevelRequirementBox
	void HandleAbortMissionButton(); // Function WND_JobsEntry.WND_JobsEntry_C.HandleAbortMissionButton
	void SetInfo(); // Function WND_JobsEntry.WND_JobsEntry_C.SetInfo
	bool IsActiveCampaign(); // Function WND_JobsEntry.WND_JobsEntry_C.IsActiveCampaign
	void CreateRequirements(); // Function WND_JobsEntry.WND_JobsEntry_C.CreateRequirements
	void SetActiveLook(); // Function WND_JobsEntry.WND_JobsEntry_C.SetActiveLook
	void SetInactiveLook(); // Function WND_JobsEntry.WND_JobsEntry_C.SetInactiveLook
	void PreConstruct(bool IsDesignTime); // Function WND_JobsEntry.WND_JobsEntry_C.PreConstruct
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WND_JobsEntry.WND_JobsEntry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WND_JobsEntry.WND_JobsEntry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function WND_JobsEntry.WND_JobsEntry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	void BndEvt__BTN_Accept_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(); // Function WND_JobsEntry.WND_JobsEntry_C.BndEvt__BTN_Accept_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	void BndEvt__BTN_Abort_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(); // Function WND_JobsEntry.WND_JobsEntry_C.BndEvt__BTN_Abort_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
	void Fold(); // Function WND_JobsEntry.WND_JobsEntry_C.Fold
	void Answer(bool Yes); // Function WND_JobsEntry.WND_JobsEntry_C.Answer
	void SkipAnswer(bool Yes); // Function WND_JobsEntry.WND_JobsEntry_C.SkipAnswer
	void SetData(struct UCampaign* Campaign); // Function WND_JobsEntry.WND_JobsEntry_C.SetData
	void Refresh(); // Function WND_JobsEntry.WND_JobsEntry_C.Refresh
	void SetFolded(bool IsFolded); // Function WND_JobsEntry.WND_JobsEntry_C.SetFolded
	void Unfold(); // Function WND_JobsEntry.WND_JobsEntry_C.Unfold
	void ExecuteUbergraph_WND_JobsEntry(int32_t EntryPoint); // Function WND_JobsEntry.WND_JobsEntry_C.ExecuteUbergraph_WND_JobsEntry
	void OnBeginUnfolding__DelegateSignature(struct UWND_JobsEntry_C* entry); // Function WND_JobsEntry.WND_JobsEntry_C.OnBeginUnfolding__DelegateSignature
};

