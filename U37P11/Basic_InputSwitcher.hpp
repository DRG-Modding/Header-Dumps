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
    void ExecuteUbergraph_Basic_InputSwitcher(int32 EntryPoint);
    void OnSwitched__DelegateSignature(uint8 InputMode);
};

#endif
