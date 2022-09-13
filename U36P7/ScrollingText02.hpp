#ifndef UE4SS_SDK_ScrollingText02_HPP
#define UE4SS_SDK_ScrollingText02_HPP

class UScrollingText02_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* NewAnimation;
    class UImage* IMG_Caution;
    class UImage* IMG_Caution_1;
    class UImage* IMG_Caution_2;

    void Construct();
    void ExecuteUbergraph_ScrollingText02(int32 EntryPoint);
};

#endif
