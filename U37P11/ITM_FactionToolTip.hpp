#ifndef UE4SS_SDK_ITM_FactionToolTip_HPP
#define UE4SS_SDK_ITM_FactionToolTip_HPP

class UITM_FactionToolTip_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow;
    class UVerticalBox* CCDescription;
    class UTextBlock* FactionDescription;
    class UImage* FactionLogo;
    class UTextBlock* FactionTitle;
    class UImage* outline;
    class UCommunityGoalFaction* Faction;
    FITM_FactionToolTip_CFactionSelected FactionSelected;
    void FactionSelected();

    void Initialize(int32 New Fee, class UCommunityGoalFaction* Faction);
    void SetFaction(class UCommunityGoalFaction* Faction);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_FactionToolTip(int32 EntryPoint);
    void FactionSelected__DelegateSignature();
};

#endif
