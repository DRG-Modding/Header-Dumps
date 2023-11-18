#ifndef UE4SS_SDK_HUD_SpaceRig_Notification_HPP
#define UE4SS_SDK_HUD_SpaceRig_Notification_HPP

class UHUD_SpaceRig_Notification_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Outro;
    class UWidgetAnimation* Intro;
    class UBorder* Frame;
    class UImage* Glow;
    class UTextBlock* Header;
    class UImage* NotificationIcon;
    class URichTextBlock* NotificationRichLabel;
    FSpaceRigNotification Notification;

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnIntroFinished();
    void OnOutroFinished();
    void ExecuteUbergraph_HUD_SpaceRig_Notification(int32 EntryPoint);
};

#endif
