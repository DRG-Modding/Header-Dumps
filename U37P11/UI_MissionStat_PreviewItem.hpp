#ifndef UE4SS_SDK_UI_MissionStat_PreviewItem_HPP
#define UE4SS_SDK_UI_MissionStat_PreviewItem_HPP

class UUI_MissionStat_PreviewItem_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UUI_MaskedImage_C* ClassIcon;
    class UUI_MaskedImage_C* ClassIcon_BG;
    class UUI_MaskedImage_C* ClassIcon_BG_1;
    class UProgressBar* StatProgressBarVert;
    class UTextBlock* TitleText;
    class UTextBlock* ValueText;
    class UMissionStat* MissionStat;
    class UPlayerCharacterID* characterID;
    float TargetPct;
    float AnimTime;

    void PreConstruct(bool IsDesignTime);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void SetMissionStat(class UMissionStat* MissionStat);
    void ExecuteUbergraph_UI_MissionStat_PreviewItem(int32 EntryPoint);
};

#endif
