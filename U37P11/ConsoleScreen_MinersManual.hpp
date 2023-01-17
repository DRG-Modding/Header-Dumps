#ifndef UE4SS_SDK_ConsoleScreen_MinersManual_HPP
#define UE4SS_SDK_ConsoleScreen_MinersManual_HPP

class UConsoleScreen_MinersManual_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* TextAnim;
    class UConsoleScreen_BGtemplate_C* ConsoleScreen_BGtemplate;

    void Construct();
    void ExecuteUbergraph_ConsoleScreen_MinersManual(int32 EntryPoint);
};

#endif
