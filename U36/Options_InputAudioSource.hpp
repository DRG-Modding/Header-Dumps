#ifndef UE4SS_SDK_Options_InputAudioSource_HPP
#define UE4SS_SDK_Options_InputAudioSource_HPP

class UOptions_InputAudioSource_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_OptionSwitcher_C* Basic_OptionSwitcher;
    class UBasic_Slider_C* MicAmplitudeSlider;
    FTimerHandle NewDevicesTimerHandle;
    int32 NumOfDevices;
    class UBasic_ToolTip_C* MicAmplitudeTooltip;
    FText CurrentDeviceName;

    class UWidget* GetMicAmplitudeSliderTooltip();
    void FillAudioDevices();
    void Construct();
    void UINeedsUpdate();
    void ShowOptions();
    void BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature(FText Value, int32 Index);
    void CheckForNewDevices();
    void Destruct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ReenableSlider();
    void ExecuteUbergraph_Options_InputAudioSource(int32 EntryPoint);
};

#endif
