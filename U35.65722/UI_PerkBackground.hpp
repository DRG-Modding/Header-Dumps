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

    void FromPerk(class UPerkAsset* InPerk, EPerkTierState InState, bool CallFunc_IsValid_ReturnValue, EPerkUsageType CallFunc_GetUsageType_ReturnValue);
    void SetPerkType(EPerkUsageType InType, EPerkTierState InState, EPerkUsageType Temp_byte_Variable, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, EPerkUsageType Temp_byte_Variable_1, class UTexture2D* Temp_object_Variable_2, class UTexture2D* Temp_object_Variable_3, FLinearColor CallFunc_PerkColorByState_OutBackground, FLinearColor CallFunc_PerkColorByState_OutBorder, FLinearColor CallFunc_PerkColorByState_OutIcon, class UTexture2D* K2Node_Select_Default, class UTexture2D* K2Node_Select_Default_1);
    void SetColors(FLinearColor InFillColor, FLinearColor InBorderColor);
    void SetDimensions(float InDimensions);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_PerkBackground(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

#endif
