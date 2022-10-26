#ifndef UE4SS_SDK_Options_Tab_GFX_Console_HPP
#define UE4SS_SDK_Options_Tab_GFX_Console_HPP

class UOptions_Tab_GFX_Console_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class URichTextBlock* ModeDescription;
    class UBasic_Option_C* OPT_Gamma;
    class UBasic_Option_C* OPT_HDR_Gamma;
    class UBasic_Option_C* OPT_OverallQuality;
    class UBasic_Option_C* OPT_StaticResolutionScaling;
    class UOptions_Console_QualitySetting_C* Options_Console_QualitySetting;
    class UOptions_Console_StaticResolutionScaling_C* Options_Console_StaticResolutionScaling;
    class UOptions_GFX_Gamma_C* Options_GFX_Gamma;
    class UOptions_GFX_HDR_Gamma_C* Options_GFX_HDR_Gamma;
    class URichTextBlock* VRRDescription;
    FOptions_Tab_GFX_Console_CSettingsChanged SettingsChanged;
    void SettingsChanged();

    void ApplyGraphicOptionsText();
    void AddStaticResolutionOption();
    void ForceMicrosoftNonHDR();
    void Construct();
    void UINeedsUpdate();
    void ExecuteUbergraph_Options_Tab_GFX_Console(int32 EntryPoint);
    void SettingsChanged__DelegateSignature();
};

#endif
