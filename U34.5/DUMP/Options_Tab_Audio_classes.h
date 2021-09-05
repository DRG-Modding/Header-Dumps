// WidgetBlueprintGeneratedClass Options_Tab_Audio.Options_Tab_Audio_C
// Size: 0x310 (Inherited: 0x230)
struct UOptions_Tab_Audio_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_Option_C* Basic_Option; // 0x238(0x08)
	UBasic_Option_C* Basic_Option_1; // 0x240(0x08)
	UBasic_Option_C* Basic_Option_2; // 0x248(0x08)
	UBasic_Option_C* Basic_Option_3; // 0x250(0x08)
	UBasic_Option_C* Basic_Option_4; // 0x258(0x08)
	UBasic_Option_C* Basic_Option_C_1; // 0x260(0x08)
	UBasic_Option_C* Basic_Option_C_2; // 0x268(0x08)
	UBasic_Option_C* Basic_Option_MissionControl; // 0x270(0x08)
	UBasic_Option_C* ChooseAudioInputSource; // 0x278(0x08)
	UBasic_Option_C* ChooseAudioOutputSource; // 0x280(0x08)
	UBasic_Option_C* DisableJukeboxMusic; // 0x288(0x08)
	UBasic_Option_C* DisableMasterEQ; // 0x290(0x08)
	UOptions_DisableJukeboxMusic_C* Options_DisableJukeboxMusic; // 0x298(0x08)
	UOptions_DisableMasterEQ_C* Options_DisableMasterEQ; // 0x2a0(0x08)
	UOptions_InputAudioSource_C* Options_InputAudioSource; // 0x2a8(0x08)
	UOptions_VolumeSlider_C* Options_MissionControl; // 0x2b0(0x08)
	UOptions_OutputAudioSource_C* Options_OutputAudioSource; // 0x2b8(0x08)
	UOptions_PushToTalk_C* Options_PushToTalk; // 0x2c0(0x08)
	UOptions_VoiceChat_C* Options_VoiceChat_C_1; // 0x2c8(0x08)
	UOptions_VolumeSlider_C* Options_VolumeSlider_C_3; // 0x2d0(0x08)
	UOptions_VolumeSlider_C* Volume_Characters; // 0x2d8(0x08)
	UOptions_VolumeSlider_C* Volume_Master; // 0x2e0(0x08)
	UOptions_VolumeSlider_C* Volume_Music; // 0x2e8(0x08)
	UOptions_VolumeSlider_C* Volume_SFX; // 0x2f0(0x08)
	FMulticastInlineDelegate SettingsChanged; // 0x2f8(0x10)
	UOptions_VolumeSlider_C* Volume_CharacterVoices; // 0x308(0x08)

	void Construct();
	void UINeedsUpdate();
	void ShowOptions();
	void ExecuteUbergraph_Options_Tab_Audio(int32_t EntryPoint);
	void SettingsChanged__DelegateSignature();
};

