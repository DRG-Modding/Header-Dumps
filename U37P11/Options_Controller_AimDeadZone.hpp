#ifndef UE4SS_SDK_Options_Controller_AimDeadZone_HPP
#define UE4SS_SDK_Options_Controller_AimDeadZone_HPP

class UOptions_Controller_AimDeadZone_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Slider_C* Basic_Slider;

    void Construct();
    void UINeedsUpdate();
    void ShowOptions();
    void BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature(float Value);
    void ExecuteUbergraph_Options_Controller_AimDeadZone(int32 EntryPoint);
};

#endif
