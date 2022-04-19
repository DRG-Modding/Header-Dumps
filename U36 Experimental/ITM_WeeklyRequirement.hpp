#ifndef UE4SS_SDK_ITM_WeeklyRequirement_HPP
#define UE4SS_SDK_ITM_WeeklyRequirement_HPP

class UITM_WeeklyRequirement_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* BG_M_Back;
    class UImage* BG_M_Outline;
    class UImage* BG_R_Back;
    class UImage* BG_R_Outline;
    class UFSDLabelWidget* TXT_Countdown;
    class UFSDLabelWidget* TXT_Header;
    class UWeeklyTimerCampaignRequirement* Requirement;
    class UCampaign* Campaign;

    FText DoubleDigit(int32 Value);
    void GetTimeText(FText Message:, FTimespan Timespan, FText& Result);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Update Time();
    void ExecuteUbergraph_ITM_WeeklyRequirement(int32 EntryPoint);
};

#endif
