#ifndef UE4SS_SDK_Options_FOV_HPP
#define UE4SS_SDK_Options_FOV_HPP

class UOptions_FOV_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Slider_C* Basic_Slider;

    void Construct();
    void UINeedsUpdate();
    void ShowUI();
    void BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_32_OnValueChanged__DelegateSignature(float Value);
    void ExecuteUbergraph_Options_FOV(int32 EntryPoint);
};

#endif
