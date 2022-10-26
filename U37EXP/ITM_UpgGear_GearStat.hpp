#ifndef UE4SS_SDK_ITM_UpgGear_GearStat_HPP
#define UE4SS_SDK_ITM_UpgGear_GearStat_HPP

class UITM_UpgGear_GearStat_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* DATA_StatAmount;
    class UTextBlock* DATA_StatName;
    class UTextBlock* DATA_StatUpgrade;
    class UImage* Image_Background;
    FText StatName;
    FText StatValue;
    FText StatBaseValue;
    FText StatUpgradeValue;
    EItemPreviewStatus ItemPreviewStatus;
    FSlateFontInfo SpecialFont;
    FGearStatEntry GearStat;

    void SetGearStat(FGearStatEntry InStat);
    void SetData(FText InStatName, FText InStatValue, FText InStatBaseValue, FText InStatUpgradeValue, EItemPreviewStatus InItemPreviewStatus);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_UpgGear_GearStat(int32 EntryPoint);
};

#endif
