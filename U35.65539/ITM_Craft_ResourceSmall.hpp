#ifndef UE4SS_SDK_ITM_Craft_ResourceSmall_HPP
#define UE4SS_SDK_ITM_Craft_ResourceSmall_HPP

class UITM_Craft_ResourceSmall_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_ResourceIcon_C* Basic_ResourceIcon;
    UTextBlock* DATAAmount;
    UResourceData* Resource;
    float Amount;

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_ITM_Craft_ResourceSmall(int32 EntryPoint, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_IsDesignTime, FText CallFunc_Conv_FloatToText_ReturnValue, float CallFunc_GetOwnedAmount_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor K2Node_Select_Default, FSlateColor K2Node_MakeStruct_SlateColor);
}

#endif
