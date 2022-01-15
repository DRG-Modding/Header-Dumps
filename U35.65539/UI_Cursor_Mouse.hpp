#ifndef UE4SS_SDK_UI_Cursor_Mouse_HPP
#define UE4SS_SDK_UI_Cursor_Mouse_HPP

class UUI_Cursor_Mouse_C : UMouseCursorWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* Mouse;

    void OnHover();
    void OnUnhover();
    void ExecuteUbergraph_UI_Cursor_Mouse(int32 EntryPoint);
}

#endif
