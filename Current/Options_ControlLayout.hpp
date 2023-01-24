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
    void ExecuteUbergraph_Options_ControlLayout(int32 EntryPoint);
};

#endif
