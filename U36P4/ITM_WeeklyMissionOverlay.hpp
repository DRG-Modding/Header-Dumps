#ifndef UE4SS_SDK_ITM_WeeklyMissionOverlay_HPP
#define UE4SS_SDK_ITM_WeeklyMissionOverlay_HPP

class UITM_WeeklyMissionOverlay_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Border_Checkmark;
    class UBorder* DeadlineTimer;
    class UImage* I_Background;
    class UImage* Image_Checkmark;
    class UITM_Prerequisites_C* ITM_Prerequisites;
    class UITM_TimeText_C* ITM_TimeText;
    class UJobs_List_Element_BG_CutCorner_C* Jobs_List_Element_BG_CutCorner_1;
    class UImage* outline;
    class UImage* outline_1;
    class UTextBlock* Text_Headline;
    class UTextBlock* TextBlock_Timer;
    class UVerticalBox* VerticalBox_Assignment;
    class UWidgetSwitcher* WidgetSwitcher_Type;
    class UCampaign* Campaign;
    class UWeeklyTimerCampaignRequirement* Requirement;

    void PreConstruct(bool IsDesignTime);
    void SetData(class UCampaign* Campaign, FText Headline, bool ShowTimer, bool AllRequirementsMet);
    void Update Time();
    void SetInvalid(class UCampaign* Campaign);
    void ExecuteUbergraph_ITM_WeeklyMissionOverlay(int32 EntryPoint);
};

#endif
