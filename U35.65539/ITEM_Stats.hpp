#ifndef UE4SS_SDK_ITEM_Stats_HPP
#define UE4SS_SDK_ITEM_Stats_HPP

class UITEM_Stats_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTextBlock* TextBlock_Bonus;
    UTextBlock* TextBlock_Name;
    UTextBlock* TextBlock_Value;

    void Show(FText Name, FText Value, FText BonusValue);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITEM_Stats(int32 EntryPoint, FText K2Node_CustomEvent_Name, FText K2Node_CustomEvent_Value, FText K2Node_CustomEvent_BonusValue, FText CallFunc_TextToUpper_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FSlateColor K2Node_MakeStruct_SlateColor_1, FLinearColor CallFunc_MenuColors_OutputColor_2, FSlateColor K2Node_MakeStruct_SlateColor_2);
}

#endif
