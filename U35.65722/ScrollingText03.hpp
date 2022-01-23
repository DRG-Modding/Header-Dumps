#ifndef UE4SS_SDK_ScrollingText03_HPP
#define UE4SS_SDK_ScrollingText03_HPP

class UScrollingText03_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* NewAnimation;
    class UImage* IMG_Caution;
    class UImage* IMG_Caution_1;
    class UImage* IMG_Caution_2;

    void Construct();
    void ExecuteUbergraph_ScrollingText03(int32 EntryPoint, float CallFunc_RandomFloatInRange_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
};

#endif
