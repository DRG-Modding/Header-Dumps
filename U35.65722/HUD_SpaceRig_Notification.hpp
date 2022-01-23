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
    class UTextBlock* NotificationLabel;
    FSpaceRigNotification Notification;

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnIntroFinished();
    void OnOutroFinished();
    void ExecuteUbergraph_HUD_SpaceRig_Notification(int32 EntryPoint, FExecuteUbergraph_HUD_SpaceRig_NotificationK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_HUD_SpaceRig_NotificationK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor);
};

#endif
