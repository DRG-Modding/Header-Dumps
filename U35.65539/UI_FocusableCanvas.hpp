#ifndef UE4SS_SDK_UI_FocusableCanvas_HPP
#define UE4SS_SDK_UI_FocusableCanvas_HPP

class UUI_FocusableCanvas_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UNamedSlot* Content;
    FUI_FocusableCanvas_COnFocusChanged OnFocusChanged;
    void OnFocusChanged(UWidget* Widget, bool IsFocused);
    FUI_FocusableCanvas_COnHoverChanged OnHoverChanged;
    void OnHoverChanged(UWidget* Widget, bool IsHovered);

    FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEventFEventReply CallFunc_Unhandled_ReturnValue);
    void Construct();
    void OnFocusLost(FFocusEvent InFocusEvent);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void ExecuteUbergraph_UI_FocusableCanvas(int32 EntryPoint, FFocusEvent K2Node_Event_InFocusEvent, FGeometry K2Node_Event_MyGeometry, const FPointerEvent K2Node_Event_MouseEvent_1, const FPointerEvent K2Node_Event_MouseEvent);
    void OnHoverChanged__DelegateSignature(UWidget* Widget, bool IsHovered);
    void OnFocusChanged__DelegateSignature(UWidget* Widget, bool IsFocused);
}

#endif
