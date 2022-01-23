#ifndef UE4SS_SDK_Options_UIScale_Slider_HPP
#define UE4SS_SDK_Options_UIScale_Slider_HPP

class UOptions_UIScale_Slider_C : public USoundClassWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Slider_C* Basic_Slider;
    FOptions_UIScale_Slider_COnVolumeChanged OnVolumeChanged;
    void OnVolumeChanged(float Volume);

    void Construct();
    void BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_9_OnValueChanged__DelegateSignature(float Value);
    void ExecuteUbergraph_Options_UIScale_Slider(int32 EntryPoint, class UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue, class UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue_1, float CallFunc_GetUIDPIScale_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, float K2Node_ComponentBoundEvent_Value);
    void OnVolumeChanged__DelegateSignature(float Volume);
};

#endif
