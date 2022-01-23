#ifndef UE4SS_SDK_ITM_Biome_ResourceIcon_HPP
#define UE4SS_SDK_ITM_Biome_ResourceIcon_HPP

class UITM_Biome_ResourceIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_ResourceIcon_C* Basic_ResourceIcon;
    class UTextBlock* DATA_Amount;
    class UTextBlock* DATA_ResourceName;

    void SetData(class UResourceData* Resource, bool IsScarce);
    void ExecuteUbergraph_ITM_Biome_ResourceIcon(int32 EntryPoint, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable_1, FText Temp_text_Variable, FText Temp_text_Variable_1, class UResourceData* K2Node_CustomEvent_resource, bool K2Node_CustomEvent_IsScarce, bool CallFunc_IsValid_ReturnValue, FText K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_1, FText CallFunc_TextToUpper_ReturnValue, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default_1);
};

#endif
