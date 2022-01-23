#ifndef UE4SS_SDK_UI_EarlyAccessHats_Banner_HPP
#define UE4SS_SDK_UI_EarlyAccessHats_Banner_HPP

class UUI_EarlyAccessHats_Banner_C : public UUserWidget
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
    void ExecuteUbergraph_UI_EarlyAccessHats_Banner(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
};

#endif
