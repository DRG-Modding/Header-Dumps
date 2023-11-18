#ifndef UE4SS_SDK_ConsoleScreen_Season01_HPP
#define UE4SS_SDK_ConsoleScreen_Season01_HPP

class UConsoleScreen_Season01_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* BackgroundAnim;
    class UWidgetAnimation* TextAnim;
    class UBorder* Border_3;
    class UConsoleScreen_Notification_C* ConsoleScreen_Notification;
    class UImage* Image_46;
    class UImage* Image_197;
    FText TextToDisplay;
    FText NotificationText;
    class UTexture2D* NotificationIcon;
    bool NotificationVisible;
    bool Toggle Header Bars;
    int32 TextSize;

    void SetNotificationVisible(bool IsVisible);
    void SetNotification(FText Text, class UTexture2D* InIcon);
    void PreConstruct(bool IsDesignTime);
    void OnClaimStatusChanged(bool AllClaimed);
    void OnTokensChanged(int32 NumberOfTokens, int32 Change);
    void Construct();
    void OnWeaponMaintenanceChanged();
    void ExecuteUbergraph_ConsoleScreen_Season01(int32 EntryPoint);
};

#endif
