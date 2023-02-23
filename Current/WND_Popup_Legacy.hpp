#ifndef UE4SS_SDK_WND_Popup_Legacy_HPP
#define UE4SS_SDK_WND_Popup_Legacy_HPP

class UWND_Popup_Legacy_C : public UFSDEventPopupWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class U_DLCclaimPopup_Base_C* DLC_Base;

    void PreConstruct(bool IsDesignTime);
    void BndEvt__WND_Popup_Legacy_DLC_Base_K2Node_ComponentBoundEvent_1_OnCloseClicked__DelegateSignature();
    void ExecuteUbergraph_WND_Popup_Legacy(int32 EntryPoint);
};

#endif
