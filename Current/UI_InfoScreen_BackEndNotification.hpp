#ifndef UE4SS_SDK_UI_InfoScreen_BackEndNotification_HPP
#define UE4SS_SDK_UI_InfoScreen_BackEndNotification_HPP

class UUI_InfoScreen_BackEndNotification_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Blink;
    class UTextBlock* Body_Text;
    class UTextBlock* Header_Text;
    class UImage* LeftDot;
    class USizeBox* OptionalSize;
    class UImage* RightDot;
    FBackendNotificationEvent Notification;
    FSizeBoxSettings SizeSettings;

    void SetNotification(FBackendNotificationEvent InNotification);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_UI_InfoScreen_BackEndNotification(int32 EntryPoint);
};

#endif
