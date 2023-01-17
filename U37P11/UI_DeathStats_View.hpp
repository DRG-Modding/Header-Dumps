#ifndef UE4SS_SDK_UI_DeathStats_View_HPP
#define UE4SS_SDK_UI_DeathStats_View_HPP

class UUI_DeathStats_View_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_0;
    class UBasic_ScrollBarBox_C* Basic_ScrollBarBox;
    class UVerticalBox* Header;
    class UTextBlock* HealthInsuranceEvaluation;
    class UTextBlock* PlayerName;
    class UVerticalBox* StatsParent;
    class UTextBlock* TextBlock_0;
    class UTextBlock* TextBlock_1;
    class UVerticalBox* VerticalBox_3;
    TArray<class UUI_InfirmaryStats_Item_C*> MissionStatLines;
    TArray<class UMissionStat*> StoreModeStats;
    class UUI_InfirmaryStats_Item_C* SelectedLine;
    bool StoreMode;
    float StoreModePause;
    TArray<class UTexture2D*> CategoryIcons;
    TArray<class UTexture2D*> CategoryFilter;
    class AFSDPlayerController* OwningPlayer;
    bool StopStoreMode;
    class AFSDPlayerState* OwningState;
    bool Debug;

    void SortStats(TArray<class UMissionStat*>& InStats, TArray<class UTexture2D*>& Categories, TArray<class UMissionStat*>& Sorted Stats);
    void GetMissionStats(TArray<class UMissionStat*>& Assets);
    void Store Mode(int32 Index);
    void Set Selected Item(class UUI_InfirmaryStats_Item_C* SelectedLine);
    void SetStatsOwner(class AFSDPlayerState* Player State);
    void ChangeName(FString NewName);
    void ReBuild();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_DeathStats_View(int32 EntryPoint);
};

#endif
