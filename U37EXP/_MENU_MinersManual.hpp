#ifndef UE4SS_SDK__MENU_MinersManual_HPP
#define UE4SS_SDK__MENU_MinersManual_HPP

class U_MENU_MinersManual_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* OnMMLoaded;
    class UWidgetAnimation* NewSection;
    class ULoreScreen_MinersManual_C* LoreScreen_MinersManual;
    class UScrollLIst_Category_Window_C* LoreScrollList;
    class UItm_MinersManual_TabsHeader_C* TabsMenu;
    class UVerticalBox* VB_LoreContentHolder;
    class ULoreScreen_Master_C* ContentScreen;
    bool MinersManualsObject;
    class UMinersManual* MinersManual;
    FText OverviewText;
    TMap<class EMinersManualSection, class FMM_ButtonInfo> MainButtons;
    TArray<EMinersManualSection> MainButtonOrder;
    EMinersManualSection SelectedSection;
    FText TempName;
    int32 TempButtonIndex;
    class UTexture2D* TempFrontImage;
    class UTexture2D* TempBackgroundImage;
    int32 SelectedIndex;
    FMM_ButtonInfo tempButton;
    EEnemyFamily LastCreatureFamily;
    class UEnemyID* GruntID;
    class UEnemyMinersManualData* TempEnemy;
    TArray<TSoftObjectPtr<UObject>> TempSoftRefs;

    void IsCreatureUnlocked(class UEnemyMinersManualData* enemy, bool& IsUnlocked);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void OpenPageInternal(EMinersManualSection Section, const TSoftClassPtr<ULoreScreenMasterWidget> page);
    void GetButtonInfoFromSoftPage(TSoftClassPtr<ULoreScreenMasterWidget> page, FMM_ButtonInfo& OutButton);
    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void SelectOverview();
    void LoadSinglePage(TSoftClassPtr<ULoreScreenMasterWidget> PageRef);
    void SelectResourcesPage(int32 Index);
    void SelectBiome(int32 Index);
    void SelectCreature(int32 Index);
    void SelectCombat(int32 Index);
    void SelectBasics(const int32 Index);
    void SelectMissionType(int32 Index);
    void OnLoaded_2761E01142014CAB4B0485B51F0A3566(class UObject* Loaded);
    void OnLoaded_E250F66347FD856DD4BCA4BD4C4E45E8(class UObject* Loaded);
    void OnLoaded_E250F66347FD856DD4BCA4BDAF081D51(class UObject* Loaded);
    void OnLoaded_2761E01142014CAB4B0485B52E4010C5(class UObject* Loaded);
    void OnLoaded_E250F66347FD856DD4BCA4BD7D04604B(class UObject* Loaded);
    void OnLoaded_2761E01142014CAB4B0485B5FC4C6DDF(class UObject* Loaded);
    void OnLoaded_268D15ED4E2079C066017E9C56F864BC(class UObject* Loaded);
    void OnLoaded_268D15ED4E2079C066017E9CF15F73D6(class UObject* Loaded);
    void OnLoaded_E250F66347FD856DD4BCA4BDC879A4A6(class UObject* Loaded);
    void OnLoaded_2761E01142014CAB4B0485B59B3DD428(class UObject* Loaded);
    void OnLoaded_268D15ED4E2079C066017E9CDF02186B(class UObject* Loaded);
    void OnLoaded_268D15ED4E2079C066017E9CF666E15C(class UObject* Loaded);
    void OnLoaded_268D15ED4E2079C066017E9C821EC396(class UObject* Loaded);
    void OnLoaded_268D15ED4E2079C066017E9C0BF30CCE(class UObject* Loaded);
    void SetLoreScreenContent(class ULoreScreen_Master_C* InWidget);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ButtonClicked(int32 Index);
    void SelectSection(EMinersManualSection Section, bool SelectFirst);
    void SelectPageFromObject(class UObject* IdentifyingObject);
    void SelectSinglePage(EMinersManualSinglePage page);
    void StepBack();
    void OpenFromSavegameID(EMinersManualSection Section, FGuid ID);
    void ExecuteUbergraph__MENU_MinersManual(int32 EntryPoint);
};

#endif
