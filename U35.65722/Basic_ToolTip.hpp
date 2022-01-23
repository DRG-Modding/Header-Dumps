#ifndef UE4SS_SDK_Basic_ToolTip_HPP
#define UE4SS_SDK_Basic_ToolTip_HPP

class UBasic_ToolTip_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimFadeIn;
    class UWidgetAnimation* Intro;
    class UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow;
    class UTextBlock* DATA_ToolTip;
    class USizeBox* ToolTipSizer;
    FText Text;
    FVector2D Position;
    FVector2D Alignment;

    void SetTextJustification(TEnumAsByte<ETextJustify::Type> Justification, TEnumAsByte<ETextJustify::Type> Temp_byte_Variable, TEnumAsByte<EHorizontalAlignment> Temp_byte_Variable_1, TEnumAsByte<EHorizontalAlignment> Temp_byte_Variable_2, TEnumAsByte<EHorizontalAlignment> Temp_byte_Variable_3, TEnumAsByte<EHorizontalAlignment> K2Node_Select_Default, class USizeBoxSlot* CallFunc_SlotAsSizeBoxSlot_ReturnValue);
    void FadeIn(float Duration, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void SetWidth(float InWidthOverride, bool CallFunc_Greater_FloatFloat_ReturnValue);
    void SetMaxWidth(float MaxWidth, bool CallFunc_Greater_FloatFloat_ReturnValue);
    void SetMinWidth(float MinWidth, bool CallFunc_Greater_FloatFloat_ReturnValue);
    void SetPostionAndAlignment(FVector2D InPosition, FVector2D InAlignment, class UCanvasPanelSlot* CanvasSlot, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue);
    void SetText(FText ToolTip);
    void SetTarget(class UWidget* Target Widget, bool CallFunc_IsValid_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void Set Tool Tip Owner(class UWidget* Owner);
    void ExecuteUbergraph_Basic_ToolTip(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UWidget* K2Node_CustomEvent_Owner, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

#endif
