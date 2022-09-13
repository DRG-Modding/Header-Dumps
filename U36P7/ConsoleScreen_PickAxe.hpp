#ifndef UE4SS_SDK_ConsoleScreen_PickAxe_HPP
#define UE4SS_SDK_ConsoleScreen_PickAxe_HPP

class UConsoleScreen_PickAxe_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UConsoleScreen_BGtemplate_C* ConsoleScreen_BGtemplate;
    class UConsoleScreen_Notification_C* ConsoleScreen_Notification;

    void Construct();
    void OnItemUINotificationChange();
    void ExecuteUbergraph_ConsoleScreen_PickAxe(int32 EntryPoint);
};

#endif
