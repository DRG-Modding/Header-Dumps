#ifndef UE4SS_SDK_Options_SonyINput_HPP
#define UE4SS_SDK_Options_SonyINput_HPP

class UOptions_SonyInput_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_ButtonWithControls_C* BTN_DualSense_ResetToDefaults;
    class UBasic_ButtonWithControls_C* BTN_Motion_ResetToDefaults;
    class UBasic_ButtonWithControls_C* BTN_Touch_ResetToDefaults;
    class UVerticalBox* DualSense;
    class UVerticalBox* MotionControl;
    class UBasic_Option_C* OPT_AdaptiveTriggers;
    class UBasic_Option_C* OPT_Motion_Speaker_CollectMinerals;
    class UBasic_Option_C* OPT_Motion_Speaker_Flare;
    class UBasic_Option_C* OPT_Motion_Speaker_Salute;
    class UBasic_Option_C* OPT_Motion_XSens;
    class UBasic_Option_C* OPT_Motion_YSens;
    class UBasic_Option_C* OPT_MotionEnabled;
    class UBasic_Option_C* OPT_MotionFlightcontrol;
    class UBasic_Option_C* OPT_MotionPrecisionMode;
    class UBasic_Option_C* OPT_MotionSalute;
    class UBasic_Option_C* OPT_MotionXMapping;
    class UBasic_Option_C* OPT_Speaker;
    class UBasic_Option_C* OPT_Speaker_MissionControl;
    class UBasic_Option_C* OPT_Touch_Gesture;
    class UBasic_Option_C* OPT_Touch_LightMode;
    class UBasic_Option_C* OPT_Touch_TerrainScanner;
    class UBasic_Option_C* OPT_Touch_TerrainScanner_Pinch;
    class UBasic_Option_C* OPT_Touch_TerrainScanner_XSens;
    class UBasic_Option_C* OPT_Touch_TerrainScanner_YSens;
    class UOptions_SonyInputBoolOption_C* Options_SonyInputBoolOption;
    class UOptions_SonyInputBoolOption_C* Options_SonyInputBoolOption_2;
    class UOptions_SonyInputBoolOption_C* Options_SonyInputBoolOption_3;
    class UOptions_SonyInputBoolOption_C* Options_SonyInputBoolOption_138;
    class UOptions_SonyInputBoolOption_C* Options_SonyInputBoolOption_395;
    class UOptions_SonyInputBoolOption_C* Options_SonyInputBoolOption_568;
    class UOptions_SonyInputFloatOption_C* Options_SonyInputFloatOption;
    class UOptions_SonyInputFloatOption_C* Options_SonyInputFloatOption_1;
    class UOptions_SonyInputFloatOption_C* Options_SonyInputFloatOption_2;
    class UOptions_SonyInputFloatOption_C* Options_SonyInputFloatOption_3;
    class UOptions_SonyInputLightOption_C* Options_SonyInputLightOption;
    class UOptions_SonyInputFloatOption_C* Options_SonyInputMotion;
    class UOptions_SonyInputMotionAxisMappingOption_C* Options_SonyInputMotionAxisMappingOption;
    class UOptions_SonyInputBoolOption_C* Options_SonyInputMotionDirect;
    class UOptions_SonyInputBoolOption_C* Options_SonyInputMotionFlightOption;
    class UOptions_SonyInputBoolOption_C* Options_SonyInputMotionOption;
    class UOptions_SonyInputBoolOption_C* Options_SonyInputMotionSalute;
    class UOptions_SonyInputFloatOption_C* Options_SonySpeaker;
    class UOptions_SonyInputBoolOption_C* Options_TouchTerrainScanner;
    class UVerticalBox* Touchpad;
    FOptions_SonyInput_CSettingsChanged SettingsChanged;
    void SettingsChanged();

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
    void ExecuteUbergraph_Options_SonyInput(int32 EntryPoint);
    void SettingsChanged__DelegateSignature();
};

#endif
