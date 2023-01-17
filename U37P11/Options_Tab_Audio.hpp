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
    void ExecuteUbergraph_Options_Tab_Audio(int32 EntryPoint);
    void SettingsChanged__DelegateSignature();
};

#endif
