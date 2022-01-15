#ifndef UE4SS_SDK_Basic_InputSpecific_Widget_HPP
#define UE4SS_SDK_Basic_InputSpecific_Widget_HPP

class UBasic_InputSpecific_Widget_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UNamedSlot* Content;
    ESlateVisibility ControllerVisibility;
    ESlateVisibility OtherVisibility;

    void Construct();
    void OnInputSourceChanged(EFSDInputSource InputSource);
    void ExecuteUbergraph_Basic_InputSpecific_Widget(int32 EntryPoint, InputSourceChangedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue, EFSDInputSource K2Node_CustomEvent_InputSource, bool CallFunc_EqualEqual_ByteByte_ReturnValue, EFSDInputSource CallFunc_GetInputSource_ReturnValue);
}

#endif
