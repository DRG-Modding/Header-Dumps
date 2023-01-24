#ifndef UE4SS_SDK_ITM_TimeText_HPP
#define UE4SS_SDK_ITM_TimeText_HPP

class UITM_TimeText_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* Text_Timer;
    FSlateFontInfo Font;

    void SetData(FTimespan Timespan, const bool ShowDays);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_TimeText(int32 EntryPoint);
};

#endif
