#ifndef UE4SS_SDK_Basic_InputSwitcher_HPP
#define UE4SS_SDK_Basic_InputSwitcher_HPP

class UBasic_InputSwitcher_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNamedSlot* ControllerContent;
    class UWidgetSwitcher* InputSwitcher;
    class UNamedSlot* KeyboardMouseContent;
    EFSDInputSource PreviewInput;
    FBasic_InputSwitcher_COnSwitched OnSwitched;
    void OnSwitched(uint8 InputMode);

    void Construct();
    void OnInputSourceChanged(EFSDInputSource InputSource);
    void PreConstruct(bool IsDesignTime);
    void SetInputMode(EFSDInputSource InputMode);
    void ExecuteUbergraph_Basic_InputSwitcher(int32 EntryPoint, bool Temp_bool_Variable, FExecuteUbergraph_Basic_InputSwitcherK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue, EFSDInputSource K2Node_CustomEvent_InputSource, EFSDInputSource CallFunc_GetInputSource_ReturnValue, bool K2Node_Event_IsDesignTime, EFSDInputSource K2Node_CustomEvent_InputMode, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UWidget* K2Node_Select_Default);
    void OnSwitched__DelegateSignature(uint8 InputMode);
};

#endif
