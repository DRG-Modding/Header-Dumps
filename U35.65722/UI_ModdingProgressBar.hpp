#ifndef UE4SS_SDK_UI_ModdingProgressBar_HPP
#define UE4SS_SDK_UI_ModdingProgressBar_HPP

class UUI_ModdingProgressBar_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UProgressBar* ActionProgressBar;
    class USizeBox* HeightSizeBox;
    class UBasic_Label_C* LabelAction;
    int32 Height;
    bool PreviewDownloading;
    int32 PreviewProgress;
    int32 PreviewTotal;
    int32 Width;
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    bool IsDownloading;
    int32 CurrentProgress;
    int32 CurrentTotal;

    void GetTotal(int32& Total);
    void Error(EUGCPackageError InErrorType, EUGCPackageError Temp_byte_Variable, FText Temp_text_Variable, FText Temp_text_Variable_1, FText Temp_text_Variable_2, FText K2Node_Select_Default, FLinearColor CallFunc_MenuColors_OutputColor);
    void FinishExtracting(int32 CallFunc_Max_ReturnValue);
    FText Int2Text(int32 Valueint32 Size, TMap<int32, FText> SizeMap, TMap<int32, FText> K2Node_MakeVariable_MakeVariableOutput, int32 Temp_int_Array_Index_Variable, FText CallFunc_MakeLiteralText_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_2, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, float CallFunc_Conv_IntToFloat_ReturnValue, FText CallFunc_Format_ReturnValue, TArray<int32>& CallFunc_Map_Keys_Keys, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, float CallFunc_Conv_IntToFloat_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, FText CallFunc_Conv_FloatToText_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_3, TArray<FFormatArgumentData>& K2Node_MakeArray_Array_1, FText CallFunc_Format_ReturnValue_1);
    void SetProgress(bool Downloading, int32 Progress, int32 Total, FLinearColor Temp_struct_Variable, FLinearColor Temp_struct_Variable_1, bool Temp_bool_Variable, FText Temp_text_Variable, FText Temp_text_Variable_1, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, FText K2Node_Select_Default, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FText CallFunc_Int2Text_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FText CallFunc_Int2Text_ReturnValue_1, FText CallFunc_Int2Text_ReturnValue_2, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_2, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, FText CallFunc_Int2Text_ReturnValue_3, bool Temp_bool_Variable_3, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_3, TArray<FFormatArgumentData>& K2Node_MakeArray_Array_1, FLinearColor K2Node_Select_Default_1, FText CallFunc_Format_ReturnValue_1, FText K2Node_Select_Default_2, FText K2Node_Select_Default_3, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_ModdingProgressBar(int32 EntryPoint, bool Temp_bool_Variable, TEnumAsByte<EHorizontalAlignment> Temp_byte_Variable, bool K2Node_Event_IsDesignTime, float CallFunc_Conv_IntToFloat_ReturnValue, TEnumAsByte<EVerticalAlignment> Temp_byte_Variable_1, bool CallFunc_Greater_IntInt_ReturnValue, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_2, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_3, float CallFunc_Conv_IntToFloat_ReturnValue_1, TEnumAsByte<EHorizontalAlignment> K2Node_Select_Default, bool Temp_bool_Variable_1, TEnumAsByte<EVerticalAlignment> K2Node_Select_Default_1);
};

#endif
