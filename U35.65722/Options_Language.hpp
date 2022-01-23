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

    void UpdateWorkInProgressLabel(FString languageCode, EFSDTargetPlatform Temp_byte_Variable, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility Temp_byte_Variable_2, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, TArray<FString>& K2Node_Select_Default, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, ESlateVisibility K2Node_Select_Default_1);
    TArray<FLocalizedLanguageInfo> GetFilteredLanguages(TArray<FLocalizedLanguageInfo> Localized Languages, TArray<FLocalizedLanguageInfo> ValidEntries, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<FLocalizedLanguageInfo>& K2Node_MakeArray_Array, FLocalizedLanguageInfo CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, TArray<FLocalizedLanguageInfo>& CallFunc_GetLocalizedLanguages_ReturnValue);
    FText GetLanguageName(FString InName, FString InCodebool CallFunc_EqualEqual_StriStri_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue_1);
    void Construct();
    void UINeedsUpdate();
    void BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature(FText Value, int32 Index);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_Options_Language(int32 EntryPoint, FExecuteUbergraph_Options_LanguageK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, FString CallFunc_GetCurrentLanguage_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, FText K2Node_ComponentBoundEvent_Value, int32 K2Node_ComponentBoundEvent_Index, bool CallFunc_GreaterEqual_IntInt_ReturnValue, FString CallFunc_Array_Get_Item, bool CallFunc_FSDSetCurrentLanguage_ReturnValue, bool CallFunc_IsPlayInEditor_ReturnValue, TArray<FLocalizedLanguageInfo>& CallFunc_GetFilteredLanguages_ReturnValue, FLocalizedLanguageInfo CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FText CallFunc_GetLanguageName_ReturnValue, int32 CallFunc_Add_Option_Index, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor);
    void OnLanguageChanged__DelegateSignature(FLocalizedLanguageInfo Selected Language);
};

#endif
