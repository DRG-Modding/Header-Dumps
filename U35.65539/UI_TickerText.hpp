#ifndef UE4SS_SDK_UI_TickerText_HPP
#define UE4SS_SDK_UI_TickerText_HPP

class UUI_TickerText_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    URichTextSizable* RichTextSizable_211;
    USizeBox* SizeBox_1;
    float Progress;
    float Width;
    UDataTable* RichTextStyle;
    FText Text;
    float TextLength;
    float Speed;

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void SetText(FText TickerText);
    void SetSpeed(float Speed);
    void SetStyle(UDataTable* NewTextStyleSet);
    void ExecuteUbergraph_UI_TickerText(int32 EntryPoint, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, USizeBoxSlot* CallFunc_SlotAsSizeBoxSlot_ReturnValue, FMargin K2Node_MakeStruct_Margin, bool K2Node_Event_IsDesignTime, FVector2D CallFunc_GetDesiredSize_ReturnValue, FText K2Node_CustomEvent_TickerText, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float K2Node_CustomEvent_Speed, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, UDataTable* K2Node_CustomEvent_NewTextStyleSet, bool CallFunc_Not_PreBool_ReturnValue);
}

#endif
