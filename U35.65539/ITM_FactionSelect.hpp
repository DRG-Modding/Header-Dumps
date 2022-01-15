#ifndef UE4SS_SDK_ITM_FactionSelect_HPP
#define UE4SS_SDK_ITM_FactionSelect_HPP

class UITM_FactionSelect_C : UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow;
    UVerticalBox* CCDescription;
    UTextBlock* CostTextBlock;
    UTextBlock* FactionDescription;
    UImage* FactionLogo;
    UTextBlock* FactionTitle;
    UHorizontalBox* FeeBox;
    UImage* Image_429;
    UBasic_ButtonScalable_C* JoinButton;
    UImage* outline;
    UCommunityGoalFaction* Faction;
    FITM_FactionSelect_CFactionSelected FactionSelected;
    void FactionSelected();
    int32 Fee;

    void Initialize(int32 New Fee, UCommunityGoalFaction* Faction);
    void SetFaction(UCommunityGoalFaction* Faction, bool CallFunc_IsValid_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue, FString CallFunc_Replace_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue, FSlateBrush K2Node_MakeStruct_SlateBrush);
    void SetFee(int32 New Fee, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool CallFunc_Greater_IntInt_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, ESlateVisibility K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetCredits_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__JoinButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void AnswerCC(bool Yes);
    void ExecuteUbergraph_ITM_FactionSelect(int32 EntryPoint, OnYesNoClickedDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UPresenceSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool K2Node_Event_IsDesignTime, bool K2Node_CustomEvent_Yes, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, UWindowManager* CallFunc_GetWindowManager_ReturnValue, UFaction_Popup_YesNoPrompt_C* CallFunc_OpenSingleUseWindow_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, int32 CallFunc_GetCredits_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_2, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_TryDeductCredits_ReturnValue);
    void FactionSelected__DelegateSignature();
}

#endif
