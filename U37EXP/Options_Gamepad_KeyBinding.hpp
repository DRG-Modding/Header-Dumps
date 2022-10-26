#ifndef UE4SS_SDK_Options_Gamepad_KeyBinding_HPP
#define UE4SS_SDK_Options_Gamepad_KeyBinding_HPP

class UOptions_Gamepad_KeyBinding_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Error;
    class UBasic_Option_C* Basic_Option;
    class UUI_AdvancedLabel_C* LabelInfo;
    class UOptions_Gamepad_KeyCapture_C* UI_KeyCapture_Primary;
    FCustomKeySetting ButtonSettings;

    void PreConstruct(bool IsDesignTime);
    void BndEvt__UI_KeyCapture_Primary_K2Node_ComponentBoundEvent_0_OnCapturingChanged__DelegateSignature(bool InCapturing);
    void ExecuteUbergraph_Options_Gamepad_KeyBinding(int32 EntryPoint);
};

#endif
