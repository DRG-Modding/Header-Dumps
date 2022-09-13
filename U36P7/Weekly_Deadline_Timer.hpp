#ifndef UE4SS_SDK_Weekly_Deadline_Timer_HPP
#define UE4SS_SDK_Weekly_Deadline_Timer_HPP

class UWeekly_Deadline_Timer_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* I_Background;
    class UImage* I_Outline;
    class UITM_TimeText_C* ITM_TimeText;
    class UTextBlock* TextBlock_Headline;
    class UCampaign* Campaign;
    class UWeeklyTimerCampaignRequirement* Requirement;

    void PreConstruct(bool IsDesignTime);
    void SetData(class UCampaign* Campaign);
    void Update Time();
    void ExecuteUbergraph_Weekly_Deadline_Timer(int32 EntryPoint);
};

#endif
