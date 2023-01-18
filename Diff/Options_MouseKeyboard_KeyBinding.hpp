#ifndef UE4SS_SDK_Options_MouseKeyboard_KeyBinding_HPP
#define UE4SS_SDK_Options_MouseKeyboard_KeyBinding_HPP

class UOptions_MouseKeyboard_KeyBinding_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Error;
    class UBasic_Option_C* Basic_Option;
    class UTextBlock* ErrorLabel;
    class UOptions_MouseKeyboard_KeyCapture_C* UI_KeyCapture_Primary;
    class UOptions_MouseKeyboard_KeyCapture_C* UI_KeyCapture_Secondary;
    FCustomKeySetting KeySettings;

    void PreConstruct(bool IsDesignTime);
    void BndEvt__UI_KeyCapture_K2Node_ComponentBoundEvent_0_OnKeyCaptureFinished__DelegateSignature();
    void BndEvt__UI_KeyCapture_K2Node_ComponentBoundEvent_0_OnKeyCaptureError__DelegateSignature();
    void BndEvt__UI_KeyCapture_K2Node_ComponentBoundEvent_1_OnKeyCaptureChanged__DelegateSignature();
    void BndEvt__UI_KeyCapture_K2Node_ComponentBoundEvent_2_OnKeyCaptureCancelled__DelegateSignature();
    void BndEvt__UI_KeyCapture_Secondary_K2Node_ComponentBoundEvent_0_OnKeyCaptureFinished__DelegateSignature();
    void BndEvt__UI_KeyCapture_Secondary_K2Node_ComponentBoundEvent_8_OnKeyCaptureError__DelegateSignature();
    void BndEvt__UI_KeyCapture_Secondary_K2Node_ComponentBoundEvent_27_OnKeyCaptureChanged__DelegateSignature();
    void BndEvt__UI_KeyCapture_Secondary_K2Node_ComponentBoundEvent_38_OnKeyCaptureCancelled__DelegateSignature();
    void Construct();
    void ExecuteUbergraph_Options_MouseKeyboard_KeyBinding(int32 EntryPoint);
};

#endif
