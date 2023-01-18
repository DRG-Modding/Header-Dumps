#ifndef UE4SS_SDK_ConsoleScreen_Trading_HPP
#define UE4SS_SDK_ConsoleScreen_Trading_HPP

class UConsoleScreen_Trading_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UConsoleScreen_BGtemplate_C* ConsoleScreen_BGtemplate;

    void Construct();
    void ExecuteUbergraph_ConsoleScreen_Trading(int32 EntryPoint);
};

#endif
