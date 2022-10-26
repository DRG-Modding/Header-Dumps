#ifndef UE4SS_SDK_Options_MouseX_Sensitivity_HPP
#define UE4SS_SDK_Options_MouseX_Sensitivity_HPP

class UOptions_MouseX_Sensitivity_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* BaseMid;
    class UBasic_Slider_C* Basic_Slider;
    class UHorizontalBox* ManualSensitivityInput;
    class USpinBox* SensitivityInput;
    class UButton* Togglemanualinput;
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
    void ExecuteUbergraph_Options_MouseX_Sensitivity(int32 EntryPoint);
};

#endif
