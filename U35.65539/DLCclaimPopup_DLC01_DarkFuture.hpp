#ifndef UE4SS_SDK_DLCclaimPopup_DLC01_DarkFuture_HPP
#define UE4SS_SDK_DLCclaimPopup_DLC01_DarkFuture_HPP

class UDLCclaimPopup_DLC01_DarkFuture_C : UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    U_DLCclaimPopup_Base_C* DLCclaimPopup_Base;
    U_DLCclaimPopup_TextLine_C* UI_ClaimableDLC_TextLine;
    U_DLCclaimPopup_TextLine_C* UI_ClaimableDLC_TextLine_C_47;
    U_DLCclaimPopup_TextLine_C* UI_ClaimableDLC_TextLine_C_48;
    U_DLCclaimPopup_TextLine_C* UI_ClaimableDLC_TextLine_C_49;
    U_DLCclaimPopup_TextLine_C* UI_ClaimableDLC_TextLine_C_50;
    UGameDLC* dlc;

    void OnClosed();
    void BndEvt__DLCclaimPopup_Base_K2Node_ComponentBoundEvent_0_OnCloseClicked__DelegateSignature();
    void ExecuteUbergraph_DLCclaimPopup_DLC01_DarkFuture(int32 EntryPoint);
}

#endif
