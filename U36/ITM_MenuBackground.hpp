#ifndef UE4SS_SDK_ITM_MenuBackground_HPP
#define UE4SS_SDK_ITM_MenuBackground_HPP

class UITM_MenuBackground_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_BackgroundBlack;
    class UImage* Image_BackgroundGradient;
    class UImage* Image_GradientTop;
    FSlateColor TopTint;
    FSlateColor MiddleTint;
    FSlateColor BottomTint;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_MenuBackground(int32 EntryPoint);
};

#endif
