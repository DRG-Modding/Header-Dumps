#ifndef UE4SS_SDK_ScrollingText01_HPP
#define UE4SS_SDK_ScrollingText01_HPP

class UScrollingText01_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* NewAnimation;
    class UImage* IMG_Caution;
    class UImage* IMG_Caution_1;
    class UImage* IMG_Caution_2;

    void Construct();
    void ExecuteUbergraph_ScrollingText01(int32 EntryPoint);
};

#endif
