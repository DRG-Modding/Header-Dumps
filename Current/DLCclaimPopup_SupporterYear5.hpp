#ifndef UE4SS_SDK_DLCclaimPopup_SupporterYear5_HPP
#define UE4SS_SDK_DLCclaimPopup_SupporterYear5_HPP

class UDLCclaimPopup_SupporterYear5_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class U_DLCclaimPopup_TextLine_C* _DLCclaimPopup_TextLine_C_5;
    class U_DLCclaimPopup_Base_C* DLCclaimPopup_Base;
    class U_DLCclaimPopup_TextLine_C* UI_ClaimableDLC_TextLine_C;
    class U_DLCclaimPopup_TextLine_C* UI_ClaimableDLC_TextLine_C_0;
    class U_DLCclaimPopup_TextLine_C* UI_ClaimableDLC_TextLine_C_1;
    class U_DLCclaimPopup_TextLine_C* UI_ClaimableDLC_TextLine_C_2;
    class U_DLCclaimPopup_TextLine_C* UI_ClaimableDLC_TextLine_C_3;
    class U_DLCclaimPopup_TextLine_C* UI_ClaimableDLC_TextLine_C_4;
    class U_DLCclaimPopup_TextLine_C* UI_ClaimableDLC_TextLine_C_48;
    class U_DLCclaimPopup_TextLine_C* UI_ClaimableDLC_TextLine_C_49;
    class U_DLCclaimPopup_TextLine_C* UI_ClaimableDLC_TextLine_C_50;
    class UGameDLC* dlc;

    void BndEvt__DLCclaimPopup_Base_K2Node_ComponentBoundEvent_0_OnCloseClicked__DelegateSignature();
    void OnClosed();
    void ExecuteUbergraph_DLCclaimPopup_SupporterYear5(int32 EntryPoint);
};

#endif
