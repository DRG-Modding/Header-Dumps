#ifndef UE4SS_SDK_OnScreenIndicator_SupplyDrop_Order_HPP
#define UE4SS_SDK_OnScreenIndicator_SupplyDrop_Order_HPP

class UOnScreenIndicator_SupplyDrop_Order_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_HUD_BracketWindowSmall_C* Basic_HUD_BracketWindowSmall;
    UUI_AdvancedLabel_C* KeyLabel;
    UTextBlock* Text_Cost;
    UTextBlock* Text_Name;

    void SetDetails(FText Name, int32 Cost, UResourceData* ResourceRequired);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_OnScreenIndicator_SupplyDrop_Order(int32 EntryPoint, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, FText K2Node_CustomEvent_Name, int32 K2Node_CustomEvent_Cost, UResourceData* K2Node_CustomEvent_ResourceRequired, FText CallFunc_TextToUpper_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, bool K2Node_Event_IsDesignTime, FText CallFunc_Format_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor_1, FSlateColor K2Node_MakeStruct_SlateColor_1);
}

#endif
