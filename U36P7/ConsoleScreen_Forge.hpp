#ifndef UE4SS_SDK_ConsoleScreen_Forge_HPP
#define UE4SS_SDK_ConsoleScreen_Forge_HPP

class UConsoleScreen_Forge_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UConsoleScreen_BGtemplate_C* ConsoleScreen_BGtemplate;
    class UConsoleScreen_Notification_C* ConsoleScreen_Notification;

    void Construct();
    void ExecuteUbergraph_ConsoleScreen_Forge(int32 EntryPoint);
};

#endif
