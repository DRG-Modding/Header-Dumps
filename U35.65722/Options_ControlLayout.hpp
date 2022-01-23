#ifndef UE4SS_SDK_Options_ControlLayout_HPP
#define UE4SS_SDK_Options_ControlLayout_HPP

class UOptions_ControlLayout_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_Controller;
    class UImage* Image_Keyboard_QWERTY;
    class UWidgetSwitcher* WidgetSwitcher_Input;

    void Construct();
    void OnInputSourceChanged(EFSDInputSource InputSource);
    void ExecuteUbergraph_Options_ControlLayout(int32 EntryPoint, bool Temp_bool_Variable, FExecuteUbergraph_Options_ControlLayoutK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue, EFSDInputSource K2Node_CustomEvent_InputSource, EFSDInputSource CallFunc_GetInputSource_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UWidget* K2Node_Select_Default);
};

#endif
