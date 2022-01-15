#ifndef UE4SS_SDK_UI_EventBanner_SteamAwards2020_HPP
#define UE4SS_SDK_UI_EventBanner_SteamAwards2020_HPP

class UUI_EventBanner_SteamAwards2020_C : UUserWidget
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
    void ExecuteUbergraph_UI_EventBanner_SteamAwards2020(int32 EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
}

#endif
