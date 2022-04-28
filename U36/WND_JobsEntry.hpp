#ifndef UE4SS_SDK_WND_JobsEntry_HPP
#define UE4SS_SDK_WND_JobsEntry_HPP

class UWND_JobsEntry_C : public UWND_Jobs_Entry_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Hover;
    class UWidgetAnimation* ClickFoldIn;
    class UWidgetAnimation* ClickFoldOut;
    class UBasic_Menu_ColorBarVertical_C* Basic_Menu_ColorBarVertical;
    class UImage* BG_M_Back;
    class UImage* BG_M_Outline;
    class UImage* BG_R_Back;
    class UImage* BG_R_Outline;
    class UImage* BigThumb_Gradient;
    class UImage* BigThumb_Image;
    class UBasic_ButtonScalable2_C* BTN_Abort;
    class UBasic_ButtonScalable2_C* BTN_Accept;
    class UButton* Button_0;
    class UImage* CenterBar;
    class UImage* CenterBar_Icon_Back;
    class UImage* CenterBar_Icon_Border;
    class UImage* CenterBar_Icon_Main;
    class UTextBlock* DATA_AssignmentName;
    class UTextBlock* Data_Description;
    class UTextBlock* DATA_Header;
    class UTextBlock* DATA_Prefix;
    class UTextBlock* DATA_RewardBrief;
    class UTextBlock* DATA_RewardFlavor;
    class UBasic_Menu_MinimalWindow_C* Foldout;
    class UImage* Image_0;
    class UITM_CampaignProgress_NoBrackets_C* ITM_CampaignProgress_NoBrackets;
    class UITM_CampaignProgress_NoBrackets_C* ITM_CampaignProgress_NoBrackets_Small;
    class UHorizontalBox* PrereqHolder;
    class UBorder* RootBorder;
    class UImage* Thumbnail_Image;
    class UImage* Thumbnail_Outline;
    class UTextBlock* TXT_Prereqs;
    class UHorizontalBox* WeeklyAssignmentCountdownHolder;
    class UCampaign* Campaign;
    FWND_JobsEntry_COnBeginUnfolding OnBeginUnfolding;
    void OnBeginUnfolding(class UWND_JobsEntry_C* Entry);
    bool IsFolded;

    void CreateValidSeedRequirement(class UValidWeeklySeedCampaignRequirement* Requirement, class UCampaign* Campaign);
    void CreateCampaignCompletedRequirement(class UCamapaignCompletedRequirement* Requirement, class UCampaign* Campaign);
    void CreateAnyRequirement(class UAnyRetiredCampaignRequirement* Requirement, class UCampaign* Campaign);
    bool CanStartCampaign(class UCampaign* InCampaign);
    void CreateWeeklyRequirement(class UWeeklyTimerCampaignRequirement* Requirement, class UCampaign* Campaign);
    void CreatePlayerRankBox(int32 RequiredRank);
    bool VisibleAndEnabled(class UWidget* Widget);
    void CreateLevelRequirementBox(int32 RequiredLevel, class UPlayerCharacterID* ID);
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
    void Fold();
    void Answer(bool Yes);
    void SkipAnswer(bool Yes);
    void SetData(class UCampaign* Campaign);
    void Refresh();
    void SetFolded(bool IsFolded);
    void Unfold();
    void ExecuteUbergraph_WND_JobsEntry(int32 EntryPoint);
    void OnBeginUnfolding__DelegateSignature(class UWND_JobsEntry_C* Entry);
};

#endif
