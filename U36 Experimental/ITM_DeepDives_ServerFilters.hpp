#ifndef UE4SS_SDK_ITM_DeepDives_ServerFilters_HPP
#define UE4SS_SDK_ITM_DeepDives_ServerFilters_HPP

class UITM_DeepDives_ServerFilters_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_CheckBox_C* AutoRefresh;
    class UHorizontalBox* AutoRefreshBox;
    class UBasic_RadioButton_C* Basic_RadioButton_Open;
    class UBasic_RadioButton_C* Basic_RadioButton_Password;
    class UBasic_RadioButton_C* Basic_RadioButton_SD_Close;
    class UBasic_RadioButton_C* Basic_RadioButton_SD_Far;
    class UBasic_RadioButton_C* Basic_RadioButton_SD_Medium;
    class UBasic_RadioButton_C* Basic_RadioButton_SD_World;
    class UBorder* BG_Filters;
    class USizeBox* BoxSize;
    class UBasic_ExpandableMenu_C* Filter_Distance;
    class UFilter_ServerWorkEnvironment_C* Filter_HazardLevel;
    class UFilter_ServerGameType_C* Filter_ServerGameType;
    class UBasic_ExpandableMenu_C* Filter_ServerType;
    class UBasic_TextInputField_C* Filter_TextSearch;
    class UBorder* HeaderBorder;
    class UTextBlock* TextDistanceClose;
    class UTextBlock* TextDistanceFar;
    class UTextBlock* TextDistanceMedium;
    class UTextBlock* TextDistanceWorld;
    class UTextBlock* TextOpenServerType;
    class UTextBlock* TextPasswordServerType;
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

    void GetGametypeFilter(TArray<EGameType>& SelectedGametypes);
    void UpdatePasswordFilter();
    void GetAutoRefresh(bool& AutoRefresh);
    void FilterSession(FBlueprintSessionResult InSession, bool& Should Filter);
    void IsDifficultySelected(class UDifficultySetting* InDifficulty, bool& Selected);
    void UpdateSearchDistance(ESteamSearchRegion SearchRegion);
    FText GetTextFilter();
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
    void ExecuteUbergraph_ITM_DeepDives_ServerFilters(int32 EntryPoint);
    void OnSearchFiltersChanged__DelegateSignature();
};

#endif
