#ifndef UE4SS_SDK_DLCclaimPopup_DLC07_Biohazard_HPP
#define UE4SS_SDK_DLCclaimPopup_DLC07_Biohazard_HPP

class UDLCclaimPopup_DLC07_Biohazard_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class U_DLCclaimPopup_Base_C* DLCclaimPopup_Base;
    class U_DLCclaimPopup_TextLine_C* UI_ClaimableDLC_TextLine;
    class U_DLCclaimPopup_TextLine_C* UI_ClaimableDLC_TextLine_C;
    class U_DLCclaimPopup_TextLine_C* UI_ClaimableDLC_TextLine_C_47;
    class U_DLCclaimPopup_TextLine_C* UI_ClaimableDLC_TextLine_C_48;
    class U_DLCclaimPopup_TextLine_C* UI_ClaimableDLC_TextLine_C_49;
    class U_DLCclaimPopup_TextLine_C* UI_ClaimableDLC_TextLine_C_50;
    class UGameDLC* dlc;

    void OnClosed();
    void BndEvt__DLCclaimPopup_Base_K2Node_ComponentBoundEvent_0_OnCloseClicked__DelegateSignature();
    void ExecuteUbergraph_DLCclaimPopup_DLC07_Biohazard(int32 EntryPoint);
};

#endif
