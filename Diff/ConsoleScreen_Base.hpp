#ifndef UE4SS_SDK_ConsoleScreen_Base_HPP
#define UE4SS_SDK_ConsoleScreen_Base_HPP

class UConsoleScreen_Base_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UConsoleScreen_BGtemplate_C* ConsoleScreen_BGtemplate;
    class UConsoleScreen_Notification_C* ConsoleScreen_Notification;
    FText Text;

    void SetNotificationVisible(bool NewVisibility);
    void SetNotification(FText Text, class UTexture2D* IconTexture);
    void SetText(FText InText);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ConsoleScreen_Base(int32 EntryPoint);
};

#endif
