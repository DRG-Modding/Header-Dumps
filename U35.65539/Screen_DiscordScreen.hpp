#ifndef UE4SS_SDK_Screen_DiscordScreen_HPP
#define UE4SS_SDK_Screen_DiscordScreen_HPP

class UScreen_DiscordScreen_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow;
    UBasic_ButtonScalable_C* ClaimRewardButton;
    UConsoleScreen_Notification_C* ConsoleScreen_Notification;
    UWidgetSwitcher* ContentSwitcher;
    UITM_CommunityGoalFactionSelection_C* ITM_CommunityGoalFactionSelection;
    UITM_CommunityGoalProgress_C* ITM_CommunityGoalProgress;
    UITM_CommunityGoalRecruitment_C* ITM_CommunityGoalRecruitment;
    UITM_CommunityGoalReward_C* ITM_CommunityGoalReward;
    UITM_CommunityGoalReward_C* ITM_CommunityGoalReward_162;
    UVerticalBox* LOADING;
    UVerticalBox* Progress;
    UVerticalBox* RECRUITMENT;
    UVerticalBox* Reward;
    UVerticalBox* SELECTFACTION;
    UTextBlock* TextBlock_0;
    UTextBlock* TextBlock_2;
    UCircularThrobber* Twitch_Loading;
    FScreen_DiscordScreen_CScreenChanged ScreenChanged;
    void ScreenChanged(ECommunityUIState CurrentState, ECommunityUIState PreviousState);
    FText CCTitle;
    FText CCText;
    FText DDTitle;
    FText DDText;
    FText MMTitle;
    FText MMText;
    int32 Faction;
    TArray<UITM_CommunityGoal_C*> GoalsArray;
    FTimerHandle GoalStateTimer;
    ECommunityUIState CurrentState;
    ECommunityUIState LastState;
    bool IsRecruitmentPeriod;
    TArray<UCommunityGoalFaction*> FactionData;
    bool IsGoalPeriod;

    void BuildProgressUI(bool ForceRefresh, UPresenceSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, float CallFunc_MinersUnionTier_DSMUTier);
    void RefreshCurrentState(ECommunityUIState Temp_byte_Variable, UPresenceSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, UCommunityGoalFaction* CallFunc_CurrentPlayerFaction_Current_Faction, bool K2Node_SwitchEnum_CmpSuccess, UWidget* K2Node_Select_Default);
    void SetResult(UITM_CommunityGoalResult_C* ResultUI, int32 FactionID, UGameData* CallFunc_GetFSDGameData_ReturnValue, UPresenceSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, int32 CallFunc_Array_Get_Item, UCommunityGoal* CallFunc_FindGoal_ReturnValue, float CallFunc_Array_Get_Item_1, int32 CallFunc_RewardTier_ReturnValue, int32 CallFunc_FTrunc_ReturnValue);
    void AwardRewards(int32 FactionID, int32 NewLocalVar_1, int32 NewLocalVar_0, float CallFunc_MinersUnionTier_DSMUTier, UGameData* CallFunc_GetFSDGameData_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, UGameData* CallFunc_GetFSDGameData_ReturnValue_1, UPresenceSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, EFSDFaction CallFunc_GetFaction_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_Array_Get_Item, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Array_Get_Item_1, UCommunityGoal* CallFunc_FindGoal_ReturnValue, int32 CallFunc_RewardTier_ReturnValue);
    void MinersUnionTier(float& DSMUTier, float Total, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UPresenceSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, UGameData* CallFunc_GetFSDGameData_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_Array_Get_Item_1, FString CallFunc_Array_Get_Item_2, UCommunityGoal* CallFunc_FindGoal_ReturnValue, float CallFunc_TotalTierProgress_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
    void BuildRewardUI(int32 FactionID, EFSDFaction Temp_byte_Variable, UCommunityGoalFaction* Temp_object_Variable, UCommunityGoalFaction* Temp_object_Variable_1, UCommunityGoalFaction* Temp_object_Variable_2, UCommunityGoalFaction* Temp_object_Variable_3, float CallFunc_MinersUnionTier_DSMUTier, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, UGameData* CallFunc_GetFSDGameData_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, EFSDFaction CallFunc_GetFaction_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, int32 CallFunc_Conv_ByteToInt_ReturnValue, EFSDFaction CallFunc_GetFaction_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, UCommunityGoalFaction* K2Node_Select_Default, UPresenceSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, int32 CallFunc_Array_Get_Item, float CallFunc_Array_Get_Item_1, UCommunityGoal* CallFunc_FindGoal_ReturnValue);
    void CurrentPlayerFaction(UCommunityGoalFaction*& Current Faction, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, EFSDFaction CallFunc_GetFaction_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, UCommunityGoalFaction* CallFunc_Array_Get_Item);
    void SetGoalState(bool isGoal, bool isRecruitment, ECommunityUIState NextState, bool Temp_bool_Variable, ECommunityUIState Temp_byte_Variable, bool Temp_bool_Variable_1, ECommunityUIState Temp_byte_Variable_1, ECommunityUIState Temp_byte_Variable_2, bool Temp_bool_Variable_2, ECommunityUIState Temp_byte_Variable_3, bool Temp_bool_Variable_3, ECommunityUIState Temp_byte_Variable_4, bool Temp_bool_Variable_4, ECommunityUIState Temp_byte_Variable_5, ECommunityUIState Temp_byte_Variable_6, UPresenceSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_RewardReceived_ReturnValue, ECommunityUIState K2Node_Select_Default, UPresenceSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, EFSDFaction CallFunc_GetFaction_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, ECommunityUIState K2Node_Select_Default_1, UPresenceSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, ECommunityUIState K2Node_Select_Default_2, ECommunityUIState K2Node_Select_Default_3, ECommunityUIState K2Node_Select_Default_4, UCommunityGoalFaction* CallFunc_CurrentPlayerFaction_Current_Faction, bool CallFunc_NotEqual_ByteByte_ReturnValue, UWidget* K2Node_Select_Default_5);
    void SetGoals(TArray<FString>& Goals, TArray<float>& Values, TArray<int32>& Members, int32 CurrentFaction, UPresenceSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, EFSDFaction CallFunc_GetFaction_ReturnValue, float CallFunc_MinersUnionTier_DSMUTier, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue);
    void TestCommunityGoals();
    void Construct();
    void Do Running Text(FText Text, int32 Index, UTextBlock* Target);
    void PreConstruct(bool IsDesignTime);
    void CheckState();
    void RegisterEvents();
    void OnFactionsDataRecievedEvent(const TArray<FString>& Goals, const TArray<float>& Values, const TArray<int32>& Members);
    void OnCGSDataReceivedEvent(bool stateReceived);
    void RequestData();
    void Destruct();
    void ResetFactionCheckState();
    void BndEvt__ClaimRewardButton_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature();
    void OnFactionChangedEvent();
    void Refresh Ui();
    void OnGoalInitialized();
    void ExecuteUbergraph_Screen_DiscordScreen(int32 EntryPoint, FString Temp_string_Variable, bool K2Node_Event_IsDesignTime, int32 Temp_int_Variable, FText K2Node_CustomEvent_Text, int32 K2Node_CustomEvent_Index, UTextBlock* K2Node_CustomEvent_Target, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, FString CallFunc_Conv_TextToString_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue_1, int32 CallFunc_Len_ReturnValue, int32 CallFunc_Len_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, float CallFunc_FMin_ReturnValue, FString CallFunc_GetSubstring_ReturnValue, FString Temp_string_Variable_1, const TArray<FString>& K2Node_CustomEvent_Goals, const TArray<float>& K2Node_CustomEvent_Values, const TArray<int32>& K2Node_CustomEvent_Members, bool K2Node_CustomEvent_stateReceived, bool Temp_bool_Variable, FString K2Node_Select_Default, FString CallFunc_Concat_StrStr_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue, UPresenceSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, UPresenceSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, UPresenceSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, UPresenceSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_1, UICheckDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UICheckDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FactionChanged__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, CheckState__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, GoalStateDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, FactionsDataDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6);
    void ScreenChanged__DelegateSignature(ECommunityUIState CurrentState, ECommunityUIState PreviousState);
}

#endif
