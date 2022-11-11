#ifndef UE4SS_SDK_UI_StartScreen_HPP
#define UE4SS_SDK_UI_StartScreen_HPP

class UUI_StartScreen_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* FadeIn;
    class UWidgetAnimation* FadeOut;
    class UWidgetAnimation* BlinkText;
    class UAnimatedDRGlogo_C* AnimatedDRGlogo;
    class UAnimatedStaticOverlay_C* AnimatedStaticOverlay;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_1;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_2;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_3;
    class UBorder* Border_Glow;
    class UImage* FadeOverlay;
    class UImage* GhostShipLogo;
    class UImage* Image_7;
    class UImage* Image_63;
    class UImage* Image_72;
    class UImage* Image_219;
    class UImage* Image_Background;
    class UImage* Image_Background_Black;
    class UImage* Image_Background_Smoke;
    class UCircularThrobber* LogginInThrobber;
    class UUI_AdvancedLabel_C* PressStartLabel;
    class UTextBlock* VersionInfo;

    void FadeIt(bool FadeIn, float& Duration);
    void Construct();
    void PressStart();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_StartScreen(int32 EntryPoint);
};

#endif
