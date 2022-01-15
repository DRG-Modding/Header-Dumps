#ifndef UE4SS_SDK_ITM_MisSel_ResourceIcon_HPP
#define UE4SS_SDK_ITM_MisSel_ResourceIcon_HPP

class UITM_MisSel_ResourceIcon_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_ResourceIcon_C* Basic_ResourceIcon;
    UTextBlock* DATA_ResourceName;

    void SetData(UResourceData* Resource);
    void ExecuteUbergraph_ITM_MisSel_ResourceIcon(int32 EntryPoint, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, UResourceData* K2Node_CustomEvent_resource, bool CallFunc_IsValid_ReturnValue, FText CallFunc_TextToUpper_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool Temp_bool_Variable, ESlateVisibility K2Node_Select_Default);
}

#endif
