#ifndef UE4SS_SDK_ITM_DragRotateCharacterShowroom_HPP
#define UE4SS_SDK_ITM_DragRotateCharacterShowroom_HPP

class UITM_DragRotateCharacterShowroom_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_0;
    bool GrabMouse;

    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEventFKey CallFunc_PointerEvent_GetEffectingButton_ReturnValue, FEventReply CallFunc_Unhandled_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FEventReply CallFunc_Handled_ReturnValue, FEventReply CallFunc_ReleaseMouseCapture_ReturnValue);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEventFEventReply CallFunc_Unhandled_ReturnValue, FKey CallFunc_PointerEvent_GetEffectingButton_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, FEventReply CallFunc_Handled_ReturnValue, FEventReply CallFunc_CaptureMouse_ReturnValue);
    FEventReply OnMouseMove(FGeometry MyGeometry, const FPointerEvent& MouseEventclass AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, FVector2D CallFunc_PointerEvent_GetCursorDelta_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, class UShowroomController* CallFunc_GetController_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, FEventReply CallFunc_Handled_ReturnValue, FEventReply CallFunc_Unhandled_ReturnValue);
    void Construct();
    void OnShowCharacterSelectorRotate(float Pitch, float Yaw);
    void ExecuteUbergraph_ITM_DragRotateCharacterShowroom(int32 EntryPoint, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, FExecuteUbergraph_ITM_DragRotateCharacterShowroomK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UShowroomController* CallFunc_GetController_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, float K2Node_CustomEvent_pitch, float K2Node_CustomEvent_yaw, float CallFunc_Multiply_FloatFloat_ReturnValue);
};

#endif
