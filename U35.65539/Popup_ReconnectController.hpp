#ifndef UE4SS_SDK_Popup_ReconnectController_HPP
#define UE4SS_SDK_Popup_ReconnectController_HPP

class UPopup_ReconnectController_C : UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_ButtonScalable2_C* Basic_ButtonScalable2;
    UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow;
    UBlurBackground_C* BlurBackground;

    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEventFEventReply CallFunc_Unhandled_ReturnValue, FEventReply CallFunc_Handled_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_IsKeyEventAction_ReturnValue);
    void BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature();
    void Close();
    void ExecuteUbergraph_Popup_ReconnectController(int32 EntryPoint, UWindowManager* CallFunc_GetWindowManager_ReturnValue);
}

#endif
