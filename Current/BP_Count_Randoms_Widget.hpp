#ifndef UE4SS_SDK_BP_Count_Randoms_Widget_HPP
#define UE4SS_SDK_BP_Count_Randoms_Widget_HPP

class UBP_Count_Randoms_Widget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_0;
    class UImage* Image_2;
    class UImage* Image_3;
    class UTextBlock* TextBlock_4;
    class UTextBlock* TextBlock_5;
    class UTextBlock* TextBlock_6;
    float Depth;

    void UpdateDepthText();
    void SetProgress(float Progress);
    void Construct();
    void ExecuteUbergraph_BP_Count_Randoms_Widget(int32 EntryPoint);
};

#endif
