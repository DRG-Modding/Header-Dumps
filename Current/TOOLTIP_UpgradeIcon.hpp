#ifndef UE4SS_SDK_TOOLTIP_UpgradeIcon_HPP
#define UE4SS_SDK_TOOLTIP_UpgradeIcon_HPP

class UTOOLTIP_UpgradeIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* ActionBorder;
    class UUI_AdvancedLabel_C* ActionLabel;
    class UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow;
    class UTextBlock* CategoryDescHeader;
    class UTextBlock* CategoryDescription;
    class UBorder* CategoryDescriptionBorder;
    class UUI_HorizontalResourceBar_C* CostBar;
    class UTextBlock* PreviewCategory;
    class UTextBlock* PreviewDescription;
    class UITM_BaseUpgradeIcon_C* PreviewIcon;
    class UTextBlock* PreviewName;
    class UUI_AdvancedLabel_C* ToggleDetailLabel;

    void SetAlignment(FVector2D InAlignment);
    void UpdateDetailVisibility();
    void Update(class UItemUpgradeCategory* Category, FText InUpgradeName, FText InUpgradeDescription, EItemUpgradeStatus InStatus, TArray<FCraftingCost>& InCost, bool InCanUnequip, bool ShowUpgradeStatus);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnShowUpgradeExtraDetailsChanged(bool NewValue);
    void ExecuteUbergraph_TOOLTIP_UpgradeIcon(int32 EntryPoint);
};

#endif
