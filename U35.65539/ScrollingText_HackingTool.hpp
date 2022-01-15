#ifndef UE4SS_SDK_ScrollingText_HackingTool_HPP
#define UE4SS_SDK_ScrollingText_HackingTool_HPP

class UScrollingText_HackingTool_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* NewAnimation;
    UImage* Image_346;
    UImage* IMG_Caution;
    UImage* IMG_Caution_1;
    UImage* IMG_Caution_2;

    void Construct();
    void ExecuteUbergraph_ScrollingText_HackingTool(int32 EntryPoint, float CallFunc_RandomFloatInRange_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
}

#endif
