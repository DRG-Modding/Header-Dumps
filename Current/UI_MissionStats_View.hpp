#ifndef UE4SS_SDK_UI_MissionStats_View_HPP
#define UE4SS_SDK_UI_MissionStats_View_HPP

class UUI_MissionStats_View_C : public UUI_KPI_Tab_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_1;
    class UBasic_ScrollBarBox_C* Basic_ScrollBarBox;
    class UVerticalBox* Header;
    class UUI_MissionStat_Preview_C* MissionStat_Preview;
    class USpacer* Spacer_Left;
    class USpacer* Spacer_middle;
    class USpacer* Spacer_Right;
    class UVerticalBox* StatsParent;
    class UTextBlock* StatTitle;
    class UUI_MissionStats_Categories_C* UI_MissionStats_Categories;
    class UVerticalBox* VerticalParent;
    TArray<class UUI_MissionStats_Item_C*> MissionStatLines;
    TArray<class UMissionStat*> StoreModeStats;
    class UUI_MissionStats_Item_C* SelectedLine;
    bool StoreMode;
    float StoreModePause;
    TArray<class UTexture2D*> CategoryIcons;
    TArray<class UTexture2D*> CategoryFilter;
    FTimerHandle StoreModeTimer;

    void NextStoreMode();
    void SortStats(TArray<class UMissionStat*>& InStats, TArray<class UTexture2D*>& Categories, TArray<class UMissionStat*>& Sorted Stats);
    void GetMissionStats(TArray<class UMissionStat*>& Assets);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Set Selected Item(class UUI_MissionStats_Item_C* SelectedLine);
    void OnHoverBegin_Event(class UUI_MissionStats_Item_C* Sender);
    void OnHoverEnd_Event(class UUI_MissionStats_Item_C* Sender);
    void Setup Category Selection();
    void OnCategorySelectionChanged();
    void ExecuteUbergraph_UI_MissionStats_View(int32 EntryPoint);
};

#endif
