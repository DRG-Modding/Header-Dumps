#ifndef UE4SS_SDK_ConsoleScreen_DeepDive_HPP
#define UE4SS_SDK_ConsoleScreen_DeepDive_HPP

class UConsoleScreen_DeepDive_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UConsoleScreen_BGtemplate_C* ConsoleScreen_BGtemplate;

    void Construct();
    void ExecuteUbergraph_ConsoleScreen_DeepDive(int32 EntryPoint);
}

#endif
