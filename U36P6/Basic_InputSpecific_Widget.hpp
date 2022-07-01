#ifndef UE4SS_SDK_Basic_InputSpecific_Widget_HPP
#define UE4SS_SDK_Basic_InputSpecific_Widget_HPP

class UBasic_InputSpecific_Widget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNamedSlot* Content;
    ESlateVisibility ControllerVisibility;
    ESlateVisibility OtherVisibility;

    void Construct();
    void OnInputSourceChanged(EFSDInputSource InputSource);
    void ExecuteUbergraph_Basic_InputSpecific_Widget(int32 EntryPoint);
};

#endif
