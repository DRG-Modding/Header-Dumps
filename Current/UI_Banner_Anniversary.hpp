#ifndef UE4SS_SDK_UI_Banner_Anniversary_HPP
#define UE4SS_SDK_UI_Banner_Anniversary_HPP

class UUI_Banner_Anniversary_C : public UUserWidget
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
    void ExecuteUbergraph_UI_Banner_Anniversary(int32 EntryPoint);
};

#endif
