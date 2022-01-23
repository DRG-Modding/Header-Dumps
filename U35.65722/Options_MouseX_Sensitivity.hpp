#ifndef UE4SS_SDK_Options_MouseX_Sensitivity_HPP
#define UE4SS_SDK_Options_MouseX_Sensitivity_HPP

class UOptions_MouseX_Sensitivity_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* BaseMid;
    class UBasic_Slider_C* Basic_Slider;
    class UHorizontalBox* ManualSensitivityInput;
    class USpinBox* SensitivityInput;
    class UButton* ToggleManualinput;
    class UTextBlock* TXT_ButtonText;
    class UWidgetSwitcher* WidgetSwitcher_207;
    bool UseSpinboxInput;
    int32 CurrentSpinboxValue;

    void Construct();
    void UINeedsUpdate();
    void ShowOptions();
    void BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(float Value);
    void BndEvt__ToggleManualinput_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__SensitivityInput_K2Node_ComponentBoundEvent_3_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void ExecuteUbergraph_Options_MouseX_Sensitivity(int32 EntryPoint, FExecuteUbergraph_Options_MouseX_SensitivityK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, class UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue, class UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue_1, float CallFunc_GetMouseXSensitivity_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, float K2Node_ComponentBoundEvent_Value, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue_2, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_2, float K2Node_ComponentBoundEvent_InValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, int32 CallFunc_Conv_BoolToInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, FText CallFunc_GetText_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue);
};

#endif
