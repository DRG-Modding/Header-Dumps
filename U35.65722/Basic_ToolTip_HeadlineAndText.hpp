#ifndef UE4SS_SDK_Basic_ToolTip_HeadlineAndText_HPP
#define UE4SS_SDK_Basic_ToolTip_HeadlineAndText_HPP

class UBasic_ToolTip_HeadlineAndText_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimFadeIn;
    class UWidgetAnimation* Intro;
    class UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow;
    class UTextBlock* DATA_ToolTipHeadline;
    class UTextBlock* DATA_TooltipText;
    class USizeBox* ToolTipSizer;
    FText Headline;
    FText Text;
    FVector2D Position;
    FVector2D Alignment;

    void FadeIn(float Duration, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void SetWidth(float InWidthOverride, bool CallFunc_Greater_FloatFloat_ReturnValue);
    void SetMaxWidth(float MaxWidth, bool CallFunc_Greater_FloatFloat_ReturnValue);
    void SetMinWidth(float MinWidth, bool CallFunc_Greater_FloatFloat_ReturnValue);
    void SetPostionAndAlignment(FVector2D InPosition, FVector2D InAlignment, class UCanvasPanelSlot* CanvasSlot, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue);
    void SetText(FText Headline, FText Text, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool CallFunc_TextIsEmpty_ReturnValue, ESlateVisibility K2Node_Select_Default);
    void SetTarget(class UWidget* Target Widget, bool CallFunc_IsValid_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void Set Tool Tip Owner(class UWidget* Owner);
    void ExecuteUbergraph_Basic_ToolTip_HeadlineAndText(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool CallFunc_TextIsEmpty_ReturnValue, class UWidget* K2Node_CustomEvent_Owner, bool CallFunc_TextIsEmpty_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

#endif
