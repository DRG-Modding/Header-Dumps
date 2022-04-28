#ifndef UE4SS_SDK_WND_JoinFailed_HPP
#define UE4SS_SDK_WND_JoinFailed_HPP

class UWND_JoinFailed_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_MinimalWindow_C* BasicWindow_Minimal;
    class UBlurBackground_C* BlurBackground;
    class UBasic_ButtonScalable2_C* BTN_Cancel;
    class UTextBlock* DisconnectReasonText;
    class UTextBlock* ErrorCode;
    class UTextBlock* TextBlock_128;

    void OnFailure_EF9B242446B45E709293BAB20166BCB2();
    void OnSuccess_EF9B242446B45E709293BAB20166BCB2();
    void BndEvt__Button_Close_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void Cancel();
    void OnShown();
    void ExecuteUbergraph_WND_JoinFailed(int32 EntryPoint);
};

#endif
