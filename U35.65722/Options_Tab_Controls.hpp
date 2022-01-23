#ifndef UE4SS_SDK_Options_Tab_Controls_HPP
#define UE4SS_SDK_Options_Tab_Controls_HPP

class UOptions_Tab_Controls_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Option_C* Basic_Option_C_0;
    class UBasic_Option_C* Basic_Option_C_1;
    class UBasic_ButtonWithControls_C* BTN_ResetToDefaults;
    class UVerticalBox* KeyboardAndMouse;
    class UBasic_Option_C* OPT_Con_AimAcceleration;
    class UBasic_Option_C* OPT_Con_AimSensitivity;
    class UBasic_Option_C* OPT_Con_ForceFeedback;
    class UBasic_Option_C* OPT_Con_InnerDeadZone;
    class UBasic_Option_C* OPT_Con_InvertY;
    class UBasic_Option_C* OPT_PC_HoldToSprint;
    class UBasic_Option_C* OPT_PC_InvertMouseWheel;
    class UBasic_Option_C* OPT_PC_InvertMouseY;
    class UBasic_Option_C* OPT_PC_MouseSensitivity;
    class UBasic_Option_C* OPT_PC_MouseSmoothing;
    class UBasic_Option_C* OPT_ToggleLaser;
    class UBasic_Option_C* OPT_ToggleTerrainScanner;
    class UOptions_Gamepad_CustomizeControls_C* Options_AllKeybindings_Controller;
    class UOptions_Controller_AimAcceleration_Outer_C* Options_Controller_AimAcceleration_Outer;
    class UOptions_Controller_AimDeadZone_C* Options_Controller_AimDeadZone;
    class UOptions_Controller_AimSensitivity_C* Options_Controller_AimSensitivity;
    class UOptions_Controller_ForceFeedbackScale_C* Options_Controller_ForceFeedbackScale;
    class UOptions_Ctrl_InvertMouse_C* Options_Ctrl_InvertMouse;
    class UOptions_Ctrl_InvertMouse_C* Options_Ctrl_InvertMouse_C_0;
    class UOptions_DownedTurnDirection_C* Options_DownedTurnDirection;
    class UOptions_DownedTurnDirection_C* Options_DownedTurnDirection_C_1;
    class UOptions_GrapplingHookEquipPrevious_C* Options_GrapplingHookEquipPrevious;
    class UOptions_HoldToSprint_C* Options_HoldToSprint;
    class UOptions_InvertFlightControls_C* Options_InvertFlightControls;
    class UOptions_InvertMouseWheel_C* Options_InvertMouseWheel_277;
    class UOptions_Mouse_SeparateAxis_C* Options_Mouse_SeparateAxis;
    class UOptions_MouseKeyboard_CustomizeControls_C* Options_MouseKeyboard_CustomizeControls;
    class UOptions_MouseSmooting_C* Options_MouseSmooting;
    class UOptions_MouseY_Sensitivity_C* Options_MouseY_Sensitivity;
    class UOptions_SonyInput_C* Options_SonyInput;
    class UOptions_ToggleLaserpointer_C* Options_ToggleLaserpointer;
    class UOptions_ToggleTerrainScanner_C* Options_ToggleTerrainScanner;
    class UOptions_ZiplineGunEquipPrevious_C* Options_ZiplineGunEquipPrevious;
    class UOptions_MouseX_Sensitivity_C* UI_Sensitivity_172;
    FOptions_Tab_Controls_CSettingsChanged SettingsChanged;
    void SettingsChanged();

    void Construct();
    void BndEvt__BTN_ResetToDefaults_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
    void ExecuteUbergraph_Options_Tab_Controls(int32 EntryPoint, EFSDTargetPlatform Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, ESlateVisibility Temp_byte_Variable_4, ESlateVisibility Temp_byte_Variable_5, EFSDTargetPlatform Temp_byte_Variable_6, ESlateVisibility Temp_byte_Variable_7, ESlateVisibility Temp_byte_Variable_8, ESlateVisibility Temp_byte_Variable_9, ESlateVisibility Temp_byte_Variable_10, ESlateVisibility Temp_byte_Variable_11, EFSDTargetPlatform Temp_byte_Variable_12, ESlateVisibility Temp_byte_Variable_13, ESlateVisibility Temp_byte_Variable_14, ESlateVisibility Temp_byte_Variable_15, ESlateVisibility Temp_byte_Variable_16, ESlateVisibility Temp_byte_Variable_17, class UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, ESlateVisibility K2Node_Select_Default, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue_1, ESlateVisibility K2Node_Select_Default_1, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue_2, ESlateVisibility K2Node_Select_Default_2);
    void SettingsChanged__DelegateSignature();
};

#endif
