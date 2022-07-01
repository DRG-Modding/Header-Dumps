#ifndef UE4SS_SDK_Options_Chat_FontSize_HPP
#define UE4SS_SDK_Options_Chat_FontSize_HPP

class UOptions_Chat_FontSize_C : public USoundClassWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Slider_C* Basic_Slider;
    FOptions_Chat_FontSize_COnVolumeChanged OnVolumeChanged;
    void OnVolumeChanged(float Volume);

    void Construct();
    void BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_9_OnValueChanged__DelegateSignature(float Value);
    void ExecuteUbergraph_Options_Chat_FontSize(int32 EntryPoint);
    void OnVolumeChanged__DelegateSignature(float Volume);
};

#endif
