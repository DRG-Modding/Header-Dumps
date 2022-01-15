#ifndef UE4SS_SDK_UI_RandomizeIcon_HPP
#define UE4SS_SDK_UI_RandomizeIcon_HPP

class UUI_RandomizeIcon_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* AnimHover;
    UWidgetAnimation* AnimActivate;
    UBorder* Background;
    UBorder* FrameBorder;
    UBorder* SelectionBorder;
    UOverlay* ShuffleOverlay;
    USizeBox* Sizer;
    int32 Dimension;

    void PreConstruct(bool IsDesignTime);
    void PlayActivateAnimation();
    void SetHovered(bool IsHovered);
    void ExecuteUbergraph_UI_RandomizeIcon(int32 EntryPoint, float CallFunc_Conv_IntToFloat_ReturnValue, bool K2Node_Event_IsDesignTime, float CallFunc_Divide_FloatFloat_ReturnValue, FMargin K2Node_MakeStruct_Margin, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_2, bool K2Node_CustomEvent_IsHovered, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, USizeBoxSlot* CallFunc_SlotAsSizeBoxSlot_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue);
}

#endif
