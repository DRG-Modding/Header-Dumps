#ifndef UE4SS_SDK_ConsoleScreen_CharCustomization_HPP
#define UE4SS_SDK_ConsoleScreen_CharCustomization_HPP

class UConsoleScreen_CharCustomization_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UConsoleScreen_BGtemplate_C* ConsoleScreen_BGtemplate;
    class UConsoleScreen_Notification_C* ConsoleScreen_Notification;

    void Construct();
    void OnItemUINotificationChange();
    void ExecuteUbergraph_ConsoleScreen_CharCustomization(int32 EntryPoint);
};

#endif
