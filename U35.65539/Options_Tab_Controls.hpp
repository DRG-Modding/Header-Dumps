#ifndef UE4SS_SDK_Options_Tab_Controls_HPP
#define UE4SS_SDK_Options_Tab_Controls_HPP

class UOptions_Tab_Controls_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Option_C* Basic_Option_C_0;
    UBasic_Option_C* Basic_Option_C_1;
    UBasic_ButtonWithControls_C* BTN_ResetToDefaults;
    UVerticalBox* KeyboardAndMouse;
    UBasic_Option_C* OPT_Con_AimAcceleration;
    UBasic_Option_C* OPT_Con_AimSensitivity;
    UBasic_Option_C* OPT_Con_ForceFeedback;
    UBasic_Option_C* OPT_Con_InnerDeadZone;
    UBasic_Option_C* OPT_Con_InvertY;
    UBasic_Option_C* OPT_PC_HoldToSprint;
    UBasic_Option_C* OPT_PC_InvertMouseWheel;
    UBasic_Option_C* OPT_PC_InvertMouseY;
    UBasic_Option_C* OPT_PC_MouseSensitivity;
    UBasic_Option_C* OPT_PC_MouseSmoothing;
    UBasic_Option_C* OPT_ToggleLaser;
    UBasic_Option_C* OPT_ToggleTerrainScanner;
    UOptions_Gamepad_CustomizeControls_C* Options_AllKeybindings_Controller;
    UOptions_Controller_AimAcceleration_Outer_C* Options_Controller_AimAcceleration_Outer;
    UOptions_Controller_AimDeadZone_C* Options_Controller_AimDeadZone;
    UOptions_Controller_AimSensitivity_C* Options_Controller_AimSensitivity;
    UOptions_Controller_ForceFeedbackScale_C* Options_Controller_ForceFeedbackScale;
    UOptions_Ctrl_InvertMouse_C* Options_Ctrl_InvertMouse;
    UOptions_Ctrl_InvertMouse_C* Options_Ctrl_InvertMouse_C_0;
    UOptions_DownedTurnDirection_C* Options_DownedTurnDirection;
    UOptions_DownedTurnDirection_C* Options_DownedTurnDirection_C_1;
    UOptions_GrapplingHookEquipPrevious_C* Options_GrapplingHookEquipPrevious;
    UOptions_HoldToSprint_C* Options_HoldToSprint;
    UOptions_InvertFlightControls_C* Options_InvertFlightControls;
    UOptions_InvertMouseWheel_C* Options_InvertMouseWheel_277;
    UOptions_Mouse_SeparateAxis_C* Options_Mouse_SeparateAxis;
    UOptions_MouseKeyboard_CustomizeControls_C* Options_MouseKeyboard_CustomizeControls;
    UOptions_MouseSmooting_C* Options_MouseSmooting;
    UOptions_MouseY_Sensitivity_C* Options_MouseY_Sensitivity;
    UOptions_SonyInput_C* Options_SonyInput;
    UOptions_ToggleLaserpointer_C* Options_ToggleLaserpointer;
    UOptions_ToggleTerrainScanner_C* Options_ToggleTerrainScanner;
    UOptions_ZiplineGunEquipPrevious_C* Options_ZiplineGunEquipPrevious;
    UOptions_MouseX_Sensitivity_C* UI_Sensitivity_172;
    FOptions_Tab_Controls_CSettingsChanged SettingsChanged;
    void SettingsChanged();

    void Construct();
    void BndEvt__BTN_ResetToDefaults_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
    void ExecuteUbergraph_Options_Tab_Controls(int32 EntryPoint, EFSDTargetPlatform Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, ESlateVisibility Temp_byte_Variable_4, ESlateVisibility Temp_byte_Variable_5, EFSDTargetPlatform Temp_byte_Variable_6, ESlateVisibility Temp_byte_Variable_7, ESlateVisibility Temp_byte_Variable_8, ESlateVisibility Temp_byte_Variable_9, ESlateVisibility Temp_byte_Variable_10, ESlateVisibility Temp_byte_Variable_11, EFSDTargetPlatform Temp_byte_Variable_12, ESlateVisibility Temp_byte_Variable_13, ESlateVisibility Temp_byte_Variable_14, ESlateVisibility Temp_byte_Variable_15, ESlateVisibility Temp_byte_Variable_16, ESlateVisibility Temp_byte_Variable_17, UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, ESlateVisibility K2Node_Select_Default, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue_1, ESlateVisibility K2Node_Select_Default_1, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue_2, ESlateVisibility K2Node_Select_Default_2);
    void SettingsChanged__DelegateSignature();
}

#endif
