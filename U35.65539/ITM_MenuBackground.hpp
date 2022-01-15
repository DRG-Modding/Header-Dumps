#ifndef UE4SS_SDK_ITM_MenuBackground_HPP
#define UE4SS_SDK_ITM_MenuBackground_HPP

class UITM_MenuBackground_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* Image_BackgroundBlack;
    UImage* Image_BackgroundGradient;
    UImage* Image_GradientTop;
    FSlateColor TopTint;
    FSlateColor MiddleTint;
    FSlateColor BottomTint;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_MenuBackground(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
}

#endif
