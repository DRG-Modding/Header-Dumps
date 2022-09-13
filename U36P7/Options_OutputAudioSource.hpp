#ifndef UE4SS_SDK_Options_OutputAudioSource_HPP
#define UE4SS_SDK_Options_OutputAudioSource_HPP

class UOptions_OutputAudioSource_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* FadeOut;
    class UBasic_CheckBox_C* Basic_CheckBox;
    class UBasic_OptionSwitcher_C* Basic_OptionSwitcher;
    class UBlurBackground_C* ErrorBackground;
    class UTextBlock* ErrorText;
    TMap<class FString, class FString> AudioDevices;
    int32 NumOfDevices;
    FTimerHandle CheckForNewDevicesTimer;
    FString UserSetDeviceId;
    class UBasic_ToolTip_C* OptionSwitcherTooltip;

    class UWidget* GetToolTipWidget();
    void CheckForAudioDeviceFallback(FString DeviceID);
    void FillAudioDevices();
    void Construct();
    void UINeedsUpdate();
    void ShowOptions();
    void BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature(FText Value, int32 Index);
    void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void CheckForNewDevices();
    void Destruct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_Options_OutputAudioSource(int32 EntryPoint);
};

#endif
