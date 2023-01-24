#ifndef UE4SS_SDK_Cheat_ConsoleCmd_HPP
#define UE4SS_SDK_Cheat_ConsoleCmd_HPP

class UCheat_ConsoleCmd_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UButton* Button_0;
    FString Command;

    void Construct();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_Cheat_ConsoleCmd(int32 EntryPoint);
};

#endif
