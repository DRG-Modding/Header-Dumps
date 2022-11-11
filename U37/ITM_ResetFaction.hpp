#ifndef UE4SS_SDK_ITM_ResetFaction_HPP
#define UE4SS_SDK_ITM_ResetFaction_HPP

class UITM_ResetFaction_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_ButtonScalable_C* Basic_ButtonScalable;
    class UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow;
    class UTextBlock* CostTextBlock;
    class USizeBox* CurrentSizebox;
    class UImage* FactionLogo;
    class UTextBlock* FactionNameTextBlock;
    class UImage* Image_429;
    class UUI_GradientMasked_Image_C* UI_GradientMasked_Image;
    class UUI_ImageTinted_C* UI_ImageTinted;
    class UCommunityGoalFaction* CurrentFaction;
    int32 Cost;
    FITM_ResetFaction_CCheckState CheckState;
    void CheckState();
    TArray<class UCommunityGoalFaction*> FactionArray;

    int32 CurrentFactionID();
    void PreConstruct(bool IsDesignTime);
    void Set Faction(class UCommunityGoalFaction* Faction);
    void BndEvt__Basic_ButtonScalable_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void OnFactionSwitch(bool Changed);
    void ExecuteUbergraph_ITM_ResetFaction(int32 EntryPoint);
    void CheckState__DelegateSignature();
};

#endif
