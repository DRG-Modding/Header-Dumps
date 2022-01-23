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

    void SetIconSize(int32 InSize, float Scale, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, FMargin K2Node_MakeStruct_Margin, int32 CallFunc_Round_ReturnValue, class UBorderSlot* CallFunc_SlotAsBorderSlot_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1);
    void SetCanAfford(bool IsAffordable, bool Temp_bool_Variable, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_1, TEnumAsByte<ENUM_MenuColors::Type> K2Node_Select_Default, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor);
    void SetResourceData(class UResourceData* InResource, float InAmount, float InRequiredAmount, bool InShowRequiredAmount, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, class UBasic_ToolTip_C* CallFunc_CreateBasicToolTip_ToolTipWidget, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float K2Node_Select_Default, FText CallFunc_Conv_FloatToText_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void UpdateAmount(float InAmount);
    void ExecuteUbergraph_ITM_UpgGear_ResourceCounter(int32 EntryPoint, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, bool K2Node_Event_IsDesignTime, ESlateVisibility K2Node_Select_Default, ESlateVisibility K2Node_Select_Default_1, float K2Node_CustomEvent_InAmount);
};

#endif
