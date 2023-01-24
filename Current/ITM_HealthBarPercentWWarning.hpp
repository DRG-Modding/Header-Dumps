#ifndef UE4SS_SDK_ITM_HealthBarPercentWWarning_HPP
#define UE4SS_SDK_ITM_HealthBarPercentWWarning_HPP

class UITM_HealthBarPercentWWarning_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* PingWarning;
    class UImage* Image_RightGradient;
    class UImage* Image_RightIcon;
    class UImage* Line_RightPercent;
    class UImage* Line_RightPercent2;
    class UTextBlock* Text_RightPercent;
    bool ShowUpLine;

    void PreConstruct(bool IsDesignTime);
    void SetText(FText Text, bool PingWarning);
    void PingFinished();
    void Construct();
    void ExecuteUbergraph_ITM_HealthBarPercentWWarning(int32 EntryPoint);
};

#endif
