#ifndef UE4SS_SDK_UI_PerkBackground_HPP
#define UE4SS_SDK_UI_PerkBackground_HPP

class UUI_PerkBackground_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* BackgroundBorder_Image;
    UImage* BackgroundFill_Image;
    UUI_MaskedCanvas_C* BackgroundMask_Canvas;
    USizeBox* BackgroundSize;
    UNamedSlot* IconContent;
    float Dimension;
    EPerkUsageType PerkType;
    FLinearColor FillColor;
    FLinearColor BorderColor;
    EPerkTierState PerkState;

    void FromPerk(UPerkAsset* InPerk, EPerkTierState InState, bool CallFunc_IsValid_ReturnValue, EPerkUsageType CallFunc_GetUsageType_ReturnValue);
    void SetPerkType(EPerkUsageType InType, EPerkTierState InState, EPerkUsageType Temp_byte_Variable, UTexture2D* Temp_object_Variable, UTexture2D* Temp_object_Variable_1, EPerkUsageType Temp_byte_Variable_1, UTexture2D* Temp_object_Variable_2, UTexture2D* Temp_object_Variable_3, FLinearColor CallFunc_PerkColorByState_OutBackground, FLinearColor CallFunc_PerkColorByState_OutBorder, FLinearColor CallFunc_PerkColorByState_OutIcon, UTexture2D* K2Node_Select_Default, UTexture2D* K2Node_Select_Default_1);
    void SetColors(FLinearColor InFillColor, FLinearColor InBorderColor);
    void SetDimensions(float InDimensions);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_PerkBackground(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
}

#endif
