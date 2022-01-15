#ifndef UE4SS_SDK_Options_Mic_Amplitude_HPP
#define UE4SS_SDK_Options_Mic_Amplitude_HPP

class UOptions_Mic_Amplitude_C : USoundClassWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Slider_C* Basic_Slider;

    void Construct();
    void PreConstruct(bool IsDesignTime);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_Options_Mic_Amplitude(int32 EntryPoint, bool K2Node_Event_IsDesignTime, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, float CallFunc_GetCurrentAudioInputDeviceAmplitude_ReturnValue);
}

#endif
