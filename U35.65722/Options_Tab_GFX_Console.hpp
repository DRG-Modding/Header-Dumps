#ifndef UE4SS_SDK_Options_Tab_GFX_Console_HPP
#define UE4SS_SDK_Options_Tab_GFX_Console_HPP

class UOptions_Tab_GFX_Console_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Option_C* OPT_Gamma;
    class UBasic_Option_C* OPT_HDR_Gamma;
    class UBasic_Option_C* OPT_OverallQuality;
    class UOptions_Console_QualitySetting_C* Options_Console_QualitySetting;
    class UOptions_GFX_Gamma_C* Options_GFX_Gamma;
    class UOptions_GFX_HDR_Gamma_C* Options_GFX_HDR_Gamma;
    FOptions_Tab_GFX_Console_CSettingsChanged SettingsChanged;
    void SettingsChanged();

    void Construct();
    void ExecuteUbergraph_Options_Tab_GFX_Console(int32 EntryPoint, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, bool CallFunc_IsHDREnabled_ReturnValue);
    void SettingsChanged__DelegateSignature();
};

#endif
