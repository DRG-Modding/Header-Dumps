#ifndef UE4SS_SDK_Options_SoundOnChatMessage_HPP
#define UE4SS_SDK_Options_SoundOnChatMessage_HPP

class UOptions_SoundOnChatMessage_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_CheckBox_C* CheckBox;

    void Construct();
    void BndEvt__CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void ExecuteUbergraph_Options_SoundOnChatMessage(int32 EntryPoint, bool K2Node_ComponentBoundEvent_IsChecked, class UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue, class UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue_1, bool CallFunc_GetPlaySoundOnChatMessage_ReturnValue);
};

#endif
