#ifndef UE4SS_SDK_ConsoleScreen_BGtemplate_HPP
#define UE4SS_SDK_ConsoleScreen_BGtemplate_HPP

class UConsoleScreen_BGtemplate_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* BGicon;
    class UWidgetAnimation* TextAnim;
    class UBorder* Border_0;
    class UBorder* Border_2;
    class UBorder* Border_3;
    class UBorder* Border_4;
    class UConsoleScreen_Notification_C* ConsoleScreen_Notification;
    class UTextBlock* TextBlock_146;
    class UTextBlock* TXT_Main;
    FText TextToDisplay;
    FText NotificationText;
    class UTexture2D* NotificationIcon;
    bool NotificationVisible;
    bool Toggle Header Bars;
    int32 TextSize;

    void SetTextSize(int32 TextSize);
    void SetHeaderBars(bool Toggle Header Bars);
    void SetNotificationVisible(bool IsVisible);
    void SetNotification(FText Text, class UTexture2D* InIcon);
    void SetText(FText InText);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_ConsoleScreen_BGtemplate(int32 EntryPoint);
};

#endif
