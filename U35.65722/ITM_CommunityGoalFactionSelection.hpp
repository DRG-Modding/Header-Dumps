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

    void SetFactionOrder(int32 Faction, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, class UCommunityGoalFaction* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Percent_IntInt_ReturnValue_1, class UCommunityGoalFaction* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Percent_IntInt_ReturnValue_2, class UCommunityGoalFaction* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_3, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue);
    void Construct();
    void FactionChangedEvent1();
    void FactionChangedEvent2();
    void FactionChangedEvent3();
    void ExecuteUbergraph_ITM_CommunityGoalFactionSelection(int32 EntryPoint, FExecuteUbergraph_ITM_CommunityGoalFactionSelectionK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_ITM_CommunityGoalFactionSelectionK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FExecuteUbergraph_ITM_CommunityGoalFactionSelectionK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2);
    void FactionChanged__DelegateSignature();
};

#endif
