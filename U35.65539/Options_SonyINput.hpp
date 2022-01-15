#ifndef UE4SS_SDK_Options_SonyINput_HPP
#define UE4SS_SDK_Options_SonyINput_HPP

class UOptions_SonyInput_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_ButtonWithControls_C* BTN_DualSense_ResetToDefaults;
    UBasic_ButtonWithControls_C* BTN_Motion_ResetToDefaults;
    UBasic_ButtonWithControls_C* BTN_Touch_ResetToDefaults;
    UVerticalBox* DualSense;
    UVerticalBox* MotionControl;
    UBasic_Option_C* OPT_AdaptiveTriggers;
    UBasic_Option_C* OPT_Motion_Speaker_CollectMinerals;
    UBasic_Option_C* OPT_Motion_Speaker_Flare;
    UBasic_Option_C* OPT_Motion_Speaker_Salute;
    UBasic_Option_C* OPT_Motion_XSens;
    UBasic_Option_C* OPT_Motion_YSens;
    UBasic_Option_C* OPT_MotionEnabled;
    UBasic_Option_C* OPT_MotionFlightcontrol;
    UBasic_Option_C* OPT_MotionSalute;
    UBasic_Option_C* OPT_MotionXMapping;
    UBasic_Option_C* OPT_Speaker;
    UBasic_Option_C* OPT_Speaker_MissionControl;
    UBasic_Option_C* OPT_Touch_Gesture;
    UBasic_Option_C* OPT_Touch_LightMode;
    UBasic_Option_C* OPT_Touch_TerrainScanner;
    UBasic_Option_C* OPT_Touch_TerrainScanner_Pinch;
    UBasic_Option_C* OPT_Touch_TerrainScanner_XSens;
    UBasic_Option_C* OPT_Touch_TerrainScanner_YSens;
    UOptions_SonyInputBoolOption_C* Options_SonyInputBoolOption;
    UOptions_SonyInputBoolOption_C* Options_SonyInputBoolOption_2;
    UOptions_SonyInputBoolOption_C* Options_SonyInputBoolOption_3;
    UOptions_SonyInputBoolOption_C* Options_SonyInputBoolOption_138;
    UOptions_SonyInputBoolOption_C* Options_SonyInputBoolOption_395;
    UOptions_SonyInputBoolOption_C* Options_SonyInputBoolOption_568;
    UOptions_SonyInputFloatOption_C* Options_SonyInputFloatOption;
    UOptions_SonyInputFloatOption_C* Options_SonyInputFloatOption_1;
    UOptions_SonyInputFloatOption_C* Options_SonyInputFloatOption_2;
    UOptions_SonyInputFloatOption_C* Options_SonyInputFloatOption_3;
    UOptions_SonyInputLightOption_C* Options_SonyInputLightOption;
    UOptions_SonyInputFloatOption_C* Options_SonyInputMotion;
    UOptions_SonyInputMotionAxisMappingOption_C* Options_SonyInputMotionAxisMappingOption;
    UOptions_SonyInputBoolOption_C* Options_SonyInputMotionFlightOption;
    UOptions_SonyInputBoolOption_C* Options_SonyInputMotionOption;
    UOptions_SonyInputBoolOption_C* Options_SonyInputMotionSalute;
    UOptions_SonyInputFloatOption_C* Options_SonySpeaker;
    UOptions_SonyInputBoolOption_C* Options_TouchTerrainScanner;
    UVerticalBox* Touchpad;
    FOptions_SonyInput_CSettingsChanged SettingsChanged;
    void SettingsChanged();

    void UpdateMotionVisibility(bool Index, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, ESlateVisibility K2Node_Select_Default);
    void UpdateSpeakerVisibility(bool Index, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, ESlateVisibility K2Node_Select_Default);
    void UpdateTerrainScannerVisibility(bool Index, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, ESlateVisibility K2Node_Select_Default);
    void Construct();
    void BndEvt__Options_SonyInputBoolOption_K2Node_ComponentBoundEvent_0_StateChanged__DelegateSignature(bool IsChecked);
    void BndEvt__Options_SonyInputBoolOption_1_K2Node_ComponentBoundEvent_1_StateChanged__DelegateSignature(bool IsChecked);
    void BndEvt__Options_SonyInputFloatOption_325_K2Node_ComponentBoundEvent_2_StateChanged__DelegateSignature(float NewValue);
    void BndEvt__BTN_Motion_ResetToDefaults_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
    void BndEvt__BTN_Touch_ResetToDefaults_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature();
    void BndEvt__BTN_DualSense_ResetToDefaults_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
    void ExecuteUbergraph_Options_SonyInput(int32 EntryPoint, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, ESlateVisibility Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue, ESlateVisibility Temp_byte_Variable_1, EFSDTargetPlatform Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, ESlateVisibility Temp_byte_Variable_4, ESlateVisibility Temp_byte_Variable_5, ESlateVisibility Temp_byte_Variable_6, ESlateVisibility Temp_byte_Variable_7, ESlateVisibility Temp_byte_Variable_8, ESlateVisibility Temp_byte_Variable_9, bool K2Node_ComponentBoundEvent_IsChecked_1, bool K2Node_ComponentBoundEvent_IsChecked, float K2Node_ComponentBoundEvent_NewValue, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue_1, ESlateVisibility K2Node_Select_Default, ESlateVisibility Temp_byte_Variable_10, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_2, EFSDTargetPlatform Temp_byte_Variable_11, bool CallFunc_IsValid_ReturnValue_3, ESlateVisibility K2Node_Select_Default_1, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5);
    void SettingsChanged__DelegateSignature();
}

#endif
