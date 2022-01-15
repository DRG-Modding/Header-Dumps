#ifndef UE4SS_SDK_ITM_Craft_ResourceMedium_HPP
#define UE4SS_SDK_ITM_Craft_ResourceMedium_HPP

class UITM_Craft_ResourceMedium_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_ResourceIcon_C* Basic_ResourceIcon;
    UTextBlock* DATAAmount;
    UResourceData* Resource;
    float Amount;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_Craft_ResourceMedium(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool Temp_bool_Variable, FText CallFunc_Conv_FloatToText_ReturnValue, float CallFunc_GetOwnedAmount_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor K2Node_Select_Default, FSlateColor K2Node_MakeStruct_SlateColor);
}

#endif
