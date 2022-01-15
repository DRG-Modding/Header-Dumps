#ifndef UE4SS_SDK_ConsoleScreen_Base_HPP
#define UE4SS_SDK_ConsoleScreen_Base_HPP

class UConsoleScreen_Base_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UConsoleScreen_BGtemplate_C* ConsoleScreen_BGtemplate;
    UConsoleScreen_Notification_C* ConsoleScreen_Notification;
    FText Text;

    void SetNotificationVisible(bool NewVisibility);
    void SetNotification(FText Text, UTexture2D* IconTexture);
    void SetText(FText InText);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ConsoleScreen_Base(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
}

#endif
