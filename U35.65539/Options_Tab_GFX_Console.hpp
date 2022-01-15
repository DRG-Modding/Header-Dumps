#ifndef UE4SS_SDK_Options_Tab_GFX_Console_HPP
#define UE4SS_SDK_Options_Tab_GFX_Console_HPP

class UOptions_Tab_GFX_Console_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Option_C* OPT_Gamma;
    UBasic_Option_C* OPT_HDR_Gamma;
    UBasic_Option_C* OPT_OverallQuality;
    UOptions_Console_QualitySetting_C* Options_Console_QualitySetting;
    UOptions_GFX_Gamma_C* Options_GFX_Gamma;
    UOptions_GFX_HDR_Gamma_C* Options_GFX_HDR_Gamma;
    FOptions_Tab_GFX_Console_CSettingsChanged SettingsChanged;
    void SettingsChanged();

    void Construct();
    void ExecuteUbergraph_Options_Tab_GFX_Console(int32 EntryPoint, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, bool CallFunc_IsHDREnabled_ReturnValue);
    void SettingsChanged__DelegateSignature();
}

#endif
