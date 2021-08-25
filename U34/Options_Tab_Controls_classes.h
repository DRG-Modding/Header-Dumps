// WidgetBlueprintGeneratedClass Options_Tab_Controls.Options_Tab_Controls_C
// Size: 0x370 (Inherited: 0x230)
struct UOptions_Tab_Controls_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_Option_C* Basic_Option_C_1; // 0x238(0x08)
	struct UBasic_Option_C* Basic_Option_C_2; // 0x240(0x08)
	struct UBasic_Option_C* Basic_Option_C_4; // 0x248(0x08)
	struct UBasic_ButtonWithControls_C* BTN_ResetToDefaults; // 0x250(0x08)
	struct UVerticalBox* KeyboardAndMouse; // 0x258(0x08)
	struct UBasic_Option_C* OPT_Con_AimAcceleration; // 0x260(0x08)
	struct UBasic_Option_C* OPT_Con_AimSensitivity; // 0x268(0x08)
	struct UBasic_Option_C* OPT_Con_ForceFeedback; // 0x270(0x08)
	struct UBasic_Option_C* OPT_Con_InnerDeadZone; // 0x278(0x08)
	struct UBasic_Option_C* OPT_Con_InvertY; // 0x280(0x08)
	struct UBasic_Option_C* OPT_PC_HoldToSprint; // 0x288(0x08)
	struct UBasic_Option_C* OPT_PC_InvertMouseWheel; // 0x290(0x08)
	struct UBasic_Option_C* OPT_PC_InvertMouseY; // 0x298(0x08)
	struct UBasic_Option_C* OPT_PC_MouseSensitivity; // 0x2a0(0x08)
	struct UBasic_Option_C* OPT_PC_MouseSmoothing; // 0x2a8(0x08)
	struct UBasic_Option_C* OPT_ToggleTerrainScanner; // 0x2b0(0x08)
	struct UOptions_Gamepad_CustomizeControls_C* Options_AllKeybindings_Controller; // 0x2b8(0x08)
	struct UOptions_Controller_AimAcceleration_Outer_C* Options_Controller_AimAcceleration_Outer; // 0x2c0(0x08)
	struct UOptions_Controller_AimDeadZone_C* Options_Controller_AimDeadZone; // 0x2c8(0x08)
	struct UOptions_Controller_AimSensitivity_C* Options_Controller_AimSensitivity; // 0x2d0(0x08)
	struct UOptions_Controller_ForceFeedbackScale_C* Options_Controller_ForceFeedbackScale; // 0x2d8(0x08)
	struct UOptions_Ctrl_InvertMouse_C* Options_Ctrl_InvertMouse; // 0x2e0(0x08)
	struct UOptions_Ctrl_InvertMouse_C* Options_Ctrl_InvertMouse_C_1; // 0x2e8(0x08)
	struct UOptions_DownedTurnDirection_C* Options_DownedTurnDirection; // 0x2f0(0x08)
	struct UOptions_DownedTurnDirection_C* Options_DownedTurnDirection_C_2; // 0x2f8(0x08)
	struct UOptions_GrapplingHookEquipPrevious_C* Options_GrapplingHookEquipPrevious; // 0x300(0x08)
	struct UOptions_HoldToSprint_C* Options_HoldToSprint; // 0x308(0x08)
	struct UOptions_InvertFlightControls_C* Options_InvertFlightControls; // 0x310(0x08)
	struct UOptions_InvertMouseWheel_C* Options_InvertMouseWheel_278; // 0x318(0x08)
	struct UOptions_Mouse_SeparateAxis_C* Options_Mouse_SeparateAxis; // 0x320(0x08)
	struct UOptions_MouseKeyboard_CustomizeControls_C* Options_MouseKeyboard_CustomizeControls; // 0x328(0x08)
	struct UOptions_MouseSmooting_C* Options_MouseSmooting; // 0x330(0x08)
	struct UOptions_MouseY_Sensitivity_C* Options_MouseY_Sensitivity; // 0x338(0x08)
	struct UOptions_ToggleLaserpointer_C* Options_ToggleLaserpointer; // 0x340(0x08)
	struct UOptions_ToggleTerrainScanner_C* Options_ToggleTerrainScanner; // 0x348(0x08)
	struct UOptions_ZiplineGunEquipPrevious_C* Options_ZiplineGunEquipPrevious; // 0x350(0x08)
	struct UOptions_MouseX_Sensitivity_C* UI_Sensitivity_173; // 0x358(0x08)
	struct FMulticastInlineDelegate SettingsChanged; // 0x360(0x10)

	void Construct(); // Function Options_Tab_Controls.Options_Tab_Controls_C.Construct
	void BndEvt__BTN_ResetToDefaults_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(); // Function Options_Tab_Controls.Options_Tab_Controls_C.BndEvt__BTN_ResetToDefaults_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	void ExecuteUbergraph_Options_Tab_Controls(int32_t EntryPoint); // Function Options_Tab_Controls.Options_Tab_Controls_C.ExecuteUbergraph_Options_Tab_Controls
	void SettingsChanged__DelegateSignature(); // Function Options_Tab_Controls.Options_Tab_Controls_C.SettingsChanged__DelegateSignature
};

