#ifndef UE4SS_SDK_ITM_CommunityGoalFactionSelection_HPP
#define UE4SS_SDK_ITM_CommunityGoalFactionSelection_HPP

class UITM_CommunityGoalFactionSelection_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UITM_FactionSelect_C* ITM_FactionSelect;
    class UITM_FactionSelect_C* ITM_FactionSelect_68;
    class UITM_FactionSelect_C* ITM_FactionSelect_137;
    FITM_CommunityGoalFactionSelection_CFactionChanged FactionChanged;
    void FactionChanged();
    TArray<class UCommunityGoalFaction*> FactionList;

    void SetFactionOrder();
    void Construct();
    void FactionChangedEvent1();
    void FactionChangedEvent2();
    void FactionChangedEvent3();
    void ExecuteUbergraph_ITM_CommunityGoalFactionSelection(int32 EntryPoint);
    void FactionChanged__DelegateSignature();
};

#endif
