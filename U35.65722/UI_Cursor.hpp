#ifndef UE4SS_SDK_UI_Cursor_HPP
#define UE4SS_SDK_UI_Cursor_HPP

class UUI_Cursor_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCanvasPanel* Root;
    class UUI_Cursor_Controller_C* UI_Cursor_Controller;
    class UUI_Cursor_Mouse_C* UI_Cursor_Mouse;

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_UI_Cursor(int32 EntryPoint, float CallFunc_GetBaseResolutionScale_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime);
};

#endif
