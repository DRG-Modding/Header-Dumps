#ifndef UE4SS_SDK_UI_EventBanner_BeachParty_HPP
#define UE4SS_SDK_UI_EventBanner_BeachParty_HPP

class UUI_EventBanner_BeachParty_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimIntro;
    class UBasic_Label_C* Basic_Label;
    class UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow_0;
    class UImage* BGgradientBottom;
    class UImage* BGgradientTop;
    class UBasic_Label_C* Text_MissionStatus;
    class UUI_GlowBackground_C* UI_GlowBackground;

    void Construct();
    void ExecuteUbergraph_UI_EventBanner_BeachParty(int32 EntryPoint);
};

#endif
