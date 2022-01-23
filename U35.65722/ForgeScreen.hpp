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

    void Construct();
    void StartForging();
    void FrogingDone();
    void ExecuteUbergraph_ForgeScreen(int32 EntryPoint, FExecuteUbergraph_ForgeScreenK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_ForgeScreenK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
};

#endif
