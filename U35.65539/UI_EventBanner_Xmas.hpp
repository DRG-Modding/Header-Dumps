#ifndef UE4SS_SDK_UI_EventBanner_Xmas_HPP
#define UE4SS_SDK_UI_EventBanner_Xmas_HPP

class UUI_EventBanner_Xmas_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* AnimBob;
    UWidgetAnimation* AnimIntro;
    UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow_0;
    UImage* BGgradientBottom;
    UImage* BGgradientTop;
    UImage* Image;
    UImage* Image_65;
    UTextBlock* Text_MissionStatus;
    UUI_GlowBackground_C* UI_GlowBackground;

    void Construct();
    void ExecuteUbergraph_UI_EventBanner_Xmas(int32 EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
}

#endif
