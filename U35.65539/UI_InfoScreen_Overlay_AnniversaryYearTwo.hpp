#ifndef UE4SS_SDK_UI_InfoScreen_Overlay_AnniversaryYearTwo_HPP
#define UE4SS_SDK_UI_InfoScreen_Overlay_AnniversaryYearTwo_HPP

class UUI_InfoScreen_Overlay_AnniversaryYearTwo_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Idle;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_0;
    UBlurBackground_C* BlurBackground;
    UImage* Glow1;
    UImage* Glow2;
    UImage* Icon;

    void Construct();
    void ExecuteUbergraph_UI_InfoScreen_Overlay_AnniversaryYearTwo(int32 EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
}

#endif
