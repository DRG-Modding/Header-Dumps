#ifndef UE4SS_SDK_ITM_Biome_ResourceIcon_HPP
#define UE4SS_SDK_ITM_Biome_ResourceIcon_HPP

class UITM_Biome_ResourceIcon_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_ResourceIcon_C* Basic_ResourceIcon;
    UTextBlock* DATA_Amount;
    UTextBlock* DATA_ResourceName;

    void SetData(UResourceData* Resource, bool IsScarce);
    void ExecuteUbergraph_ITM_Biome_ResourceIcon(int32 EntryPoint, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable_1, FText Temp_text_Variable, FText Temp_text_Variable_1, UResourceData* K2Node_CustomEvent_Resource, bool K2Node_CustomEvent_IsScarce, bool CallFunc_IsValid_ReturnValue, FText K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_1, FText CallFunc_TextToUpper_ReturnValue, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default_1);
}

#endif
