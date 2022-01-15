#ifndef UE4SS_SDK_Console_DiscordScreen_HPP
#define UE4SS_SDK_Console_DiscordScreen_HPP

class UConsole_DiscordScreen_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Disappear;
    UWidgetAnimation* CreditsBlinkAnimation;
    UWidgetAnimation* LogoAnimation;
    UBasic_Menu_LargeWindowWithHeader_C* Basic_Menu_LargeWindowWithHeader;
    UVerticalBox* ClaimReward;
    UVerticalBox* COLLECT;
    UTextBlock* CollectTextLabel;
    UConsoleScreen_Notification_C* ConsoleScreen_Notification;
    UUI_ImageTinted_C* CreditsBlink;
    UCanvasPanel* CreditsPanel;
    UITM_CommunityGoal_ConsoleScreenV2_C* CurrentProgress;
    UVerticalBox* FreeBeers;
    UImage* Image_1;
    UImage* Image_2;
    UImage* Image_3;
    UITM_Community_Console_ClaimReward_C* ITM_Community_Console_ClaimReward;
    UITM_CommunityGoalRecruitment_ConsoleScreenV1_C* ITM_CommunityGoalRecruitment_ConsoleScreenV1;
    UITM_FactionLogo_C* ITM_FactionLogo;
    UITM_FactionLogo_C* ITM_FactionLogo_C_1;
    UITM_FactionLogo_C* ITM_FactionLogo_C_2;
    UVerticalBox* JOIN;
    UTextBlock* JoinTextLabel;
    UVerticalBox* LOADING;
    UWidgetSwitcher* MainWidgetSwitcher;
    UTextBlock* Name;
    UTextBlock* Online;
    UVerticalBox* Progress;
    UVerticalBox* RECRUITMENT;
    UVerticalBox* SELECTFACTION;
    USizeBox* SydicateLogoBox;
    UTextBlock* TextBlock_0;
    UTextBlock* TextBlock_1;
    UTextBlock* TextBlock_2;
    UTextBlock* TextBlock_3;
    UTextBlock* Total;
    UITM_CommunityGoal_TotalProgress_ConsoleScreenV2_C* TotalProgress;
    UCircularThrobber* Twitch_Loading;
    UUI_ImageTinted_C* UI_ImageTinted;
    UUI_ImageTinted_C* UI_ImageTinted_C_2;
    ABP_PlayerController_SpaceRig_C* Player;
    float TimeSinceLastUpdate;
    bool IsUserIn;
    int32 CurrentPresence;
    int32 CurrentMember;
    int32 PreviousPresence;
    int32 PreviousMember;
    float TimeSinceLoadStarted;
    bool IsLoading;
    float LoadingTime;
    FText JoinText;
    FText CollectText;
    FText DoneText;
    bool State;
    FConsole_DiscordScreen_CScreenChanged ScreenChanged;
    void ScreenChanged();
    TArray<UCommunityGoalFaction*> FactionData;
    ECommunityUIState CurrentState;

    void Handle Community Goal Content state(ECommunityUIState NextState, ECommunityUIState Temp_byte_Variable, bool Temp_bool_Variable, ECommunityUIState Temp_byte_Variable_1, bool Temp_bool_Variable_1, ECommunityUIState Temp_byte_Variable_2, bool Temp_bool_Variable_2, ECommunityUIState Temp_byte_Variable_3, UPresenceSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool Temp_bool_Variable_3, ECommunityUIState Temp_byte_Variable_4, ECommunityUIState Temp_byte_Variable_5, bool Temp_bool_Variable_4, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue_2, bool CallFunc_NotEqual_ByteByte_ReturnValue_3, bool CallFunc_NotEqual_ByteByte_ReturnValue_4, FCommunityRewardNotification K2Node_MakeStruct_CommunityRewardNotification, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, EFSDFaction CallFunc_GetFaction_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FCommunityRewardNotification K2Node_MakeStruct_CommunityRewardNotification_1, UPresenceSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, UPresenceSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, UCommunityGoalFaction* CallFunc_GetPlayerCurrentFaction_ReturnValue, bool CallFunc_RewardReceived_ReturnValue, UPresenceSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, EFSDFaction CallFunc_GetFaction_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_RewardReceived_ReturnValue_1, ECommunityUIState K2Node_Select_Default, ECommunityUIState K2Node_Select_Default_1, ECommunityUIState K2Node_Select_Default_2, ECommunityUIState K2Node_Select_Default_3, ECommunityUIState K2Node_Select_Default_4);
    void Update Content Switcher Content(UPresenceSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, UPresenceSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, UPresenceSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, bool CallFunc_RecievedDiscordReward_ReturnValue);
    void MinersUnionTier(float& DSMUTier, float RetVal, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UPresenceSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, UGameData* CallFunc_GetFSDGameData_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_Array_Get_Item_1, FString CallFunc_Array_Get_Item_2, UCommunityGoal* CallFunc_FindGoal_ReturnValue, float CallFunc_TotalTierProgress_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
    void Set Goals(TArray<FString>& Goals, TArray<float>& Values, TArray<int32>& Members, EFSDFaction Temp_byte_Variable, UCommunityGoalFaction* Temp_object_Variable, UCommunityGoalFaction* Temp_object_Variable_1, UCommunityGoalFaction* Temp_object_Variable_2, UCommunityGoalFaction* Temp_object_Variable_3, EFSDFaction Temp_byte_Variable_1, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, EFSDFaction CallFunc_GetFaction_ReturnValue, UCommunityGoalFaction* K2Node_Select_Default, float CallFunc_MinersUnionTier_DSMUTier, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, EFSDFaction CallFunc_GetFaction_ReturnValue_1, int32 K2Node_Select_Default_1);
    void StopAllLogos();
    void FactionLogosOn();
    void SetUsable(bool Usable, bool CallFunc_IsValid_ReturnValue);
    void SetScreen(bool Appear, bool force, uint8 Temp_byte_Variable, uint8 Temp_byte_Variable_1, bool Temp_bool_Variable, uint8 K2Node_Select_Default, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue);
    void LogoOn(bool CallFunc_IsAnimationPlaying_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void CreditsOn(UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void ClearTextLabels();
    void StartLoad(float LoadingTime);
    void RefreshUI(FDiscordServerData K2Node_MakeStruct_DiscordServerData);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void UpdateUI(const FDiscordServerData& discordServerCount);
    void UserInServer(bool isInServer);
    void Do Running Text(FText Text, int32 Index, UTextBlock* Target);
    void PreConstruct(bool IsDesignTime);
    void Init();
    void Stop();
    void TimedUserRequest(float Time);
    void RequestUserInByTime();
    void OnFactionsDataRecievedEvent(const TArray<FString>& Goals, const TArray<float>& Values, const TArray<int32>& Members);
    void OnCGSData(bool stateReceived);
    void OnCheckUI();
    void OnGoalInitialized();
    void ExecuteUbergraph_Console_DiscordScreen(int32 EntryPoint, OnDiscordUserInServer__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const FDiscordServerData K2Node_CustomEvent_discordServerCount, float CallFunc_Add_FloatFloat_ReturnValue, bool K2Node_CustomEvent_isInServer, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, bool CallFunc_RecievedDiscordReward_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_1, int32 Temp_int_Variable, UPresenceSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, OnDiscordServerCountLoaded__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, UPresenceSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, UPresenceSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, UPresenceSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, UPresenceSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_4, FText K2Node_CustomEvent_Text, int32 K2Node_CustomEvent_Index, UTextBlock* K2Node_CustomEvent_Target, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, FString CallFunc_Conv_TextToString_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue_1, int32 CallFunc_Len_ReturnValue, int32 CallFunc_Len_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, FString CallFunc_GetSubstring_ReturnValue, float CallFunc_FMin_ReturnValue, UPresenceSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_5, bool K2Node_Event_IsDesignTime, bool CallFunc_IsValid_ReturnValue, UICheckDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, UICheckDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, GoalStateDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, FText CallFunc_GetText_ReturnValue, FText CallFunc_GetText_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FactionsDataDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, float K2Node_CustomEvent_Time, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, const TArray<FString>& K2Node_CustomEvent_Goals, const TArray<float>& K2Node_CustomEvent_Values, const TArray<int32>& K2Node_CustomEvent_Members, UBP_PlayerController_SpaceRig_C* K2Node_DynamicCast_AsBP_Player_Controller_Space_Rig, bool K2Node_DynamicCast_bSuccess, bool K2Node_CustomEvent_stateReceived, FString Temp_string_Variable, FString Temp_string_Variable_1, bool Temp_bool_Variable, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, FString K2Node_Select_Default, FString CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_2, FText CallFunc_Conv_StringToText_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_3, float CallFunc_Conv_IntToFloat_ReturnValue_4);
    void ScreenChanged__DelegateSignature();
}

#endif
