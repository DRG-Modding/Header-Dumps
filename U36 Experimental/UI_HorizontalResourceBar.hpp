#ifndef UE4SS_SDK_UI_HorizontalResourceBar_HPP
#define UE4SS_SDK_UI_HorizontalResourceBar_HPP

class UUI_HorizontalResourceBar_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* NoResourcesLabel;
    class UHorizontalBox* ResourcesBox;
    bool IconsOnRight;
    int32 IconSize;
    bool ShowRequiredAmount;
    FText No Resources Text;
    FSlateFontInfo NoResourcesFont;
    TEnumAsByte<ENUM_MenuColors::Type> NoResourcesColor;
    TMap<class UResourceData*, class UITM_UpgGear_ResourceCounter_C*> ResourceWidgets;
    TMap<UResourceData*, int32> PreviewDict;

    void SetFromDict(TMap<UResourceData*, int32> InResources);
    void SetCraftingCost(TArray<FCraftingCost>& Cost, bool& OutCanAfford);
    void AddResource(class UResourceData* InResource, float InAmount, float InRequiredAmount);
    void Clear();
    void AddResourceCustom(class UResourceData* InResource, float InAmount, float InRequiredAmount, bool IconOnRight, bool ShowRequiredAmount);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_HorizontalResourceBar(int32 EntryPoint);
};

#endif
