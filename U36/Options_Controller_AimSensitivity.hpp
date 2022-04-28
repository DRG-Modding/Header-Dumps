#ifndef UE4SS_SDK_Options_Controller_AimSensitivity_HPP
#define UE4SS_SDK_Options_Controller_AimSensitivity_HPP

class UOptions_Controller_AimSensitivity_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Slider_C* Basic_Slider;

    void Construct();
    void UINeedsUpdate();
    void ShowOptions();
    void BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature(float Value);
    void ExecuteUbergraph_Options_Controller_AimSensitivity(int32 EntryPoint);
};

#endif
