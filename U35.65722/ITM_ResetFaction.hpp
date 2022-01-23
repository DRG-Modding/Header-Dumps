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

    int32 CurrentFactionID(int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void Set Faction(class UCommunityGoalFaction* Faction);
    void BndEvt__Basic_ButtonScalable_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void OnFactionSwitch(bool Changed);
    void ExecuteUbergraph_ITM_ResetFaction(int32 EntryPoint, FExecuteUbergraph_ITM_ResetFactionK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, class UCommunityGoalFaction* K2Node_CustomEvent_Faction, FSlateBrush K2Node_MakeStruct_SlateBrush, FText CallFunc_Conv_IntToText_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, int32 CallFunc_GetCredits_ReturnValue, class UWindowManager* CallFunc_GetWindowManager_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UPopUp_CommunityGoal_SelectNewFaction_C* CallFunc_OpenSingleUseWindow_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetCredits_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_GetCredits_ReturnValue_2, bool CallFunc_GreaterEqual_IntInt_ReturnValue_2, int32 CallFunc_CurrentFactionID_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_CurrentFactionID_ReturnValue_1, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class UCommunityGoalFaction* CallFunc_Array_Get_Item, int32 CallFunc_Percent_IntInt_ReturnValue_1, bool K2Node_CustomEvent_Changed, class UCommunityGoalFaction* CallFunc_Array_Get_Item_1);
    void CheckState__DelegateSignature();
};

#endif
