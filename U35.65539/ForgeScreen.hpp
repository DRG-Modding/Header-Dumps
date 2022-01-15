#ifndef UE4SS_SDK_ForgeScreen_HPP
#define UE4SS_SDK_ForgeScreen_HPP

class UForgeScreen_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* ForgeAnim;
    UAnimatedStaticOverlay_WithScanlines_LightVersion_C* AnimatedStaticOverlay_WithScanlines_LightVersion;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_1;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_2;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_3;
    UProgressBar* ProgressBar_64;
    UVerticalBox* VertForgeBox;

    void Construct();
    void StartForging();
    void FrogingDone();
    void ExecuteUbergraph_ForgeScreen(int32 EntryPoint, StartForging__DelegateSignature K2Node_CreateDelegate_OutputDelegate, ForgingDone__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
}

#endif
