#ifndef UE4SS_SDK_ConsoleScreen_Jobs_HPP
#define UE4SS_SDK_ConsoleScreen_Jobs_HPP

class UConsoleScreen_Jobs_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* TextAnim;
    class UConsoleScreen_BGtemplate_C* ConsoleScreen_BGtemplate;
    FText TextToDisplay;

    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ConsoleScreen_Jobs(int32 EntryPoint);
};

#endif
