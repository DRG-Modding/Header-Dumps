#ifndef UE4SS_SDK_ITM_DragRotateCharacter_HPP
#define UE4SS_SDK_ITM_DragRotateCharacter_HPP

class UITM_DragRotateCharacter_C : public UUserWidget
{
    class UImage* Image_0;
    bool GrabMouse;
    class ACharacterSelectionSwitcher_C* switcher;

    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEventFKey CallFunc_PointerEvent_GetEffectingButton_ReturnValue, FEventReply CallFunc_Unhandled_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FEventReply CallFunc_Handled_ReturnValue, FEventReply CallFunc_ReleaseMouseCapture_ReturnValue);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEventFEventReply CallFunc_Unhandled_ReturnValue, FKey CallFunc_PointerEvent_GetEffectingButton_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, FEventReply CallFunc_Handled_ReturnValue, FEventReply CallFunc_CaptureMouse_ReturnValue);
    FEventReply OnMouseMove(FGeometry MyGeometry, const FPointerEvent& MouseEventFVector2D CallFunc_PointerEvent_GetCursorDelta_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, FEventReply CallFunc_Handled_ReturnValue, FEventReply CallFunc_Unhandled_ReturnValue);
};

#endif
