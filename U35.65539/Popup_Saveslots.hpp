#ifndef UE4SS_SDK_Popup_Saveslots_HPP
#define UE4SS_SDK_Popup_Saveslots_HPP

class UPopup_Saveslots_C : UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_ButtonScalable2_C* BTN_Close;
    UMenu_SaveSlots_C* Menu_SaveSlots;

    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEventFEventReply CallFunc_Handled_ReturnValue);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEventFEventReply CallFunc_Handled_ReturnValue, bool CallFunc_IsCloseOrBackMenu_ReturnValue, FEventReply CallFunc_Unhandled_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_IsKeyEventAction_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
    void BndEvt__BTN_Refresh_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void Close();
    void ExecuteUbergraph_Popup_Saveslots(int32 EntryPoint, UWindowManager* CallFunc_GetWindowManager_ReturnValue);
}

#endif
