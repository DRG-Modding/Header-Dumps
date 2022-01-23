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
    void SetHeaderBars(bool Toggle Header Bars, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default);
    void SetNotificationVisible(bool IsVisible, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void SetNotification(FText Text, class UTexture2D* InIcon);
    void SetText(FText InText, FText CallFunc_TextToUpper_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_ConsoleScreen_BGtemplate(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

#endif
