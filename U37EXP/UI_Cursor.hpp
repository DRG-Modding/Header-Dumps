#ifndef UE4SS_SDK_UI_Cursor_HPP
#define UE4SS_SDK_UI_Cursor_HPP

class UUI_Cursor_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCanvasPanel* Root;
    class UUI_Cursor_Controller_C* UI_Cursor_Controller;
    class UUI_Cursor_Mouse_C* UI_Cursor_Mouse;

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_UI_Cursor(int32 EntryPoint);
};

#endif
