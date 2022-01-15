#ifndef UE4SS_SDK_PopUp_CommunityGoal_SelectNewFaction_HPP
#define UE4SS_SDK_PopUp_CommunityGoal_SelectNewFaction_HPP

class UPopUp_CommunityGoal_SelectNewFaction_C : UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Menu_MinimalWindow_C* BasicWindow_Minimal;
    UBlurBackground_C* BlurBackground;
    UBasic_ButtonScalable_C* Close;
    UTextBlock* DATA_Header;
    UITM_FactionSelect_C* ITM_FactionSelect;
    UITM_FactionSelect_C* ITM_FactionSelect_194;
    FPopUp_CommunityGoal_SelectNewFaction_CCheckState CheckState;
    void CheckState(bool Changed);
    int32 Fee;
    UCommunityGoalFaction* Faction1;
    UCommunityGoalFaction* Faction2;

    void Initialize(int32 Fee, UCommunityGoalFaction* Faction1, UCommunityGoalFaction* Faction2);
    void Construct();
    void Faction1Selected();
    void Faction2Selected();
    void BndEvt__Close_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void ExecuteUbergraph_PopUp_CommunityGoal_SelectNewFaction(int32 EntryPoint, FactionSelected__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FactionSelected__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1);
    void CheckState__DelegateSignature(bool Changed);
}

#endif
