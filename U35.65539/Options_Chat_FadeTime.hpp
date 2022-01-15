#ifndef UE4SS_SDK_Options_Chat_FadeTime_HPP
#define UE4SS_SDK_Options_Chat_FadeTime_HPP

class UOptions_Chat_FadeTime_C : USoundClassWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Slider_C* Basic_Slider;
    FOptions_Chat_FadeTime_COnVolumeChanged OnVolumeChanged;
    void OnVolumeChanged(float Volume);

    void Construct();
    void BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_9_OnValueChanged__DelegateSignature(float Value);
    void ExecuteUbergraph_Options_Chat_FadeTime(int32 EntryPoint, UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue, UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue_1, float CallFunc_GetChatFadeTime_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, float K2Node_ComponentBoundEvent_Value);
    void OnVolumeChanged__DelegateSignature(float Volume);
}

#endif
