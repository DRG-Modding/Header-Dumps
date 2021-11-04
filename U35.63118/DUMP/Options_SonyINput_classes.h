// WidgetBlueprintGeneratedClass Options_SonyINput.Options_SonyInput_C
// Size: 0x388 (Inherited: 0x230)
struct UOptions_SonyInput_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_ButtonWithControls_C* BTN_DualSense_ResetToDefaults; // 0x238(0x08)
	UBasic_ButtonWithControls_C* BTN_Motion_ResetToDefaults; // 0x240(0x08)
	UBasic_ButtonWithControls_C* BTN_Touch_ResetToDefaults; // 0x248(0x08)
	UVerticalBox* DualSense; // 0x250(0x08)
	UVerticalBox* MotionControl; // 0x258(0x08)
	UBasic_Option_C* OPT_AdaptiveTriggers; // 0x260(0x08)
	UBasic_Option_C* OPT_Motion_Speaker_CollectMinerals; // 0x268(0x08)
	UBasic_Option_C* OPT_Motion_Speaker_Flare; // 0x270(0x08)
	UBasic_Option_C* OPT_Motion_Speaker_Salute; // 0x278(0x08)
	UBasic_Option_C* OPT_Motion_XSens; // 0x280(0x08)
	UBasic_Option_C* OPT_Motion_YSens; // 0x288(0x08)
	UBasic_Option_C* OPT_MotionEnabled; // 0x290(0x08)
	UBasic_Option_C* OPT_MotionFlightcontrol; // 0x298(0x08)
	UBasic_Option_C* OPT_MotionXMapping; // 0x2a0(0x08)
	UBasic_Option_C* OPT_Speaker; // 0x2a8(0x08)
	UBasic_Option_C* OPT_Speaker_MissionControl; // 0x2b0(0x08)
	UBasic_Option_C* OPT_Touch_Gesture; // 0x2b8(0x08)
	UBasic_Option_C* OPT_Touch_LightMode; // 0x2c0(0x08)
	UBasic_Option_C* OPT_Touch_TerrainScanner; // 0x2c8(0x08)
	UBasic_Option_C* OPT_Touch_TerrainScanner_Pinch; // 0x2d0(0x08)
	UBasic_Option_C* OPT_Touch_TerrainScanner_XSens; // 0x2d8(0x08)
	UBasic_Option_C* OPT_Touch_TerrainScanner_YSens; // 0x2e0(0x08)
	UOptions_SonyInputBoolOption_C* Options_SonyInputBoolOption; // 0x2e8(0x08)
	UOptions_SonyInputBoolOption_C* Options_SonyInputBoolOption_3; // 0x2f0(0x08)
	UOptions_SonyInputBoolOption_C* Options_SonyInputBoolOption_4; // 0x2f8(0x08)
	UOptions_SonyInputBoolOption_C* Options_SonyInputBoolOption_139; // 0x300(0x08)
	UOptions_SonyInputBoolOption_C* Options_SonyInputBoolOption_396; // 0x308(0x08)
	UOptions_SonyInputBoolOption_C* Options_SonyInputBoolOption_569; // 0x310(0x08)
	UOptions_SonyInputFloatOption_C* Options_SonyInputFloatOption; // 0x318(0x08)
	UOptions_SonyInputFloatOption_C* Options_SonyInputFloatOption_2; // 0x320(0x08)
	UOptions_SonyInputFloatOption_C* Options_SonyInputFloatOption_3; // 0x328(0x08)
	UOptions_SonyInputFloatOption_C* Options_SonyInputFloatOption_4; // 0x330(0x08)
	UOptions_SonyInputLightOption_C* Options_SonyInputLightOption; // 0x338(0x08)
	UOptions_SonyInputFloatOption_C* Options_SonyInputMotion; // 0x340(0x08)
	UOptions_SonyInputMotionAxisMappingOption_C* Options_SonyInputMotionAxisMappingOption; // 0x348(0x08)
	UOptions_SonyInputBoolOption_C* Options_SonyInputMotionFlightOption; // 0x350(0x08)
	UOptions_SonyInputBoolOption_C* Options_SonyInputMotionOption; // 0x358(0x08)
	UOptions_SonyInputFloatOption_C* Options_SonySpeaker; // 0x360(0x08)
	UOptions_SonyInputBoolOption_C* Options_TouchTerrainScanner; // 0x368(0x08)
	UVerticalBox* Touchpad; // 0x370(0x08)
	FMulticastInlineDelegate SettingsChanged; // 0x378(0x10)

	void UpdateMotionVisibility(bool Index);
	void UpdateSpeakerVisibility(bool Index);
	void UpdateTerrainScannerVisibility(bool Index);
	void Construct();
	void BndEvt__Options_SonyInputBoolOption_K2Node_ComponentBoundEvent_0_StateChanged__DelegateSignature(bool IsChecked);
	void BndEvt__Options_SonyInputBoolOption_1_K2Node_ComponentBoundEvent_1_StateChanged__DelegateSignature(bool IsChecked);
	void BndEvt__Options_SonyInputFloatOption_325_K2Node_ComponentBoundEvent_2_StateChanged__DelegateSignature(float NewValue);
	void BndEvt__BTN_Motion_ResetToDefaults_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
	void BndEvt__BTN_Touch_ResetToDefaults_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature();
	void BndEvt__BTN_DualSense_ResetToDefaults_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
	void ExecuteUbergraph_Options_SonyInput(int32_t EntryPoint);
	void SettingsChanged__DelegateSignature();
};

