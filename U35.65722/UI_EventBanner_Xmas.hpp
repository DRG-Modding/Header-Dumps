#ifndef UE4SS_SDK_UI_EventBanner_Xmas_HPP
#define UE4SS_SDK_UI_EventBanner_Xmas_HPP

class UUI_EventBanner_Xmas_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimBob;
    class UWidgetAnimation* AnimIntro;
    class UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow_0;
    class UImage* BGgradientBottom;
    class UImage* BGgradientTop;
    class UImage* Image;
    class UImage* Image_65;
    class UTextBlock* Text_MissionStatus;
    class UUI_GlowBackground_C* UI_GlowBackground;

    void Construct();
    void ExecuteUbergraph_UI_EventBanner_Xmas(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
};

#endif
