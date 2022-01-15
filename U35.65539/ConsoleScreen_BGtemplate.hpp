#ifndef UE4SS_SDK_ConsoleScreen_BGtemplate_HPP
#define UE4SS_SDK_ConsoleScreen_BGtemplate_HPP

class UConsoleScreen_BGtemplate_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* BGicon;
    UWidgetAnimation* TextAnim;
    UBorder* Border_0;
    UBorder* Border_2;
    UBorder* Border_3;
    UBorder* Border_4;
    UConsoleScreen_Notification_C* ConsoleScreen_Notification;
    UTextBlock* TextBlock_146;
    UTextBlock* TXT_Main;
    FText TextToDisplay;
    FText NotificationText;
    UTexture2D* NotificationIcon;
    bool NotificationVisible;
    bool Toggle Header Bars;
    int32 TextSize;

    void SetTextSize(int32 TextSize);
    void SetHeaderBars(bool Toggle Header Bars, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default);
    void SetNotificationVisible(bool IsVisible, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void SetNotification(FText Text, UTexture2D* InIcon);
    void SetText(FText InText, FText CallFunc_TextToUpper_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_ConsoleScreen_BGtemplate(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
}

#endif
