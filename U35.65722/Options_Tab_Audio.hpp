#ifndef UE4SS_SDK_Options_Tab_Audio_HPP
#define UE4SS_SDK_Options_Tab_Audio_HPP

class UOptions_Tab_Audio_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Option_C* Basic_Option;
    class UBasic_Option_C* Basic_Option_0;
    class UBasic_Option_C* Basic_Option_1;
    class UBasic_Option_C* Basic_Option_C_1;
    class UBasic_Option_C* Basic_Option_MissionControl;
    class UBasic_Option_C* ChooseAudioInputSource;
    class UBasic_Option_C* ChooseAudioOutputSource;
    class UBasic_Option_C* DisableJukeboxMusic;
    class UBasic_Option_C* DisableMasterEQ;
    class UBasic_Option_C* OptionChatVolume;
    class UBasic_Option_C* OptionPushToTalk;
    class UOptions_DisableJukeboxMusic_C* Options_DisableJukeboxMusic;
    class UOptions_DisableMasterEQ_C* Options_DisableMasterEQ;
    class UOptions_InputAudioSource_C* Options_InputAudioSource;
    class UOptions_VolumeSlider_C* Options_MissionControl;
    class UOptions_OutputAudioSource_C* Options_OutputAudioSource;
    class UOptions_PushToTalk_C* Options_PushToTalk;
    class UOptions_VoiceChat_C* Options_VoiceChat_C_0;
    class UOptions_VolumeSlider_C* Options_VolumeSlider_C_2;
    class UBasic_Option_C* OptionVoiceChat;
    class UOptions_VolumeSlider_C* Volume_Characters;
    class UOptions_VolumeSlider_C* Volume_Master;
    class UOptions_VolumeSlider_C* Volume_Music;
    class UOptions_VolumeSlider_C* Volume_SFX;
    FOptions_Tab_Audio_CSettingsChanged SettingsChanged;
    void SettingsChanged();
    class UOptions_VolumeSlider_C* Volume_CharacterVoices;

    void Construct();
    void UINeedsUpdate();
    void ShowOptions();
    void ExecuteUbergraph_Options_Tab_Audio(int32 EntryPoint, EFSDTargetPlatform Temp_byte_Variable, FExecuteUbergraph_Options_Tab_AudioK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, ESlateVisibility Temp_byte_Variable_4, ESlateVisibility Temp_byte_Variable_5, EFSDTargetPlatform Temp_byte_Variable_6, ESlateVisibility Temp_byte_Variable_7, ESlateVisibility Temp_byte_Variable_8, ESlateVisibility Temp_byte_Variable_9, ESlateVisibility Temp_byte_Variable_10, ESlateVisibility Temp_byte_Variable_11, EFSDTargetPlatform Temp_byte_Variable_12, ESlateVisibility Temp_byte_Variable_13, ESlateVisibility Temp_byte_Variable_14, ESlateVisibility Temp_byte_Variable_15, ESlateVisibility Temp_byte_Variable_16, ESlateVisibility Temp_byte_Variable_17, EFSDTargetPlatform Temp_byte_Variable_18, ESlateVisibility Temp_byte_Variable_19, ESlateVisibility Temp_byte_Variable_20, ESlateVisibility Temp_byte_Variable_21, ESlateVisibility Temp_byte_Variable_22, ESlateVisibility Temp_byte_Variable_23, EFSDTargetPlatform Temp_byte_Variable_24, ESlateVisibility Temp_byte_Variable_25, ESlateVisibility Temp_byte_Variable_26, ESlateVisibility Temp_byte_Variable_27, ESlateVisibility Temp_byte_Variable_28, ESlateVisibility Temp_byte_Variable_29, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue_1, ESlateVisibility K2Node_Select_Default, ESlateVisibility K2Node_Select_Default_1, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue_2, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue_3, ESlateVisibility K2Node_Select_Default_2, ESlateVisibility K2Node_Select_Default_3, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue_4, ESlateVisibility K2Node_Select_Default_4);
    void SettingsChanged__DelegateSignature();
};

#endif
