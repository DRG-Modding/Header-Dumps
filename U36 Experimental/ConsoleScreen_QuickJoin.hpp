#ifndef UE4SS_SDK_ConsoleScreen_QuickJoin_HPP
#define UE4SS_SDK_ConsoleScreen_QuickJoin_HPP

class UConsoleScreen_QuickJoin_C : public UUserWidget
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
    void ExecuteUbergraph_ConsoleScreen_QuickJoin(int32 EntryPoint);
};

#endif
