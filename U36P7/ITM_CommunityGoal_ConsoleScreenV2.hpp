#ifndef UE4SS_SDK_ITM_CommunityGoal_ConsoleScreenV2_HPP
#define UE4SS_SDK_ITM_CommunityGoal_ConsoleScreenV2_HPP

class UITM_CommunityGoal_ConsoleScreenV2_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UButton* BackgroundButton;
    class UCheckBox* CheckBox_Goal_Bronze;
    class UCheckBox* CheckBox_Goal_Gold;
    class UCheckBox* CheckBox_Goal_Silver;
    class UTextBlock* GoalText;
    class UImage* Icon;
    class UImage* Image_Bronze;
    class UImage* Image_Gold;
    class UImage* Image_Silver;
    class UProgressBar* ProgressBar_0;
    class UProgressBar* ProgressBar_1;
    class UProgressBar* ProgressBar_2;
    class UTextBlock* TitleText;
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
    FITM_CommunityGoal_ConsoleScreenV2_CHoverStarted HoverStarted;
    void HoverStarted(class UCommunityGoalFaction* Faction, class UCommunityGoal* Goal);
    FITM_CommunityGoal_ConsoleScreenV2_CHoverEnded HoverEnded;
    void HoverEnded();

    void UpdateTitle();
    void UpdateIcon();
    void SetFaction(class UCommunityGoalFaction* Faction);
    void ResetAnim();
    void SetCommunityGoal(FText Goal, float Bronze Progress, float Silver Progress, float Gold Progress);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void PreConstruct(bool IsDesignTime);
    void SetGoal(FString GoalID, float GoalValue, int32 Members);
    void BndEvt__Button_58_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void CheckFaction();
    void ExecuteUbergraph_ITM_CommunityGoal_ConsoleScreenV2(int32 EntryPoint);
    void HoverEnded__DelegateSignature();
    void HoverStarted__DelegateSignature(class UCommunityGoalFaction* Faction, class UCommunityGoal* Goal);
};

#endif
