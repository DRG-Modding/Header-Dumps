#ifndef UE4SS_SDK_PopUp_CommunityGoal_SelectNewFaction_HPP
#define UE4SS_SDK_PopUp_CommunityGoal_SelectNewFaction_HPP

class UPopUp_CommunityGoal_SelectNewFaction_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_MinimalWindow_C* BasicWindow_Minimal;
    class UBlurBackground_C* BlurBackground;
    class UBasic_ButtonScalable_C* Close;
    class UTextBlock* DATA_Header;
    class UITM_FactionSelect_C* ITM_FactionSelect;
    class UITM_FactionSelect_C* ITM_FactionSelect_194;
    FPopUp_CommunityGoal_SelectNewFaction_CCheckState CheckState;
    void CheckState(bool Changed);
    int32 Fee;
    class UCommunityGoalFaction* Faction1;
    class UCommunityGoalFaction* Faction2;

    void Initialize(int32 Fee, class UCommunityGoalFaction* Faction1, class UCommunityGoalFaction* Faction2);
    void Construct();
    void Faction1Selected();
    void Faction2Selected();
    void BndEvt__Close_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void ExecuteUbergraph_PopUp_CommunityGoal_SelectNewFaction(int32 EntryPoint);
    void CheckState__DelegateSignature(bool Changed);
};

#endif
