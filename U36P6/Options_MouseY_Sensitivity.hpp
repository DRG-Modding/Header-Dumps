#ifndef UE4SS_SDK_Options_MouseY_Sensitivity_HPP
#define UE4SS_SDK_Options_MouseY_Sensitivity_HPP

class UOptions_MouseY_Sensitivity_C : public UUserWidget
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
    void BndEvt__SensitivityInput_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__Button_152_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_Options_MouseY_Sensitivity(int32 EntryPoint);
};

#endif
