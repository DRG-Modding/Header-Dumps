#ifndef UE4SS_SDK_Options_GFX_MaxFPS_HPP
#define UE4SS_SDK_Options_GFX_MaxFPS_HPP

class UOptions_GFX_MaxFPS_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_CheckBox_C* Basic_CheckBox;
    class UBasic_Slider_C* Basic_Slider;

    void Construct();
    void UINeedsUpdate();
    void ShowOptions();
    void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(float Value);
    void ExecuteUbergraph_Options_GFX_MaxFPS(int32 EntryPoint);
};

#endif
