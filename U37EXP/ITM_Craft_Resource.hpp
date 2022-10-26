#ifndef UE4SS_SDK_ITM_Craft_Resource_HPP
#define UE4SS_SDK_ITM_Craft_Resource_HPP

class UITM_Craft_Resource_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_ResourceIcon_C* Basic_ResourceIcon;
    class UBorder* Border_3;
    class UTextBlock* DATA_ResourceAmount;
    class UTextBlock* DATA_ResourceName;
    class UResourceData* ResourceData;
    bool AmountOverriden;
    TEnumAsByte<ENUM_MenuColors::Type> Text_TitleColor;
    TEnumAsByte<ENUM_MenuColors::Type> Text_PriceTitleColor;

    void OnResourceAmountChanged(class UResourceData* Resource, float currentAmount);
    void SetAmount(float Amount);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_ITM_Craft_Resource(int32 EntryPoint);
};

#endif
