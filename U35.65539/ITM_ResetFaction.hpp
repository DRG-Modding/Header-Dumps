#ifndef UE4SS_SDK_ITM_ResetFaction_HPP
#define UE4SS_SDK_ITM_ResetFaction_HPP

class UITM_ResetFaction_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_ButtonScalable_C* Basic_ButtonScalable;
    UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow;
    UTextBlock* CostTextBlock;
    USizeBox* CurrentSizebox;
    UImage* FactionLogo;
    UTextBlock* FactionNameTextBlock;
    UImage* Image_429;
    UUI_GradientMasked_Image_C* UI_GradientMasked_Image;
    UUI_ImageTinted_C* UI_ImageTinted;
    UCommunityGoalFaction* CurrentFaction;
    int32 Cost;
    FITM_ResetFaction_CCheckState CheckState;
    void CheckState();
    TArray<UCommunityGoalFaction*> FactionArray;

    int32 CurrentFactionID(int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void Set Faction(UCommunityGoalFaction* Faction);
    void BndEvt__Basic_ButtonScalable_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void OnFactionSwitch(bool Changed);
    void ExecuteUbergraph_ITM_ResetFaction(int32 EntryPoint, CheckState__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, UCommunityGoalFaction* K2Node_CustomEvent_Faction, FSlateBrush K2Node_MakeStruct_SlateBrush, FText CallFunc_Conv_IntToText_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, int32 CallFunc_GetCredits_ReturnValue, UWindowManager* CallFunc_GetWindowManager_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, UPopUp_CommunityGoal_SelectNewFaction_C* CallFunc_OpenSingleUseWindow_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetCredits_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_GetCredits_ReturnValue_2, bool CallFunc_GreaterEqual_IntInt_ReturnValue_2, int32 CallFunc_CurrentFactionID_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_CurrentFactionID_ReturnValue_1, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, UCommunityGoalFaction* CallFunc_Array_Get_Item, int32 CallFunc_Percent_IntInt_ReturnValue_1, bool K2Node_CustomEvent_Changed, UCommunityGoalFaction* CallFunc_Array_Get_Item_1);
    void CheckState__DelegateSignature();
}

#endif
