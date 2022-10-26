#ifndef UE4SS_SDK_Options_Language_HPP
#define UE4SS_SDK_Options_Language_HPP

class UOptions_Language_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_OptionSwitcher_C* Basic_OptionSwitcher;
    class UUI_AdvancedLabel_C* WorkInProgress;
    TArray<FString> Locales;
    TArray<FLocalizedLanguageInfo> Languages;
    FOptions_Language_COnLanguageChanged OnLanguageChanged;
    void OnLanguageChanged(FLocalizedLanguageInfo Selected Language);
    TArray<FString> FullySupportedLanguagesSteam;
    TArray<FString> FullySupportedLanguagesMS;
    TArray<FString> FullySupportedLanguagesPS;

    void UpdateWorkInProgressLabel(FString languageCode);
    TArray<FLocalizedLanguageInfo> GetFilteredLanguages();
    FText GetLanguageName(FString InName, FString InCode);
    void Construct();
    void UINeedsUpdate();
    void BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature(FText Value, int32 Index);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_Options_Language(int32 EntryPoint);
    void OnLanguageChanged__DelegateSignature(FLocalizedLanguageInfo Selected Language);
};

#endif
