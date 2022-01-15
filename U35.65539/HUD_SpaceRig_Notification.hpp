#ifndef UE4SS_SDK_HUD_SpaceRig_Notification_HPP
#define UE4SS_SDK_HUD_SpaceRig_Notification_HPP

class UHUD_SpaceRig_Notification_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Outro;
    UWidgetAnimation* Intro;
    UBorder* Frame;
    UImage* Glow;
    UTextBlock* Header;
    UImage* NotificationIcon;
    UTextBlock* NotificationLabel;
    FSpaceRigNotification Notification;

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnIntroFinished();
    void OnOutroFinished();
    void ExecuteUbergraph_HUD_SpaceRig_Notification(int32 EntryPoint, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_Event_IsDesignTime, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor);
}

#endif
