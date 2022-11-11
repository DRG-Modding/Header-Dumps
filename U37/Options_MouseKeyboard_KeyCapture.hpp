#ifndef UE4SS_SDK_Options_MouseKeyboard_KeyCapture_HPP
#define UE4SS_SDK_Options_MouseKeyboard_KeyCapture_HPP

class UOptions_MouseKeyboard_KeyCapture_C : public UInputCaptureWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UButton* ClearButton;
    class UImage* FocusedImage;
    class UTextBlock* KeyLabel;
    FOptions_MouseKeyboard_KeyCapture_COnKeyCaptureFinished OnKeyCaptureFinished;
    void OnKeyCaptureFinished();
    FOptions_MouseKeyboard_KeyCapture_COnKeyCaptureError OnKeyCaptureError;
    void OnKeyCaptureError();
    FOptions_MouseKeyboard_KeyCapture_COnKeyCaptureChanged OnKeyCaptureChanged;
    void OnKeyCaptureChanged();
    FOptions_MouseKeyboard_KeyCapture_COnKeyCaptureCancelled OnKeyCaptureCancelled;
    void OnKeyCaptureCancelled();
    FKey CapturedKey;
    FCustomKeySetting ConflictingAction;
    FKey NoneKey;
    FKey CurrentKey;

    void UpdateClearButton();
    void UpdateKeyInfo(const FKey& Key);
    void No_8623E71E42D4951E6FF011979EF3C667();
    void Yes_8623E71E42D4951E6FF011979EF3C667();
    void BndEvt__ClearButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void PreConstruct(bool IsDesignTime);
    void OnCustomKeyBindingsChanged();
    void Construct();
    void ReceiveKeyChanged(FKey InKey);
    void ReceiveKeyCaptured(FKey InKey);
    void ReceiveCapturingChanged(bool InCapturing);
    void ExecuteUbergraph_Options_MouseKeyboard_KeyCapture(int32 EntryPoint);
    void OnKeyCaptureCancelled__DelegateSignature();
    void OnKeyCaptureChanged__DelegateSignature();
    void OnKeyCaptureError__DelegateSignature();
    void OnKeyCaptureFinished__DelegateSignature();
};

#endif
