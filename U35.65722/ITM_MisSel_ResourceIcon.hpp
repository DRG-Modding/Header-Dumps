#ifndef UE4SS_SDK_ITM_MisSel_ResourceIcon_HPP
#define UE4SS_SDK_ITM_MisSel_ResourceIcon_HPP

class UITM_MisSel_ResourceIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_ResourceIcon_C* Basic_ResourceIcon;
    class UTextBlock* DATA_ResourceName;

    void SetData(class UResourceData* Resource);
    void ExecuteUbergraph_ITM_MisSel_ResourceIcon(int32 EntryPoint, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, class UResourceData* K2Node_CustomEvent_resource, bool CallFunc_IsValid_ReturnValue, FText CallFunc_TextToUpper_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool Temp_bool_Variable, ESlateVisibility K2Node_Select_Default);
};

#endif
