#ifndef UE4SS_SDK_ScrollingText01_HPP
#define UE4SS_SDK_ScrollingText01_HPP

class UScrollingText01_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* NewAnimation;
    UImage* IMG_Caution;
    UImage* IMG_Caution_1;
    UImage* IMG_Caution_2;

    void Construct();
    void ExecuteUbergraph_ScrollingText01(int32 EntryPoint, float CallFunc_RandomFloatInRange_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
}

#endif