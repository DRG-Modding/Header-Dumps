#ifndef UE4SS_SDK_UI_OilExtractor_Bar_HPP
#define UE4SS_SDK_UI_OilExtractor_Bar_HPP

class UUI_OilExtractor_Bar_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Full;
    class UProgressBar* ProgressBar_41;
    class UTextBlock* TextBlock_70;

    void SetFilledPercentage(float PercentFull);
    void Construct();
    void ExecuteUbergraph_UI_OilExtractor_Bar(int32 EntryPoint);
};

#endif
