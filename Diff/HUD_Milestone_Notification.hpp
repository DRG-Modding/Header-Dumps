#ifndef UE4SS_SDK_HUD_Milestone_Notification_HPP
#define UE4SS_SDK_HUD_Milestone_Notification_HPP

class UHUD_Milestone_Notification_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Outro;
    class UWidgetAnimation* Intro;
    class UBasic_Menu_ColorBarVertical_C* Basic_Menu_ColorBarVertical;
    class UBorder* Frame;
    class UImage* Glow;
    class UTextBlock* KPIHeader;
    class UImage* StatIcon;
    class UTextBlock* Title;
    class UUI_Milestone_Tier_C* UI_Milestone_Tier;
    class UMilestoneAsset* Milestone;
    int32 CurrentTier;
    FHUD_Milestone_Notification_COnMilestoneReached OnMilestoneReached;
    void OnMilestoneReached();

    void PreConstruct(bool IsDesignTime);
    void Init Widget();
    void Construct();
    void OnMilestoneReached_Event(class UMilestoneAsset* Milestone, int32 ReachedTier);
    void OnIntroFinished();
    void OnOutroFinished();
    void ExecuteUbergraph_HUD_Milestone_Notification(int32 EntryPoint);
    void OnMilestoneReached__DelegateSignature();
};

#endif
