#ifndef UE4SS_SDK_ToolTip_WithKeyIcon_HPP
#define UE4SS_SDK_ToolTip_WithKeyIcon_HPP

class UToolTip_WithKeyIcon_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* AnimFadeIn;
    UWidgetAnimation* Intro;
    UBorder* Border_BG;
    UTextBlock* DATA_ToolTipHeadline;
    UTextBlock* DATA_TooltipText;
    UImage* Image__Icon;
    UImage* Image_Outline;
    UOverlay* Overlay_Content;
    USizeBox* ToolTipSizer;
    FText Headline;
    FText Text;
    FVector2D Position;
    FVector2D Alignment;
    FActionIconMapping Icon;

    void FadeIn(float Duration, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void SetWidth(float InWidthOverride, bool CallFunc_Greater_FloatFloat_ReturnValue);
    void SetMaxWidth(float MaxWidth, bool CallFunc_Greater_FloatFloat_ReturnValue);
    void SetMinWidth(float MinWidth, bool CallFunc_Greater_FloatFloat_ReturnValue);
    void SetPostionAndAlignment(FVector2D InPosition, FVector2D InAlignment, UCanvasPanelSlot* CanvasSlot, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FSlateColor K2Node_MakeStruct_SlateColor, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue);
    void SetData(FText Headline, FText Text, FActionIconMapping Icon, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, bool CallFunc_IsValid_ReturnValue, ESlateVisibility K2Node_Select_Default, bool CallFunc_TextIsEmpty_ReturnValue, ESlateVisibility K2Node_Select_Default_1);
    void SetTarget(UWidget* Target Widget, bool CallFunc_IsValid_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void Set Tool Tip Owner(UWidget* Owner);
    void ExecuteUbergraph_ToolTip_WithKeyIcon(int32 EntryPoint, bool K2Node_Event_IsDesignTime, UWidget* K2Node_CustomEvent_Owner, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
}

#endif
