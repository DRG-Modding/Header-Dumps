#ifndef UE4SS_SDK_Options_ControlLayout_HPP
#define UE4SS_SDK_Options_ControlLayout_HPP

class UOptions_ControlLayout_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* Image_Controller;
    UImage* Image_Keyboard_QWERTY;
    UWidgetSwitcher* WidgetSwitcher_Input;

    void Construct();
    void OnInputSourceChanged(EFSDInputSource InputSource);
    void ExecuteUbergraph_Options_ControlLayout(int32 EntryPoint, bool Temp_bool_Variable, InputSourceChangedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue, EFSDInputSource K2Node_CustomEvent_InputSource, EFSDInputSource CallFunc_GetInputSource_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, UWidget* K2Node_Select_Default);
}

#endif
