#ifndef UE4SS_SDK_DLCclaimPopup_Supporter_HPP
#define UE4SS_SDK_DLCclaimPopup_Supporter_HPP

class UDLCclaimPopup_Supporter_C : UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    U_DLCclaimPopup_TextLine_C* _DLCclaimPopup_TextLine_C_5;
    U_DLCclaimPopup_Base_C* DLCclaimPopup_Base;
    U_DLCclaimPopup_TextLine_C* UI_ClaimableDLC_TextLine_C_0;
    U_DLCclaimPopup_TextLine_C* UI_ClaimableDLC_TextLine_C_1;
    U_DLCclaimPopup_TextLine_C* UI_ClaimableDLC_TextLine_C_2;
    U_DLCclaimPopup_TextLine_C* UI_ClaimableDLC_TextLine_C_3;
    U_DLCclaimPopup_TextLine_C* UI_ClaimableDLC_TextLine_C_4;
    U_DLCclaimPopup_TextLine_C* UI_ClaimableDLC_TextLine_C_48;
    U_DLCclaimPopup_TextLine_C* UI_ClaimableDLC_TextLine_C_49;
    U_DLCclaimPopup_TextLine_C* UI_ClaimableDLC_TextLine_C_50;
    UGameDLC* dlc;

    void BndEvt__DLCclaimPopup_Base_K2Node_ComponentBoundEvent_0_OnCloseClicked__DelegateSignature();
    void OnClosed();
    void ExecuteUbergraph_DLCclaimPopup_Supporter(int32 EntryPoint);
}

#endif
