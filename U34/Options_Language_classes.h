// WidgetBlueprintGeneratedClass Options_Language.Options_Language_C
// Size: 0x2a8 (Inherited: 0x230)
struct UOptions_Language_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_OptionSwitcher_C* Basic_OptionSwitcher; // 0x238(0x08)
	struct UUI_AdvancedLabel_C* WorkInProgress; // 0x240(0x08)
	struct TArray<struct FString> Locales; // 0x248(0x10)
	struct TArray<struct FLocalizedLanguageInfo> Languages; // 0x258(0x10)
	struct FMulticastInlineDelegate OnLanguageChanged; // 0x268(0x10)
	struct TArray<struct FString> FullySupportedLanguagesSteam; // 0x278(0x10)
	struct TArray<struct FString> FullySupportedLanguagesMS; // 0x288(0x10)
	struct TArray<struct FString> FullySupportedLanguagesPS; // 0x298(0x10)

	void UpdateWorkInProgressLabel(struct FString LanguageCode); // Function Options_Language.Options_Language_C.UpdateWorkInProgressLabel
	struct TArray<struct FLocalizedLanguageInfo> GetFilteredLanguages(); // Function Options_Language.Options_Language_C.GetFilteredLanguages
	struct FText GetLanguageName(struct FString InName, struct FString InCode); // Function Options_Language.Options_Language_C.GetLanguageName
	void Construct(); // Function Options_Language.Options_Language_C.Construct
	void UINeedsUpdate(); // Function Options_Language.Options_Language_C.UINeedsUpdate
	void BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature(struct FText Value, int32_t Index); // Function Options_Language.Options_Language_C.BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature
	void PreConstruct(bool IsDesignTime); // Function Options_Language.Options_Language_C.PreConstruct
	void ExecuteUbergraph_Options_Language(int32_t EntryPoint); // Function Options_Language.Options_Language_C.ExecuteUbergraph_Options_Language
	void OnLanguageChanged__DelegateSignature(struct FLocalizedLanguageInfo Selected Language); // Function Options_Language.Options_Language_C.OnLanguageChanged__DelegateSignature
};

