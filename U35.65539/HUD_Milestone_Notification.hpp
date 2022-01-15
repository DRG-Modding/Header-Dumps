#ifndef UE4SS_SDK_HUD_Milestone_Notification_HPP
#define UE4SS_SDK_HUD_Milestone_Notification_HPP

class UHUD_Milestone_Notification_C : UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Outro;
    UWidgetAnimation* Intro;
    UBasic_Menu_ColorBarVertical_C* Basic_Menu_ColorBarVertical;
    UBorder* Frame;
    UImage* Glow;
    UTextBlock* KPIHeader;
    UImage* StatIcon;
    UTextBlock* Title;
    UUI_Milestone_Tier_C* UI_Milestone_Tier;
    UMilestoneAsset* Milestone;
    int32 CurrentTier;
    FHUD_Milestone_Notification_COnMilestoneReached OnMilestoneReached;
    void OnMilestoneReached();

    void PreConstruct(bool IsDesignTime);
    void Init Widget();
    void Construct();
    void OnMilestoneReached_Event(UMilestoneAsset* Milestone, int32 ReachedTier);
    void OnIntroFinished();
    void OnOutroFinished();
    void ExecuteUbergraph_HUD_Milestone_Notification(int32 EntryPoint, OnMilestoneReached__DelegateSignature K2Node_CreateDelegate_OutputDelegate, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_Event_IsDesignTime, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, UTexture2D* CallFunc_GetCategoryIcon_ReturnValue, const FText CallFunc_GetTitleForTier_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor_2, FSlateColor K2Node_MakeStruct_SlateColor, const FText CallFunc_GetTitleForTier_ReturnValue_1, FText CallFunc_TextToUpper_ReturnValue, int32 CallFunc_GetCurrentProgress_Tier, float CallFunc_GetCurrentProgress_Progress, float CallFunc_GetCurrentProgress_CurrentCount, float CallFunc_GetCurrentProgress_TargetCount, UMilestoneAsset* K2Node_CustomEvent_Milestone, int32 K2Node_CustomEvent_ReachedTier, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
    void OnMilestoneReached__DelegateSignature();
}

#endif
