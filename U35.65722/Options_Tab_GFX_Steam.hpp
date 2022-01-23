#ifndef UE4SS_SDK_Options_Tab_GFX_Steam_HPP
#define UE4SS_SDK_Options_Tab_GFX_Steam_HPP

class UOptions_Tab_GFX_Steam_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_ButtonWithControls_C* Basic_ButtonWithControls;
    class UBasic_Option_C* Basic_MaxFPS;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UBasic_Option_C* Basic_Option_1;
    class UBasic_Option_C* OPT_AAType;
    class UBasic_Option_C* OPT_AntiAliasing;
    class UBasic_Option_C* OPT_DX12;
    class UBasic_Option_C* OPT_Effects;
    class UOptions_FullScreen_C* OPT_FullScreen;
    class UBasic_Option_C* OPT_Gamma;
    class UBasic_Option_C* OPT_HDR;
    class UBasic_Option_C* OPT_HDR_Gamma;
    class UBasic_Option_C* OPT_OverallQuality;
    class UBasic_Option_C* OPT_PostProcessing;
    class UBasic_Option_C* OPT_Resolution;
    class UBasic_Option_C* OPT_ResolutionScale;
    class UBasic_Option_C* OPT_ScreenMode;
    class UBasic_Option_C* Opt_ScreenMode_UWP;
    class UBasic_Option_C* OPT_ShadowResolution;
    class UBasic_Option_C* OPT_Sharpening;
    class UBasic_Option_C* OPT_TextureResolution;
    class UBasic_Option_C* OPT_ViewDistance;
    class UOptions_FullScreen_Resolutions_C* Options_FullScreen_Resolutions;
    class UOptions_FullScreen_UWP_C* Options_FullScreen_UWP;
    class UOptions_GFX_Gamma_C* Options_GFX_Gamma;
    class UOptions_GFX_HDR_Gamma_C* Options_GFX_HDR_Gamma;
    class UOptions_GFX_MaxFPS_C* Options_GFX_MaxFPS;
    class UOptions_GFX_Sharpening_C* Options_GFX_Sharpening;
    class UOptions_HDR_C* Options_HDR;
    class UOptions_Scalability_AntiAliasingType_C* Options_Scalability_AntiAliasingType;
    class UOptions_Scalability_ResolutioScale_C* Options_Scalability_ResolutioScale;
    class UOptions_Scalability_ViewDistance_C* Options_Scalability_ViewDistance;
    class UBasic_MenuLabel_C* RestartWarning_Label;
    class UOptions_DX12_C* UI_Option_DX12;
    class UOptions_VSync_C* UI_Option_VSync;
    class UOptions_Scalability_AntiAliasing_C* UI_Scalability_AntiAliasing;
    class UOptions_Scalability_Effects_C* UI_Scalability_Effects;
    class UOptions_Scalability_PostProcess_C* UI_Scalability_PostProcess;
    class UOptions_Scalability_Shadows_C* UI_Scalability_Shadows;
    class UOptions_Scalability_Textures_C* UI_Scalability_Textures;
    class UOptions_Scalability_Overall_C* UI_Scalbility_Overall_189;
    FOptions_Tab_GFX_Steam_CSettingsChanged SettingsChanged;
    void SettingsChanged();

    void Construct();
    void UINeedsUpdate();
    void ShowOptions();
    void GraphicsOptionsChanged();
    void BndEvt__Basic_ButtonWithControls_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature();
    void OnDx12Enabled(bool NewValue);
    void SetBackToFullscreen();
    void ExecuteUbergraph_Options_Tab_GFX_Steam(int32 EntryPoint, FExecuteUbergraph_Options_Tab_GFX_SteamK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_Options_Tab_GFX_SteamK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, EFSDTargetPlatform Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, ESlateVisibility Temp_byte_Variable_4, ESlateVisibility Temp_byte_Variable_5, EFSDTargetPlatform Temp_byte_Variable_6, ESlateVisibility Temp_byte_Variable_7, ESlateVisibility Temp_byte_Variable_8, ESlateVisibility Temp_byte_Variable_9, ESlateVisibility Temp_byte_Variable_10, ESlateVisibility Temp_byte_Variable_11, FExecuteUbergraph_Options_Tab_GFX_SteamK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, EFSDTargetPlatform Temp_byte_Variable_12, ESlateVisibility Temp_byte_Variable_13, ESlateVisibility Temp_byte_Variable_14, ESlateVisibility Temp_byte_Variable_15, ESlateVisibility Temp_byte_Variable_16, ESlateVisibility Temp_byte_Variable_17, EFSDTargetPlatform Temp_byte_Variable_18, ESlateVisibility Temp_byte_Variable_19, ESlateVisibility Temp_byte_Variable_20, ESlateVisibility Temp_byte_Variable_21, ESlateVisibility Temp_byte_Variable_22, ESlateVisibility Temp_byte_Variable_23, FExecuteUbergraph_Options_Tab_GFX_SteamK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3, bool Temp_bool_Variable, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, ESlateVisibility Temp_byte_Variable_24, ESlateVisibility Temp_byte_Variable_25, EFSDTargetPlatform Temp_byte_Variable_26, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue_1, ESlateVisibility K2Node_Select_Default, ESlateVisibility K2Node_Select_Default_1, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, bool K2Node_CustomEvent_NewValue, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue_1, bool CallFunc_IsDx12Enabled_ReturnValue, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue_2, bool CallFunc_EqualEqual_BoolBool_ReturnValue, ESlateVisibility K2Node_Select_Default_2, ESlateVisibility K2Node_Select_Default_3, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue_3, ESlateVisibility K2Node_Select_Default_4, class UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue_1, class UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue_2, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue_2, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue, bool K2Node_Select_Default_5);
    void SettingsChanged__DelegateSignature();
};

#endif
