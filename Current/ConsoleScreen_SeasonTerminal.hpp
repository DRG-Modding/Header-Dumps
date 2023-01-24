#ifndef UE4SS_SDK_ConsoleScreen_SeasonTerminal_HPP
#define UE4SS_SDK_ConsoleScreen_SeasonTerminal_HPP

class UConsoleScreen_SeasonTerminal_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* TextAnim;
    class UConsoleScreen_BGtemplate_C* ConsoleScreen_BGtemplate;

    void Construct();
    void ExecuteUbergraph_ConsoleScreen_SeasonTerminal(int32 EntryPoint);
};

#endif
