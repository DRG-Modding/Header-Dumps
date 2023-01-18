#ifndef UE4SS_SDK_ITM_UpgGear_ResourceCounter_HPP
#define UE4SS_SDK_ITM_UpgGear_ResourceCounter_HPP

class UITM_UpgGear_ResourceCounter_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* ContentBox;
    class UTextBlock* DATAAmount;
    class UBasic_ResourceIcon_C* ResourceLeft;
    class UBasic_ResourceIcon_C* ResourceRight;
    class UResourceData* Resource;
    float Amount;
    float RequiredAmount;
    bool IconOnRight;
    class UBasic_ToolTip_C* ToolTip;
    bool ShowRequiredAmount;
    int32 IconSize;

    void SetIconSize(int32 InSize);
    void SetCanAfford(bool IsAffordable);
    void SetResourceData(class UResourceData* InResource, float InAmount, float InRequiredAmount, bool InShowRequiredAmount);
    void PreConstruct(bool IsDesignTime);
    void UpdateAmount(float InAmount);
    void ExecuteUbergraph_ITM_UpgGear_ResourceCounter(int32 EntryPoint);
};

#endif
