#ifndef UE4SS_SDK_ConsoleScreen_Notification_HPP
#define UE4SS_SDK_ConsoleScreen_Notification_HPP

class UConsoleScreen_Notification_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Ping;
    class UImage* LeftIcon;
    class UTextBlock* NotificationLabel;
    class UImage* RightIcon;
    class UBorder* TextBackground;
    class UBorder* TextBorder;
    FText NotificationText;
    int32 TextSize;
    bool UpperCase;
    FSlateBrush IconBrush;
    TEnumAsByte<ENUM_MenuColors::Type> IconColor;
    class UCategoryID* CategoryID;

    void SetTextSize(int32 InTextSize);
    void SetNotificationIcon(class UTexture2D* Texture);
    void SetNotificationText(FText Text);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void SetNotificationCategory(class UCategoryID* CategoryID);
    void OnItemCategoryChanged();
    void ExecuteUbergraph_ConsoleScreen_Notification(int32 EntryPoint);
};

#endif
