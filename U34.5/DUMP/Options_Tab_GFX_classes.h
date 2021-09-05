// WidgetBlueprintGeneratedClass Options_Tab_GFX.Options_Tab_GFX_C
// Size: 0x390 (Inherited: 0x230)
struct UOptions_Tab_GFX_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_ButtonWithControls_C* Basic_ButtonWithControls; // 0x238(0x08)
	UBasic_Option_C* Basic_MaxFPS; // 0x240(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x248(0x08)
	UBasic_Option_C* Basic_Option_2; // 0x250(0x08)
	UBasic_Option_C* OPT_AAType; // 0x258(0x08)
	UBasic_Option_C* OPT_AntiAliasing; // 0x260(0x08)
	UBasic_Option_C* OPT_DX12; // 0x268(0x08)
	UBasic_Option_C* OPT_Effects; // 0x270(0x08)
	UOptions_FullScreen_C* OPT_FullScreen; // 0x278(0x08)
	UBasic_Option_C* OPT_Gamma; // 0x280(0x08)
	UBasic_Option_C* OPT_HDR; // 0x288(0x08)
	UBasic_Option_C* OPT_HDR_Gamma; // 0x290(0x08)
	UBasic_Option_C* OPT_OverallQuality; // 0x298(0x08)
	UBasic_Option_C* OPT_PostProcessing; // 0x2a0(0x08)
	UBasic_Option_C* OPT_Resolution; // 0x2a8(0x08)
	UBasic_Option_C* OPT_ResolutionScale; // 0x2b0(0x08)
	UBasic_Option_C* OPT_ScreenMode; // 0x2b8(0x08)
	UBasic_Option_C* Opt_ScreenMode_UWP; // 0x2c0(0x08)
	UBasic_Option_C* OPT_ShadowResolution; // 0x2c8(0x08)
	UBasic_Option_C* OPT_Sharpening; // 0x2d0(0x08)
	UBasic_Option_C* OPT_TextureResolution; // 0x2d8(0x08)
	UBasic_Option_C* OPT_ViewDistance; // 0x2e0(0x08)
	UOptions_FullScreen_Resolutions_C* Options_FullScreen_Resolutions; // 0x2e8(0x08)
	UOptions_FullScreen_UWP_C* Options_FullScreen_UWP; // 0x2f0(0x08)
	UOptions_GFX_Gamma_C* Options_GFX_Gamma; // 0x2f8(0x08)
	UOptions_GFX_HDR_Gamma_C* Options_GFX_HDR_Gamma; // 0x300(0x08)
	UOptions_GFX_MaxFPS_C* Options_GFX_MaxFPS; // 0x308(0x08)
	UOptions_GFX_Sharpening_C* Options_GFX_Sharpening; // 0x310(0x08)
	UOptions_HDR_C* Options_HDR; // 0x318(0x08)
	UOptions_Scalability_AntiAliasingType_C* Options_Scalability_AntiAliasingType; // 0x320(0x08)
	UOptions_Scalability_ResolutioScale_C* Options_Scalability_ResolutioScale; // 0x328(0x08)
	UOptions_Scalability_ViewDistance_C* Options_Scalability_ViewDistance; // 0x330(0x08)
	UBasic_MenuLabel_C* RestartWarning_Label; // 0x338(0x08)
	UOptions_DX12_C* UI_Option_DX12; // 0x340(0x08)
	UOptions_VSync_C* UI_Option_VSync; // 0x348(0x08)
	UOptions_Scalability_AntiAliasing_C* UI_Scalability_AntiAliasing; // 0x350(0x08)
	UOptions_Scalability_Effects_C* UI_Scalability_Effects; // 0x358(0x08)
	UOptions_Scalability_PostProcess_C* UI_Scalability_PostProcess; // 0x360(0x08)
	UOptions_Scalability_Shadows_C* UI_Scalability_Shadows; // 0x368(0x08)
	UOptions_Scalability_Textures_C* UI_Scalability_Textures; // 0x370(0x08)
	UOptions_Scalability_Overall_C* UI_Scalbility_Overall_190; // 0x378(0x08)
	FMulticastInlineDelegate SettingsChanged; // 0x380(0x10)

	void Construct();
	void UINeedsUpdate();
	void ShowOptions();
	void GraphicsOptionsChanged();
	void BndEvt__Basic_ButtonWithControls_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature();
	void OnDx12Enabled(bool NewValue);
	void SetBackToFullscreen();
	void ExecuteUbergraph_Options_Tab_GFX(int32_t EntryPoint);
	void SettingsChanged__DelegateSignature();
};

