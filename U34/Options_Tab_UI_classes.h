// WidgetBlueprintGeneratedClass Options_Tab_UI.Options_Tab_UI_C
// Size: 0x2e8 (Inherited: 0x230)
struct UOptions_Tab_UI_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_Option_C* Basic_Option_C_1; // 0x238(0x08)
	struct UBasic_Option_C* Basic_Option_C_2; // 0x240(0x08)
	struct UBasic_Option_C* OPT_FPScounter; // 0x248(0x08)
	struct UBasic_Option_C* OPT_NetInfo; // 0x250(0x08)
	struct UBasic_Option_C* OPT_ProfanityFilter; // 0x258(0x08)
	struct UBasic_Option_C* Opt_ShowInfoScreen; // 0x260(0x08)
	struct UBasic_Option_C* OPT_ShowUIAnimations; // 0x268(0x08)
	struct UBasic_Option_C* OPT_UIscale; // 0x270(0x08)
	struct UOptions_Chat_FadeTime_C* Options_Chat_FadeTime; // 0x278(0x08)
	struct UOptions_Chat_FontSize_C* Options_Chat_FontSize; // 0x280(0x08)
	struct UOptions_HUD_ElementPresets_C* Options_HUD_ElementPresets; // 0x288(0x08)
	struct UVerticalBox* Options_HudElements; // 0x290(0x08)
	struct UOptions_ProfanityFilter_C* Options_ProfanityFilter; // 0x298(0x08)
	struct UOptions_ShowFPS_C* Options_ShowFPS; // 0x2a0(0x08)
	struct UOptions_ShowInfoScreen_C* Options_ShowInfoScreen; // 0x2a8(0x08)
	struct UOptions_ShowNetInfo_C* Options_ShowNetInfo; // 0x2b0(0x08)
	struct UOptions_ShowUIAnimations_C* Options_ShowUIAnimations; // 0x2b8(0x08)
	struct UOptions_SoundOnChatMessage_C* Options_SoundOnChatMessage; // 0x2c0(0x08)
	struct UOptions_UIScale_Slider_C* Options_UIScale_Slider; // 0x2c8(0x08)
	struct UBasic_Option_C* PlaySoundOnChatMessage; // 0x2d0(0x08)
	struct FMulticastInlineDelegate SettingsChanged; // 0x2d8(0x10)

	void Construct(); // Function Options_Tab_UI.Options_Tab_UI_C.Construct
	void PreConstruct(bool IsDesignTime); // Function Options_Tab_UI.Options_Tab_UI_C.PreConstruct
	void OnIsUserGeneratedContentAllowed(struct APlayerState* CheckedPlayerState, enum class EBlueprintableUserPrivileges CheckedPrivilege, enum class EBlueprintablePrivilegeResults PrivilegeResult); // Function Options_Tab_UI.Options_Tab_UI_C.OnIsUserGeneratedContentAllowed
	void ExecuteUbergraph_Options_Tab_UI(int32_t EntryPoint); // Function Options_Tab_UI.Options_Tab_UI_C.ExecuteUbergraph_Options_Tab_UI
	void SettingsChanged__DelegateSignature(); // Function Options_Tab_UI.Options_Tab_UI_C.SettingsChanged__DelegateSignature
};

