#ifndef UE4SS_SDK_ITM_FactionSelect_HPP
#define UE4SS_SDK_ITM_FactionSelect_HPP

class UITM_FactionSelect_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow;
    class UVerticalBox* CCDescription;
    class UTextBlock* CostTextBlock;
    class UTextBlock* FactionDescription;
    class UImage* FactionLogo;
    class UTextBlock* FactionTitle;
    class UHorizontalBox* FeeBox;
    class UImage* Image_429;
    class UBasic_ButtonScalable_C* JoinButton;
    class UImage* outline;
    class UCommunityGoalFaction* Faction;
    FITM_FactionSelect_CFactionSelected FactionSelected;
    void FactionSelected();
    int32 Fee;

    void Initialize(int32 New Fee, class UCommunityGoalFaction* Faction);
    void SetFaction(class UCommunityGoalFaction* Faction);
    void SetFee(int32 New Fee);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__JoinButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void AnswerCC(bool Yes);
    void ExecuteUbergraph_ITM_FactionSelect(int32 EntryPoint);
    void FactionSelected__DelegateSignature();
};

#endif
