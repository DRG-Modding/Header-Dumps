#ifndef UE4SS_SDK_UI_Cursor_Controller_HPP
#define UE4SS_SDK_UI_Cursor_Controller_HPP

class UUI_Cursor_Controller_C : UMouseCursorWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Hover;
    UImage* Controller;

    void OnHover();
    void OnUnhover();
    void ExecuteUbergraph_UI_Cursor_Controller(int32 EntryPoint, float CallFunc_GetAnimationCurrentTime_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
}

#endif
