#ifndef UE4SS_SDK_ITM_UpgGear_GearStat_HPP
#define UE4SS_SDK_ITM_UpgGear_GearStat_HPP

class UITM_UpgGear_GearStat_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTextBlock* DATA_StatAmount;
    UTextBlock* DATA_StatName;
    UTextBlock* DATA_StatUpgrade;
    UImage* Image_Background;
    FText StatName;
    FText StatValue;
    FText StatBaseValue;
    FText StatUpgradeValue;
    EItemPreviewStatus ItemPreviewStatus;
    FSlateFontInfo SpecialFont;
    FGearStatEntry GearStat;

    void SetGearStat(FGearStatEntry InStat);
    void SetData(FText InStatName, FText InStatValue, FText InStatBaseValue, FText InStatUpgradeValue, EItemPreviewStatus InItemPreviewStatus, EItemPreviewStatus Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, ESlateVisibility Temp_byte_Variable_4, ESlateVisibility Temp_byte_Variable_5, EItemPreviewStatus Temp_byte_Variable_6, EItemPreviewStatus Temp_byte_Variable_7, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable_8, ESlateVisibility Temp_byte_Variable_9, EItemPreviewStatus Temp_byte_Variable_10, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor CallFunc_MenuColors_OutputColor_2, FLinearColor K2Node_Select_Default, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FSlateColor K2Node_MakeStruct_SlateColor, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, ESlateVisibility K2Node_Select_Default_1, FLinearColor CallFunc_MenuColors_OutputColor_3, FLinearColor CallFunc_MenuColors_OutputColor_4, FLinearColor K2Node_Select_Default_2, FSlateColor K2Node_MakeStruct_SlateColor_1, FLinearColor CallFunc_MenuColors_OutputColor_5, FLinearColor CallFunc_MenuColors_OutputColor_6, FLinearColor CallFunc_MenuColors_OutputColor_7, bool CallFunc_TextIsEmpty_ReturnValue_1, FLinearColor K2Node_Select_Default_3, FSlateColor K2Node_MakeStruct_SlateColor_2, ESlateVisibility K2Node_Select_Default_4, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array_1, FText CallFunc_Format_ReturnValue_1);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_UpgGear_GearStat(int32 EntryPoint, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FSlateColor K2Node_MakeStruct_SlateColor, FSlateColor K2Node_MakeStruct_SlateColor_1, FLinearColor CallFunc_MenuColors_OutputColor_2, FSlateColor K2Node_MakeStruct_SlateColor_2);
}

#endif
