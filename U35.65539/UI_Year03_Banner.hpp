#ifndef UE4SS_SDK_UI_Year03_Banner_HPP
#define UE4SS_SDK_UI_Year03_Banner_HPP

class UUI_Year03_Banner_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* AnimIntro;
    UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow_0;
    UImage* BGgradientBottom;
    UImage* BGgradientTop;
    UTextBlock* Text_Mission;
    UTextBlock* Text_MissionStatus;
    UUI_GlowBackground_C* UI_GlowBackground;

    void Construct();
    void ExecuteUbergraph_UI_Year03_Banner(int32 EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
}

#endif
