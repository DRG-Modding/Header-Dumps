#ifndef UE4SS_SDK_UI_Bar_DrinkCostPrice_HPP
#define UE4SS_SDK_UI_Bar_DrinkCostPrice_HPP

class UUI_Bar_DrinkCostPrice_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_ResourceIcon_C* Basic_ResourceIcon;
    class UTextBlock* DATAAmount;
    class USizeBox* SizeBox_Height;
    class UResourceData* Resource;
    float Amount;
    float Height;

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_UI_Bar_DrinkCostPrice(int32 EntryPoint, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_IsDesignTime, FText CallFunc_Conv_FloatToText_ReturnValue, float CallFunc_GetOwnedAmount_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor K2Node_Select_Default, FSlateColor K2Node_MakeStruct_SlateColor);
};

#endif
