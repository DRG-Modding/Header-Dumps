#ifndef UE4SS_SDK_UI_PerkIcon_HPP
#define UE4SS_SDK_UI_PerkIcon_HPP

class UUI_PerkIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USizeBox* IconSizeBox;
    class UImage* PerkIcon;
    class UTextBlock* PerkLevel;
    float ImageDimension;
    bool ShowPerkLevel;

    void SetPerkLevelVisibility(bool InVisible);
    void ShowPerkAs(class UPerkAsset* InPerk, FLinearColor InIconColor, int32 InRank);
    void ShowPerkByRank(class UPerkAsset* InPerk, int32 InRank);
    void ShowAs(class UTexture2D* InIconTexture, FLinearColor InIconColor, int32 InRank);
    void SetDimensions(float InDiminsions);
    void PreConstruct(bool IsDesignTime);
    void Set Perk Asset Last Claimed(class UPerkAsset* PerkAsset);
    void ExecuteUbergraph_UI_PerkIcon(int32 EntryPoint);
};

#endif
