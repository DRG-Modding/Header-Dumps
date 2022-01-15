#ifndef UE4SS_SDK_Basic_ToolTip_HPP
#define UE4SS_SDK_Basic_ToolTip_HPP

class UBasic_ToolTip_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* AnimFadeIn;
    UWidgetAnimation* Intro;
    UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow;
    UTextBlock* DATA_ToolTip;
    USizeBox* ToolTipSizer;
    FText Text;
    FVector2D Position;
    FVector2D Alignment;

    void SetTextJustification(uint8 Justification, uint8 Temp_byte_Variable, uint8 Temp_byte_Variable_1, uint8 Temp_byte_Variable_2, uint8 Temp_byte_Variable_3, uint8 K2Node_Select_Default, USizeBoxSlot* CallFunc_SlotAsSizeBoxSlot_ReturnValue);
    void FadeIn(float Duration, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void SetWidth(float InWidthOverride, bool CallFunc_Greater_FloatFloat_ReturnValue);
    void SetMaxWidth(float MaxWidth, bool CallFunc_Greater_FloatFloat_ReturnValue);
    void SetMinWidth(float MinWidth, bool CallFunc_Greater_FloatFloat_ReturnValue);
    void SetPostionAndAlignment(FVector2D InPosition, FVector2D InAlignment, UCanvasPanelSlot* CanvasSlot, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue);
    void SetText(FText ToolTip);
    void SetTarget(UWidget* Target Widget, bool CallFunc_IsValid_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void Set Tool Tip Owner(UWidget* Owner);
    void ExecuteUbergraph_Basic_ToolTip(int32 EntryPoint, bool K2Node_Event_IsDesignTime, UWidget* K2Node_CustomEvent_Owner, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_IsValid_ReturnValue);
}

#endif
