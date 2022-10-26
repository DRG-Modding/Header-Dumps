#ifndef UE4SS_SDK_UI_Perk_ToolTip_HPP
#define UE4SS_SDK_UI_Perk_ToolTip_HPP

class UUI_Perk_ToolTip_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* FadeIntro;
    class UWidgetAnimation* FancyIntro;
    class UImage* BackgroundShadow;
    class UBorder* Border_151;
    class UHorizontalBox* CostBox;
    class UTextBlock* CostText;
    class UImage* Image_107;
    class URichTextSizable* PerkDescriptionRich;
    class UTextBlock* Perktitle;
    class UUI_PerkIcon_C* UI_PerkIcon;
    class UUI_Perks_Item_C* PerkWidget;
    class UPerkAsset* PerkAsset;
    int32 Rank;
    int32 Tier;

    void PreConstruct(bool IsDesignTime);
    void OnPerkClaimed_Event(class UPerkAsset* Perk, int32 ClaimedTier);
    void SetPerkAsset(class UPerkAsset* PerkAsset, int32 Rank, bool ShowRank);
    void FancyDelayedIntro();
    void FadeInIntro();
    void Show Rank(bool InShowRank);
    void StopAnimations();
    void ExecuteUbergraph_UI_Perk_ToolTip(int32 EntryPoint);
};

#endif
