#ifndef UE4SS_SDK_ConsoleScreen_SelectCharacterOnly_HPP
#define UE4SS_SDK_ConsoleScreen_SelectCharacterOnly_HPP

class UConsoleScreen_SelectCharacterOnly_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* TextAnim;
    class UConsoleScreen_BGtemplate_C* ConsoleScreen_BGtemplate;

    void Construct();
    void ExecuteUbergraph_ConsoleScreen_SelectCharacterOnly(int32 EntryPoint);
};

#endif
