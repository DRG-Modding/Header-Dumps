#ifndef UE4SS_SDK_UI_RichTextInput_HPP
#define UE4SS_SDK_UI_RichTextInput_HPP

class UUI_RichTextInput_C : public URichTextInputWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* InputIcon;
    class UTextBlock* InputText;
    class UTextBlock* InteractionText;
    class UOverlay* OverlayIcon;
    class UOverlay* OverlayText;
    class USizeBox* Sizer;
    class UWidgetSwitcher* switcher;

    void ShowFromDisplayDetails(const FInputDisplay& details, bool CallFunc_IsValid_ReturnValue);
    void SetInteraction(EInputInteraction InInteraction, EInputInteraction Temp_byte_Variable, FText Temp_text_Variable, FText Temp_text_Variable_1, FText CallFunc_GetText_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, FText K2Node_Select_Default);
    void ShowAsText(FText InText, FLinearColor InTint, float Height, float CallFunc_GetLineHeight_ReturnValue, FSlateColor K2Node_MakeStruct_SlateColor, FText CallFunc_TextToUpper_ReturnValue);
    void SetSize(float InHeightOverride, float InWidthOverride, float InMinDesiredWidth, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue_2);
    void ShowAsIcon(class UTexture2D* InTexture, FLinearColor InTint, float Height, int32 CallFunc_Blueprint_GetSizeY_ReturnValue, int32 CallFunc_Blueprint_GetSizeX_ReturnValue, int32 CallFunc_Max_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_GetLineHeight_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
    void ReceiveInputDetails(const FInputDisplay& InDisplay);
    void ReceiveInputUnknown();
    void ExecuteUbergraph_UI_RichTextInput(int32 EntryPoint, const FInputDisplay K2Node_Event_InDisplay);
};

#endif
