// WidgetBlueprintGeneratedClass Options_Language.Options_Language_C
// Size: 0x2a8 (Inherited: 0x230)
struct UOptions_Language_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_OptionSwitcher_C* Basic_OptionSwitcher; // 0x238(0x08)
	UUI_AdvancedLabel_C* WorkInProgress; // 0x240(0x08)
	TArray<FString> Locales; // 0x248(0x10)
	TArray<FLocalizedLanguageInfo> Languages; // 0x258(0x10)
	FMulticastInlineDelegate OnLanguageChanged; // 0x268(0x10)
	TArray<FString> FullySupportedLanguagesSteam; // 0x278(0x10)
	TArray<FString> FullySupportedLanguagesMS; // 0x288(0x10)
	TArray<FString> FullySupportedLanguagesPS; // 0x298(0x10)

	void UpdateWorkInProgressLabel(FString languageCode);
	TArray<FLocalizedLanguageInfo> GetFilteredLanguages();
	FText GetLanguageName(FString InName, FString InCode);
	void Construct();
	void UINeedsUpdate();
	void BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature(FText Value, int32_t Index);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_Options_Language(int32_t EntryPoint);
	void OnLanguageChanged__DelegateSignature(FLocalizedLanguageInfo Selected Language);
};

