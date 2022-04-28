#ifndef UE4SS_SDK_ForgeScreen_HPP
#define UE4SS_SDK_ForgeScreen_HPP

class UForgeScreen_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* ForgeAnim;
    class UAnimatedStaticOverlay_WithScanlines_LightVersion_C* AnimatedStaticOverlay_WithScanlines_LightVersion;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_1;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_2;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_3;
    class UProgressBar* ProgressBar_64;
    class UVerticalBox* VertForgeBox;
    FTimerHandle AnimTimer;

    void FrogingDone();
    void StartForging();
    void Construct();
    void ResetForgeAnim();
    void StartForginAnim();
    void ExecuteUbergraph_ForgeScreen(int32 EntryPoint);
};

#endif
