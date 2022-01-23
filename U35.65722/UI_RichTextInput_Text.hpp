#ifndef UE4SS_SDK_UI_RichTextInput_Text_HPP
#define UE4SS_SDK_UI_RichTextInput_Text_HPP

class UUI_RichTextInput_Text_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* InputText;
    class USizeBox* Sizer;
    FText Text;
    FLinearColor TextTint;
    float LineHeight;

    void SetText(FText InText, FLinearColor InTint, float LineHeight, float TextHeight, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_GetFontSize_Size, FVector2D CallFunc_MeasureTextBlockSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_FMax_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue, FSlateColor K2Node_MakeStruct_SlateColor, FText CallFunc_TextToUpper_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_RichTextInput_Text(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

#endif
