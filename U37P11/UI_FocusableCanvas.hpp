#ifndef UE4SS_SDK_UI_FocusableCanvas_HPP
#define UE4SS_SDK_UI_FocusableCanvas_HPP

class UUI_FocusableCanvas_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNamedSlot* Content;
    FUI_FocusableCanvas_COnFocusChanged OnFocusChanged;
    void OnFocusChanged(class UWidget* Widget, bool IsFocused);
    FUI_FocusableCanvas_COnHoverChanged OnHoverChanged;
    void OnHoverChanged(class UWidget* Widget, bool IsHovered);

    FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);
    void Construct();
    void OnFocusLost(FFocusEvent InFocusEvent);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void ExecuteUbergraph_UI_FocusableCanvas(int32 EntryPoint);
    void OnHoverChanged__DelegateSignature(class UWidget* Widget, bool IsHovered);
    void OnFocusChanged__DelegateSignature(class UWidget* Widget, bool IsFocused);
};

#endif
