// WidgetBlueprintGeneratedClass Options_Tab_Gameplay.Options_Tab_Gameplay_C
// Size: 0x300 (Inherited: 0x230)
struct UOptions_Tab_Gameplay_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_Option_C* Basic_Option_C_1; // 0x238(0x08)
	struct UBasic_Option_C* Basic_Option_CameraShakes; // 0x240(0x08)
	struct UBasic_Option_C* Basic_Option_Photosensitivity; // 0x248(0x08)
	struct UUI_AdvancedLabel_C* CommunityLabel; // 0x250(0x08)
	struct UBasic_Option_C* OPT_FOV; // 0x258(0x08)
	struct UBasic_Option_C* OPT_HeadBOB; // 0x260(0x08)
	struct UBasic_Option_C* OPT_Language; // 0x268(0x08)
	struct UBasic_Option_C* OPT_LanguageDebug; // 0x270(0x08)
	struct UBasic_Option_C* OPT_PreventLatejoinCharacterDuplication; // 0x278(0x08)
	struct UBasic_Option_C* OPT_Servername; // 0x280(0x08)
	struct UBasic_Option_C* OPT_StreamerTag; // 0x288(0x08)
	struct UBasic_Option_C* OPT_TutorialHiints; // 0x290(0x08)
	struct UOptions_CameraShake_C* Options_CameraShake; // 0x298(0x08)
	struct UOptions_FOV_C* Options_FOV; // 0x2a0(0x08)
	struct UOptions_Headbob_C* Options_Headbob; // 0x2a8(0x08)
	struct UOptions_Language_C* Options_Language; // 0x2b0(0x08)
	struct UOptions_LocalizationDebug_C* Options_LocalizationDebug; // 0x2b8(0x08)
	struct UOptions_PhotosensitivityMode_C* Options_PhotosensitivityMode; // 0x2c0(0x08)
	struct UOptions_PreventLatejoinCharacterDuplication_C* Options_PreventLatejoinCharacterDuplication; // 0x2c8(0x08)
	struct UOptions_ShowSubtitles_C* Options_ShowSubtitles; // 0x2d0(0x08)
	struct UOptions_TutorialHints_C* Options_TutorialHints; // 0x2d8(0x08)
	struct UOptions_UseStreamerProgram_C* Options_UseStreamerProgram; // 0x2e0(0x08)
	struct UOptions_GameServerName_C* UI_GameServerName; // 0x2e8(0x08)
	struct FMulticastInlineDelegate SettingsChanged; // 0x2f0(0x10)

	void Construct(); // Function Options_Tab_Gameplay.Options_Tab_Gameplay_C.Construct
	void BndEvt__Options_Language_K2Node_ComponentBoundEvent_1_OnLanguageChanged__DelegateSignature(struct FLocalizedLanguageInfo Selected Language); // Function Options_Tab_Gameplay.Options_Tab_Gameplay_C.BndEvt__Options_Language_K2Node_ComponentBoundEvent_1_OnLanguageChanged__DelegateSignature
	void ExecuteUbergraph_Options_Tab_Gameplay(int32_t EntryPoint); // Function Options_Tab_Gameplay.Options_Tab_Gameplay_C.ExecuteUbergraph_Options_Tab_Gameplay
	void SettingsChanged__DelegateSignature(); // Function Options_Tab_Gameplay.Options_Tab_Gameplay_C.SettingsChanged__DelegateSignature
};

