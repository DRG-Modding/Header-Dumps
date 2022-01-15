#ifndef UE4SS_SDK_Options_Tab_GFX_Steam_HPP
#define UE4SS_SDK_Options_Tab_GFX_Steam_HPP

class UOptions_Tab_GFX_Steam_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_ButtonWithControls_C* Basic_ButtonWithControls;
    UBasic_Option_C* Basic_MaxFPS;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    UBasic_Option_C* Basic_Option_1;
    UBasic_Option_C* OPT_AAType;
    UBasic_Option_C* OPT_AntiAliasing;
    UBasic_Option_C* OPT_DX12;
    UBasic_Option_C* OPT_Effects;
    UOptions_FullScreen_C* OPT_FullScreen;
    UBasic_Option_C* OPT_Gamma;
    UBasic_Option_C* OPT_HDR;
    UBasic_Option_C* OPT_HDR_Gamma;
    UBasic_Option_C* OPT_OverallQuality;
    UBasic_Option_C* OPT_PostProcessing;
    UBasic_Option_C* OPT_Resolution;
    UBasic_Option_C* OPT_ResolutionScale;
    UBasic_Option_C* OPT_ScreenMode;
    UBasic_Option_C* Opt_ScreenMode_UWP;
    UBasic_Option_C* OPT_ShadowResolution;
    UBasic_Option_C* OPT_Sharpening;
    UBasic_Option_C* OPT_TextureResolution;
    UBasic_Option_C* OPT_ViewDistance;
    UOptions_FullScreen_Resolutions_C* Options_FullScreen_Resolutions;
    UOptions_FullScreen_UWP_C* Options_FullScreen_UWP;
    UOptions_GFX_Gamma_C* Options_GFX_Gamma;
    UOptions_GFX_HDR_Gamma_C* Options_GFX_HDR_Gamma;
    UOptions_GFX_MaxFPS_C* Options_GFX_MaxFPS;
    UOptions_GFX_Sharpening_C* Options_GFX_Sharpening;
    UOptions_HDR_C* Options_HDR;
    UOptions_Scalability_AntiAliasingType_C* Options_Scalability_AntiAliasingType;
    UOptions_Scalability_ResolutioScale_C* Options_Scalability_ResolutioScale;
    UOptions_Scalability_ViewDistance_C* Options_Scalability_ViewDistance;
    UBasic_MenuLabel_C* RestartWarning_Label;
    UOptions_DX12_C* UI_Option_DX12;
    UOptions_VSync_C* UI_Option_VSync;
    UOptions_Scalability_AntiAliasing_C* UI_Scalability_AntiAliasing;
    UOptions_Scalability_Effects_C* UI_Scalability_Effects;
    UOptions_Scalability_PostProcess_C* UI_Scalability_PostProcess;
    UOptions_Scalability_Shadows_C* UI_Scalability_Shadows;
    UOptions_Scalability_Textures_C* UI_Scalability_Textures;
    UOptions_Scalability_Overall_C* UI_Scalbility_Overall_189;
    FOptions_Tab_GFX_Steam_CSettingsChanged SettingsChanged;
    void SettingsChanged();

    void Construct();
    void UINeedsUpdate();
    void ShowOptions();
    void GraphicsOptionsChanged();
    void BndEvt__Basic_ButtonWithControls_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature();
    void OnDx12Enabled(bool NewValue);
    void SetBackToFullscreen();
    void ExecuteUbergraph_Options_Tab_GFX_Steam(int32 EntryPoint, GenericSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, GenericSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, EFSDTargetPlatform Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, ESlateVisibility Temp_byte_Variable_4, ESlateVisibility Temp_byte_Variable_5, EFSDTargetPlatform Temp_byte_Variable_6, ESlateVisibility Temp_byte_Variable_7, ESlateVisibility Temp_byte_Variable_8, ESlateVisibility Temp_byte_Variable_9, ESlateVisibility Temp_byte_Variable_10, ESlateVisibility Temp_byte_Variable_11, BoolConfigChanged__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, EFSDTargetPlatform Temp_byte_Variable_12, ESlateVisibility Temp_byte_Variable_13, ESlateVisibility Temp_byte_Variable_14, ESlateVisibility Temp_byte_Variable_15, ESlateVisibility Temp_byte_Variable_16, ESlateVisibility Temp_byte_Variable_17, EFSDTargetPlatform Temp_byte_Variable_18, ESlateVisibility Temp_byte_Variable_19, ESlateVisibility Temp_byte_Variable_20, ESlateVisibility Temp_byte_Variable_21, ESlateVisibility Temp_byte_Variable_22, ESlateVisibility Temp_byte_Variable_23, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, bool Temp_bool_Variable, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, ESlateVisibility Temp_byte_Variable_24, ESlateVisibility Temp_byte_Variable_25, EFSDTargetPlatform Temp_byte_Variable_26, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue_1, ESlateVisibility K2Node_Select_Default, ESlateVisibility K2Node_Select_Default_1, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, bool K2Node_CustomEvent_NewValue, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue_1, bool CallFunc_IsDx12Enabled_ReturnValue, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue_2, bool CallFunc_EqualEqual_BoolBool_ReturnValue, ESlateVisibility K2Node_Select_Default_2, ESlateVisibility K2Node_Select_Default_3, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue_3, ESlateVisibility K2Node_Select_Default_4, UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue_1, UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue_2, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue_2, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue, bool K2Node_Select_Default_5);
    void SettingsChanged__DelegateSignature();
}

#endif
