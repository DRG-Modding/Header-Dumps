#ifndef UE4SS_SDK_UI_Cursor_Controller_HPP
#define UE4SS_SDK_UI_Cursor_Controller_HPP

class UUI_Cursor_Controller_C : public UMouseCursorWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Hover;
    class UImage* Controller;

    void OnHover();
    void OnUnhover();
    void ExecuteUbergraph_UI_Cursor_Controller(int32 EntryPoint);
};

#endif
