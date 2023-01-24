#ifndef UE4SS_SDK_ConsoleScreen_Tutorial_HPP
#define UE4SS_SDK_ConsoleScreen_Tutorial_HPP

class UConsoleScreen_Tutorial_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* TextAnim;
    class UConsoleScreen_BGtemplate_C* ConsoleScreen_BGtemplate;
    class UTextBlock* TXT_Main;
    class UTextBlock* TXT_Unavailable;
    bool ConsoleEnabled;

    void Construct();
    void DisableConsole();
    void SetConsoleEnabled(bool Enabled);
    void ExecuteUbergraph_ConsoleScreen_Tutorial(int32 EntryPoint);
};

#endif
