#ifndef UE4SS_SDK_Options_WeaponSway_HPP
#define UE4SS_SDK_Options_WeaponSway_HPP

class UOptions_WeaponSway_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Slider_C* Basic_Slider;

    void Construct();
    void UINeedsUpdate();
    void ShowUI();
    void BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_32_OnValueChanged__DelegateSignature(float Value);
    void ExecuteUbergraph_Options_WeaponSway(int32 EntryPoint);
};

#endif
