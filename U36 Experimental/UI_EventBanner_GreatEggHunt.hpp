#ifndef UE4SS_SDK_UI_EventBanner_GreatEggHunt_HPP
#define UE4SS_SDK_UI_EventBanner_GreatEggHunt_HPP

class UUI_EventBanner_GreatEggHunt_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimIntro;
    class UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow_0;
    class UImage* BGgradientBottom;
    class UImage* BGgradientTop;
    class UTextBlock* Text_Mission;
    class UTextBlock* Text_MissionStatus;
    class UUI_GlowBackground_C* UI_GlowBackground;

    void Construct();
    void ExecuteUbergraph_UI_EventBanner_GreatEggHunt(int32 EntryPoint);
};

#endif
