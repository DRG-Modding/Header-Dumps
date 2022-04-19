#ifndef UE4SS_SDK_UI_MissionStat_Preview_HPP
#define UE4SS_SDK_UI_MissionStat_Preview_HPP

class UUI_MissionStat_Preview_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UTextBlock* StatTitle;
    class UUI_MissionStat_PreviewItem_C* UI_MissionStat_PreviewItem;
    class UUI_MissionStat_PreviewItem_C* UI_MissionStat_PreviewItem_1;
    class UUI_MissionStat_PreviewItem_C* UI_MissionStat_PreviewItem_2;
    class UUI_MissionStat_PreviewItem_C* UI_MissionStat_PreviewItem_3;
    class UVerticalBox* VerticalBox_85;
    class UMissionStat* PreviewMissionStat;
    class UMissionStat* MissionStat;
    TArray<class UUI_MissionStat_PreviewItem_C*> BarWidgets;
    FMargin NewVar_0;

    void Construct();
    void SetMissionStat(class UMissionStat* MissionStat);
    void ExecuteUbergraph_UI_MissionStat_Preview(int32 EntryPoint);
};

#endif
