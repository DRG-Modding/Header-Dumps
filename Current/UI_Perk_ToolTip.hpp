#ifndef UE4SS_SDK_UI_Perk_ToolTip_HPP
#define UE4SS_SDK_UI_Perk_ToolTip_HPP

class UUI_Perk_ToolTip_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* FadeIntro;
    class UWidgetAnimation* FancyIntro;
    class UBorder* Border_BG;
    class UHorizontalBox* CostBox;
    class UTextBlock* CostText;
    class UImage* Image_107;
    class URichTextSizable* PerkDescriptionRich;
    class UTextBlock* Perktitle;
    class UCanvasPanel* RootCanvas;
    class UUI_PerkIcon_C* UI_PerkIcon;
    class UUI_Perks_Item_C* PerkWidget;
    class UPerkAsset* PerkAsset;
    int32 Rank;
    int32 Tier;
    FTimerHandle DelayTimer;

    void OnPerkClaimed_Event(class UPerkAsset* Perk, int32 ClaimedTier);
    void SetPerkAsset(class UPerkAsset* PerkAsset, int32 Rank, bool ShowRank);
    void KPI_Intro();
    void Equip_Intro();
    void Show Rank(bool InShowRank);
    void Reset_Animations();
    void AfterFancyDelay();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_Perk_ToolTip(int32 EntryPoint);
};

#endif
