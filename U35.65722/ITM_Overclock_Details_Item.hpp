#ifndef UE4SS_SDK_ITM_Overclock_Details_Item_HPP
#define UE4SS_SDK_ITM_Overclock_Details_Item_HPP

class UITM_Overclock_Details_Item_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* AdvantagousIcon;
    class UTextBlock* DetailText;
    FText Text;
    bool IsAdvantagous;
    int32 FontSize;

    void SetFontSize(int32 NewSize, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue, FMargin K2Node_MakeStruct_Margin, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue);
    void SetData(FText InText, bool InIsAdvantagous, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float K2Node_Select_Default, FLinearColor CallFunc_SelectMenuColor_OutputColor);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_Overclock_Details_Item(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

#endif
