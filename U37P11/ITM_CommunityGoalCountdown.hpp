#ifndef UE4SS_SDK_ITM_CommunityGoalCountdown_HPP
#define UE4SS_SDK_ITM_CommunityGoalCountdown_HPP

class UITM_CommunityGoalCountdown_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* CountDownTitle;
    class UTextBlock* DaysTextBlock;
    class UTextBlock* HoursTextBlock;
    class UTextBlock* MinutesTextBlock;
    FTimespan TSpan;
    FText Title;

    void PreConstruct(bool IsDesignTime);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void SetTime(float Seconds);
    void ExecuteUbergraph_ITM_CommunityGoalCountdown(int32 EntryPoint);
};

#endif
