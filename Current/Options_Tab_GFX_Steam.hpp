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
    class UBasic_Option_C* OPT_Bloom;
    class UBasic_Option_C* OPT_DX12;
    class UBasic_Option_C* OPT_Effects;
    class UOptions_FullScreen_C* OPT_FullScreen;
    class UBasic_Option_C* OPT_Gamma;
    class UBasic_Option_C* OPT_HDR;
    class UBasic_Option_C* OPT_HDR_Gamma;
    class UBasic_Option_C* OPT_LensFlare;
    class UBasic_Option_C* OPT_OverallQuality;
    class UBasic_Option_C* OPT_PostProcessing;
    class UBasic_Option_C* OPT_Reflex;
    class UBasic_Option_C* OPT_Resolution;
    class UBasic_Option_C* OPT_ScreenMode;
    class UBasic_Option_C* Opt_ScreenMode_UWP;
    class UBasic_Option_C* OPT_ShadowResolution;
    class UBasic_Option_C* OPT_Sharpening;
    class UBasic_Option_C* OPT_TextureResolution;
    class UBasic_Option_C* OPT_ViewDistance;
    class UOptions_Bloom_C* Options_Bloom;
    class UOptions_FullScreen_Resolutions_C* Options_FullScreen_Resolutions;
    class UOptions_FullScreen_UWP_C* Options_FullScreen_UWP;
    class UOptions_GFX_Gamma_C* Options_GFX_Gamma;
    class UOptions_GFX_HDR_Gamma_C* Options_GFX_HDR_Gamma;
    class UOptions_GFX_MaxFPS_C* Options_GFX_MaxFPS;
    class UOptions_GFX_Sharpening_C* Options_GFX_Sharpening;
    class UOptions_GFX_Upscaling_C* Options_GFX_Upscaling;
    class UOptions_HDR_C* Options_HDR;
    class UOptions_LensFlare_C* Options_LensFlare;
    class UOptions_Reflex_C* Options_Reflex;
    class UOptions_Scalability_AntiAliasingType_C* Options_Scalability_AntiAliasingType;
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
    void ExecuteUbergraph_Options_Tab_GFX_Steam(int32 EntryPoint);
    void SettingsChanged__DelegateSignature();
};

#endif
