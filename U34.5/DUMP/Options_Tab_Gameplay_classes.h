// WidgetBlueprintGeneratedClass Options_Tab_Gameplay.Options_Tab_Gameplay_C
// Size: 0x300 (Inherited: 0x230)
struct UOptions_Tab_Gameplay_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_Option_C* Basic_Option_C_1; // 0x238(0x08)
	UBasic_Option_C* Basic_Option_CameraShakes; // 0x240(0x08)
	UBasic_Option_C* Basic_Option_Photosensitivity; // 0x248(0x08)
	UUI_AdvancedLabel_C* CommunityLabel; // 0x250(0x08)
	UBasic_Option_C* OPT_FOV; // 0x258(0x08)
	UBasic_Option_C* OPT_HeadBOB; // 0x260(0x08)
	UBasic_Option_C* OPT_Language; // 0x268(0x08)
	UBasic_Option_C* OPT_LanguageDebug; // 0x270(0x08)
	UBasic_Option_C* OPT_PreventLatejoinCharacterDuplication; // 0x278(0x08)
	UBasic_Option_C* OPT_Servername; // 0x280(0x08)
	UBasic_Option_C* OPT_StreamerTag; // 0x288(0x08)
	UBasic_Option_C* OPT_TutorialHiints; // 0x290(0x08)
	UOptions_CameraShake_C* Options_CameraShake; // 0x298(0x08)
	UOptions_FOV_C* Options_FOV; // 0x2a0(0x08)
	UOptions_Headbob_C* Options_Headbob; // 0x2a8(0x08)
	UOptions_Language_C* Options_Language; // 0x2b0(0x08)
	UOptions_LocalizationDebug_C* Options_LocalizationDebug; // 0x2b8(0x08)
	UOptions_PhotosensitivityMode_C* Options_PhotosensitivityMode; // 0x2c0(0x08)
	UOptions_PreventLatejoinCharacterDuplication_C* Options_PreventLatejoinCharacterDuplication; // 0x2c8(0x08)
	UOptions_ShowSubtitles_C* Options_ShowSubtitles; // 0x2d0(0x08)
	UOptions_TutorialHints_C* Options_TutorialHints; // 0x2d8(0x08)
	UOptions_UseStreamerProgram_C* Options_UseStreamerProgram; // 0x2e0(0x08)
	UOptions_GameServerName_C* UI_GameServerName; // 0x2e8(0x08)
	FMulticastInlineDelegate SettingsChanged; // 0x2f0(0x10)

	void Construct();
	void BndEvt__Options_Language_K2Node_ComponentBoundEvent_1_OnLanguageChanged__DelegateSignature(FLocalizedLanguageInfo Selected Language);
	void ExecuteUbergraph_Options_Tab_Gameplay(int32_t EntryPoint);
	void SettingsChanged__DelegateSignature();
};

