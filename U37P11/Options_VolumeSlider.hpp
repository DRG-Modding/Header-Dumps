#ifndef UE4SS_SDK_Options_VolumeSlider_HPP
#define UE4SS_SDK_Options_VolumeSlider_HPP

class UOptions_VolumeSlider_C : public USoundClassWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Slider_C* Basic_Slider;
    EVolumeType volumeType;

    void Construct();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature(float Value);
    void UINeedsUpdate();
    void Update Percentage Text();
    void ExecuteUbergraph_Options_VolumeSlider(int32 EntryPoint);
};

#endif
