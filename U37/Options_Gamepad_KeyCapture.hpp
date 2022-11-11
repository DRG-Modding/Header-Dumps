#ifndef UE4SS_SDK_Options_Gamepad_KeyCapture_HPP
#define UE4SS_SDK_Options_Gamepad_KeyCapture_HPP

class UOptions_Gamepad_KeyCapture_C : public UInputCaptureWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetSwitcher* DisplaySwitcher;
    class UImage* FocusedIndicator;
    class USizeBox* IconSizeBox;
    class UImage* InputImage;
    class UBasic_Label_C* InputLabel;
    float IconSize;
    int32 FontSize;
    FOptions_Gamepad_KeyCapture_COnCapturingChanged OnCapturingChanged;
    void OnCapturingChanged(bool InCapturing);

    void UpdateKeyDisplay(FKey InKey);
    bool IsInteractable();
    void ReceiveCapturingChanged(bool InCapturing);
    void ReceiveKeyChanged(FKey InKey);
    void Construct();
    void OnCustomKeyBindingsChanged();
    void ReceiveKeyCaptured(FKey InKey);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_Options_Gamepad_KeyCapture(int32 EntryPoint);
    void OnCapturingChanged__DelegateSignature(bool InCapturing);
};

#endif
