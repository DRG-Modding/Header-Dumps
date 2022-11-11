#ifndef UE4SS_SDK_ConsoleScreen_MemorialQuotes_HPP
#define UE4SS_SDK_ConsoleScreen_MemorialQuotes_HPP

class UConsoleScreen_MemorialQuotes_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* TextAnim;
    class UTextBlock* TextBlock_2;
    class UTextBlock* TextBlock_146;
    class UTextBlock* TXT_Main;
    TArray<FString> SetText;
    TArray<FText> texts;
    TArray<FText> TextTester;

    void Construct();
    void ExecuteUbergraph_ConsoleScreen_MemorialQuotes(int32 EntryPoint);
};

#endif
