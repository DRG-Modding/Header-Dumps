#ifndef UE4SS_SDK_BP_DepthCountWidget_HPP
#define UE4SS_SDK_BP_DepthCountWidget_HPP

class UBP_DepthCountWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AlertBlink;
    class UImage* Image_50;
    class UTextBlock* TextBlock_4;
    class UTextBlock* TextBlock_5;
    class UTextBlock* TextBlock_6;
    class UTextBlock* TextBlockDepth;
    float Depth;

    void UpdateDepthText();
    void SetProgress(float Progress);
    void Construct();
    void ExecuteUbergraph_BP_DepthCountWidget(int32 EntryPoint);
};

#endif
