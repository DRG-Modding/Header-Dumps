#ifndef UE4SS_SDK_ITM_DeepDives_ServerFilters_HPP
#define UE4SS_SDK_ITM_DeepDives_ServerFilters_HPP

class UITM_DeepDives_ServerFilters_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_CheckBox_C* AutoRefresh;
    UHorizontalBox* AutoRefreshBox;
    UBasic_RadioButton_C* Basic_RadioButton_Open;
    UBasic_RadioButton_C* Basic_RadioButton_Password;
    UBasic_RadioButton_C* Basic_RadioButton_SD_Close;
    UBasic_RadioButton_C* Basic_RadioButton_SD_Far;
    UBasic_RadioButton_C* Basic_RadioButton_SD_Medium;
    UBasic_RadioButton_C* Basic_RadioButton_SD_World;
    UBorder* BG_Filters;
    USizeBox* BoxSize;
    UBasic_ExpandableMenu_C* Filter_Distance;
    UFilter_ServerWorkEnvironment_C* Filter_HazardLevel;
    UFilter_ServerGameType_C* Filter_ServerGameType;
    UBasic_ExpandableMenu_C* Filter_ServerType;
    UBasic_TextInputField_C* Filter_TextSearch;
    UBorder* HeaderBorder;
    UTextBlock* TextDistanceClose;
    UTextBlock* TextDistanceFar;
    UTextBlock* TextDistanceMedium;
    UTextBlock* TextDistanceWorld;
    UTextBlock* TextOpenServerType;
    UTextBlock* TextPasswordServerType;
    float Width;
    bool ShowHeader;
    bool ShowTextFilter;
    bool ShowDistanceFilter;
    bool ShowHazardFilter;
    bool ShowServerTypeFilter;
    bool ShowAutoRefresh;
    FITM_DeepDives_ServerFilters_COnSearchFiltersChanged OnSearchFiltersChanged;
    void OnSearchFiltersChanged();
    FMargin Inner Padding;
    bool ServerSideFiltering;
    bool ShowGametypeFilter;

    void GetGametypeFilter(TArray<EGameType>& SelectedGametypes, TArray<EGameType>& CallFunc_GetSelectedGameTypes_Gametypes);
    void UpdatePasswordFilter(bool Temp_bool_Variable, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, FText CallFunc_GetText_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FText CallFunc_GetText_ReturnValue_1, FText K2Node_Select_Default);
    void GetAutoRefresh(bool& AutoRefresh, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, bool CallFunc_GetAutoRefreshServerlist_ReturnValue);
    void FilterSession(FBlueprintSessionResult InSession, bool& Should Filter, UDifficultySetting* CallFunc_FSDGetDifficulty_ReturnValue, bool CallFunc_IsDifficultySelected_Selected, bool CallFunc_Not_PreBool_ReturnValue, FText CallFunc_GetText_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue, FString CallFunc_FSDGetServerName_ReturnValue, FText CallFunc_GetText_ReturnValue_1, bool CallFunc_Contains_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_FSDIsSessionValid_ReturnValue);
    void IsDifficultySelected(UDifficultySetting* InDifficulty, bool& Selected, bool CallFunc_IsDifficultySelected_Selected);
    void UpdateSearchDistance(ESteamSearchRegion SearchRegion, TMap<UBasic_RadioButton_C*, ESteamSearchRegion> buttons, TMap<UBasic_RadioButton_C*, ESteamSearchRegion> K2Node_MakeVariable_MakeVariableOutput, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, ESteamSearchRegion Temp_byte_Variable, UTextBlock* K2Node_Select_Default, FText CallFunc_GetText_ReturnValue);
    FText GetTextFilter(FText CallFunc_GetText_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Filter_TextSearch_K2Node_ComponentBoundEvent_1_OnTextChanged__DelegateSignature(FText Text);
    void Construct();
    void BndEvt__Basic_RadioButton_SD_Close_K2Node_ComponentBoundEvent_2_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void BndEvt__Basic_RadioButton_SD_Far_K2Node_ComponentBoundEvent_3_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void BndEvt__Basic_RadioButton_SD_Medium_K2Node_ComponentBoundEvent_4_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void BndEvt__Basic_RadioButton_SD_World_K2Node_ComponentBoundEvent_5_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void BndEvt__Filter_HazardLevel_K2Node_ComponentBoundEvent_6_OnSelectionChanged__DelegateSignature();
    void BndEvt__AutoRefresh_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void RefreshSettings();
    void BndEvt__Basic_RadioButton_Open_K2Node_ComponentBoundEvent_7_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void BndEvt__Basic_RadioButton_Password_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void BndEvt__Filter_ServerGameType_K2Node_ComponentBoundEvent_9_OnSelectionChanged__DelegateSignature();
    void ExecuteUbergraph_ITM_DeepDives_ServerFilters(int32 EntryPoint, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, EFSDTargetPlatform Temp_byte_Variable, ESteamSearchRegion CallFunc_GetSteamSearchRegion_ReturnValue, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, EFSDTargetPlatform Temp_byte_Variable_1, bool Temp_bool_Variable_5, bool Temp_bool_Variable_6, bool Temp_bool_Variable_7, bool Temp_bool_Variable_8, bool Temp_bool_Variable_9, EFSDTargetPlatform Temp_byte_Variable_2, bool Temp_bool_Variable_10, bool Temp_bool_Variable_11, bool Temp_bool_Variable_12, bool Temp_bool_Variable_13, bool Temp_bool_Variable_14, bool K2Node_Event_IsDesignTime, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool CallFunc_SelectVisibility_IsVisible_1, bool CallFunc_SelectVisibility_VisibilityChanged_1, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_1, bool CallFunc_SelectVisibility_IsVisible_2, bool CallFunc_SelectVisibility_VisibilityChanged_2, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_2, bool CallFunc_SelectVisibility_IsVisible_3, bool CallFunc_SelectVisibility_VisibilityChanged_3, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_3, bool CallFunc_SelectVisibility_IsVisible_4, bool CallFunc_SelectVisibility_VisibilityChanged_4, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_4, FText K2Node_ComponentBoundEvent_Text, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, SteamSearchRegionDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool K2Node_ComponentBoundEvent_IsChecked_6, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, bool K2Node_ComponentBoundEvent_IsChecked_5, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_2, bool K2Node_ComponentBoundEvent_IsChecked_4, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_3, bool K2Node_ComponentBoundEvent_IsChecked_3, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_4, bool K2Node_ComponentBoundEvent_IsChecked_2, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue_1, bool CallFunc_GetAutoRefresh_AutoRefresh, bool K2Node_ComponentBoundEvent_IsChecked_1, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_5, bool K2Node_ComponentBoundEvent_IsChecked, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_6, FLinearColor CallFunc_MenuColors_OutputColor, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue_1, bool K2Node_Select_Default, bool K2Node_Select_Default_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_SelectVisibility_IsVisible_5, bool CallFunc_SelectVisibility_VisibilityChanged_5, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_5, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue_2, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue_2, bool K2Node_Select_Default_2, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_SelectVisibility_IsVisible_6, bool CallFunc_SelectVisibility_VisibilityChanged_6, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_6);
    void OnSearchFiltersChanged__DelegateSignature();
}

#endif
