#ifndef UE4SS_SDK_Options_MouseY_Sensitivity_HPP
#define UE4SS_SDK_Options_MouseY_Sensitivity_HPP

class UOptions_MouseY_Sensitivity_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBorder* BaseMid;
    UBasic_Slider_C* Basic_Slider;
    UHorizontalBox* ManualSensitivityInput;
    USpinBox* SensitivityInput;
    UButton* ToggleManualinput;
    UTextBlock* TXT_ButtonText;
    UWidgetSwitcher* WidgetSwitcher_207;
    bool UseSpinboxInput;
    int32 CurrentSpinboxValue;

    void Construct();
    void UINeedsUpdate();
    void ShowOptions();
    void BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(float Value);
    void BndEvt__SensitivityInput_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__Button_152_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_Options_MouseY_Sensitivity(int32 EntryPoint, GenericSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue, UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue_1, float CallFunc_GetMouseYSensitivity_ReturnValue, bool CallFunc_GetUseSeparateSensitivity_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float K2Node_ComponentBoundEvent_Value, float K2Node_ComponentBoundEvent_InValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue_2, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_2, int32 CallFunc_Conv_BoolToInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, FText CallFunc_GetText_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue);
}

#endif
