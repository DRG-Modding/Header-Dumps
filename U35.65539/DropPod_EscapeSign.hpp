#ifndef UE4SS_SDK_DropPod_EscapeSign_HPP
#define UE4SS_SDK_DropPod_EscapeSign_HPP

class UDropPod_EscapeSign_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTextBlock* TextBlock_0;
    UTextBlock* TXT_Main;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_DropPod_EscapeSign(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
}

#endif
