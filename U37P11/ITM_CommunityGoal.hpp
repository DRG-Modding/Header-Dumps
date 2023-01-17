#ifndef UE4SS_SDK_ITM_CommunityGoal_HPP
#define UE4SS_SDK_ITM_CommunityGoal_HPP

class UITM_CommunityGoal_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UButton* BackgroundButton;
    class UTextBlock* BronzeGoalNumber;
    class UButton* Button_Goal_0;
    class UButton* Button_Goal_1;
    class UButton* Button_Goal_2;
    class UCheckBox* CheckBox_Goal_Bronze;
    class UCheckBox* CheckBox_Goal_Gold;
    class UCheckBox* CheckBox_Goal_Silver;
    class USizeBox* CurrentSizebox;
    class UTextBlock* CurrentTextBlock;
    class UButton* FactionIconToolTip;
    class UTextBlock* GoalText;
    class UTextBlock* GoldGoalNumber;
    class UImage* Icon;
    class UImage* Image_Bronze;
    class UImage* Image_Gold;
    class UImage* Image_Silver;
    class UProgressBar* ProgressBar_0;
    class UProgressBar* ProgressBar_1;
    class UProgressBar* ProgressBar_2;
    class UTextBlock* SilverGoalNumber;
    class UTextBlock* TitleText;
    class UUI_GradientMasked_Image_C* UI_GradientMasked_Image;
    class UUI_ImageTinted_C* UI_ImageTinted;
    class UUI_ImageTinted_C* UI_ImageTinted_267;
    FText Title;
    int32 TitleSize;
    FSlateBrush IconImage;
    FProgressBarStyle BarStyle;
    float Progress0;
    float Progress1;
    float Progress2;
    FLinearColor FillColor;
    float AnimTime;
    float TotalAnimTime;
    FString CurrentGoalID;
    class UCommunityGoal* CurrentGoal;
    float CurrentValue;
    int32 CurrentMembers;
    class UCommunityGoalFaction* Faction;
    bool IsShowingCurrentPlayerFaction;
    FITM_CommunityGoal_CHoverStarted HoverStarted;
    void HoverStarted(class UCommunityGoalFaction* Faction, class UCommunityGoal* Goal);
    FITM_CommunityGoal_CHoverEnded HoverEnded;
    void HoverEnded();
    class UITM_CommunityGoalRewardToolTip_C* ToolTip;
    class UITM_FactionToolTip_C* FactionToolTip;

    void DoFactionToolTip();
    void DoToolTip(class UWidget* ToolTipTarget, int32 Tier);
    void UpdateTitle();
    void UpdateIcon();
    void SetFaction(class UCommunityGoalFaction* Faction);
    void ResetAnim();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void SetCommunityGoal(FText Goal, float Bronze Progress, float Silver Progress, float Gold Progress);
    void PreConstruct(bool IsDesignTime);
    void SetGoal(FString GoalID, float GoalValue, int32 Members, bool ForceRefresh);
    void BndEvt__Button_58_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void CheckFaction();
    void BndEvt__Button_Goal_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Goal_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Goal_2_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Goal_0_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Goal_1_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Goal_2_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_ITM_CommunityGoal(int32 EntryPoint);
    void HoverEnded__DelegateSignature();
    void HoverStarted__DelegateSignature(class UCommunityGoalFaction* Faction, class UCommunityGoal* Goal);
};

#endif
