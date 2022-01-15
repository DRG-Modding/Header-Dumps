#ifndef UE4SS_SDK_ITM_Craft_ResourceBig_HPP
#define UE4SS_SDK_ITM_Craft_ResourceBig_HPP

class UITM_Craft_ResourceBig_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_ResourceIcon_C* Basic_ResourceIcon;
    UTextBlock* DATAAmount;
    UTextBlock* DataName;
    UResourceData* Resource;
    float Amount;

    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_Craft_ResourceBig(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetOwnedAmount_ReturnValue, FText CallFunc_TextToUpper_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, FText CallFunc_Conv_FloatToText_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor K2Node_Select_Default, FSlateColor K2Node_MakeStruct_SlateColor);
}

#endif
