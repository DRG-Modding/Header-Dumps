#ifndef UE4SS_SDK_ITM_CommunityGoalInformation_HPP
#define UE4SS_SDK_ITM_CommunityGoalInformation_HPP

class UITM_CommunityGoalInformation_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_1;
    class UUI_ImageTinted_C* Border;
    class UButton* FactionIconToolTip;
    class UTextBlock* GoalText;
    class UImage* Icon;
    class UVerticalBox* InfoBox;
    class UTextBlock* TextBlock_0;
    class UTextBlock* TitleText;
    class UUI_HorizontalResourceBar_C* UI_HorizontalResourceBar;
    class UUI_ImageTinted_C* UI_ImageTinted_267;
    FText Title;
    FSlateBrush IconImage;
    class UCommunityGoal* CurrentGoal;
    class UCommunityGoalFaction* Faction;
    bool IsShowingCurrentPlayerFaction;
    class UITM_FactionToolTip_C* FactionToolTip;

    void DoFactionToolTip();
    void SetResourceBox(int32 Tier);
    void UpdateIcon();
    void SetFaction(class UCommunityGoalFaction* Faction);
    void ResetAnim();
    void PreConstruct(bool IsDesignTime);
    void SetGoal(class UCommunityGoal* Goal);
    void CheckFaction();
    void SetFactionAndGoal(class UCommunityGoalFaction* Faction, class UCommunityGoal* Goal);
    void BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_ITM_CommunityGoalInformation(int32 EntryPoint);
};

#endif
