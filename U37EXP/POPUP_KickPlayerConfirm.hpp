#ifndef UE4SS_SDK_POPUP_KickPlayerConfirm_HPP
#define UE4SS_SDK_POPUP_KickPlayerConfirm_HPP

class UPOPUP_KickPlayerConfirm_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_CheckBox_C* Basic_CheckBox_AFK;
    class UBasic_CheckBox_C* Basic_CheckBox_NoReason;
    class UBasic_CheckBox_C* Basic_CheckBox_Private;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow;
    class UBlurBackground_C* BlurBackground;
    class UBasic_ButtonScalable2_C* BTN_Ban;
    class UBasic_ButtonScalable2_C* BTN_Cancel;
    class UBasic_ButtonScalable2_C* BTN_Kick;
    class UTextBlock* DATA_PlayerName;
    class UTextBlock* TXT_KickHeader;
    class UTextBlock* TXT_ReasonHeader;
    class UTextBlock* TXT_ReasonNotResponding;
    class UTextBlock* TXT_ReasonOther;
    class UTextBlock* TXT_ReasonPrivate;
    EDisconnectReason KickReason;
    class APlayerController* PlayerToKick;
    class UWidget* Tooltip_Ban;

    void SetGamePrivacy();
    void KickPlayer();
    class UWidget* Get_BTN_Ban_Tooltip();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void BndEvt__Basic_CheckBox_C_1_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void BndEvt__Basic_CheckBox_AFK_K2Node_ComponentBoundEvent_12_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void BndEvt__Basic_CheckBox_Private_K2Node_ComponentBoundEvent_16_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void BndEvt__BTN_Kick_K2Node_ComponentBoundEvent_37_OnClicked__DelegateSignature();
    void SetPlayer(class APlayerController* Player);
    void BndEvt__BTN_Cancel_K2Node_ComponentBoundEvent_86_OnClicked__DelegateSignature();
    void BndEvt__POPUP_KickPlayerConfirm_BTN_Ban_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void ProfileClosed();
    void ExecuteUbergraph_POPUP_KickPlayerConfirm(int32 EntryPoint);
};

#endif
