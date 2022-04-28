#ifndef UE4SS_SDK_DropPod_EscapeSign_HPP
#define UE4SS_SDK_DropPod_EscapeSign_HPP

class UDropPod_EscapeSign_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* TextBlock_0;
    class UTextBlock* TXT_Main;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_DropPod_EscapeSign(int32 EntryPoint);
};

#endif
