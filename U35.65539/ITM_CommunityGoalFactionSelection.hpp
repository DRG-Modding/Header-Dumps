#ifndef UE4SS_SDK_ITM_CommunityGoalFactionSelection_HPP
#define UE4SS_SDK_ITM_CommunityGoalFactionSelection_HPP

class UITM_CommunityGoalFactionSelection_C : UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UITM_FactionSelect_C* ITM_FactionSelect;
    UITM_FactionSelect_C* ITM_FactionSelect_68;
    UITM_FactionSelect_C* ITM_FactionSelect_137;
    FITM_CommunityGoalFactionSelection_CFactionChanged FactionChanged;
    void FactionChanged();
    TArray<UCommunityGoalFaction*> FactionList;

    void SetFactionOrder(int32 Faction, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, UCommunityGoalFaction* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Percent_IntInt_ReturnValue_1, UCommunityGoalFaction* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Percent_IntInt_ReturnValue_2, UCommunityGoalFaction* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_3, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue);
    void Construct();
    void FactionChangedEvent1();
    void FactionChangedEvent2();
    void FactionChangedEvent3();
    void ExecuteUbergraph_ITM_CommunityGoalFactionSelection(int32 EntryPoint, FactionSelected__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FactionSelected__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FactionSelected__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2);
    void FactionChanged__DelegateSignature();
}

#endif
