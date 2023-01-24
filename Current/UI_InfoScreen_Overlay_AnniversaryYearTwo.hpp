#ifndef UE4SS_SDK_UI_InfoScreen_Overlay_AnniversaryYearTwo_HPP
#define UE4SS_SDK_UI_InfoScreen_Overlay_AnniversaryYearTwo_HPP

class UUI_InfoScreen_Overlay_AnniversaryYearTwo_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Idle;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_0;
    class UBlurBackground_C* BlurBackground;
    class UImage* Glow1;
    class UImage* Glow2;
    class UImage* Icon;

    void Construct();
    void ExecuteUbergraph_UI_InfoScreen_Overlay_AnniversaryYearTwo(int32 EntryPoint);
};

#endif
