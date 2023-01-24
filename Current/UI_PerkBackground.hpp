#ifndef UE4SS_SDK_UI_PerkBackground_HPP
#define UE4SS_SDK_UI_PerkBackground_HPP

class UUI_PerkBackground_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* BackgroundBorder_Image;
    class UImage* BackgroundFill_Image;
    class UUI_MaskedCanvas_C* BackgroundMask_Canvas;
    class USizeBox* BackgroundSize;
    class UNamedSlot* IconContent;
    float Dimension;
    EPerkUsageType PerkType;
    FLinearColor FillColor;
    FLinearColor BorderColor;
    EPerkTierState PerkState;

    void FromPerk(class UPerkAsset* InPerk, EPerkTierState InState);
    void SetPerkType(EPerkUsageType InType, EPerkTierState InState);
    void SetColors(FLinearColor InFillColor, FLinearColor InBorderColor);
    void SetDimensions(float InDimensions);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_PerkBackground(int32 EntryPoint);
};

#endif
