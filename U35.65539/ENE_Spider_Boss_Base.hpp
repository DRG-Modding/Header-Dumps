#ifndef UE4SS_SDK_ENE_Spider_Boss_Base_HPP
#define UE4SS_SDK_ENE_Spider_Boss_Base_HPP

class AENE_Spider_Boss_Base_C : UENE_SpiderBase_Large_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    TMap<APlayerCharacter*, float> Player to Damage Map;
    UFSDAchievement* DesignatedDecoy;
    UFSDAchievement* PestControl;
    UFSDAchievement* JustAnotherBugHunt;
    UFSDAchievement* WithoutAPaddle;
    UFSDAchievement* BigGameHunter;
    int32 PlayerKills;
    FName AnalyticsName;

    void Check Without A Paddle Achievement(UPlayerCharacter* OnlyPlayerAlive, int32 AlivePlayers, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, UPlayerCharacter* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsAlive_ReturnValue);
    void DifficultyAsInt(int32& Difficulty, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue, FString CallFunc_Right_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue);
    void OnBossFightCompleted(UPlayerCharacter* CallFunc_FindMostDamagedPlayer_Designated_Decoy, UFSDPlayerController* CallFunc_GetPlayerController_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, UGoogleAnalyticsWrapper* CallFunc_GetGoogleAnalyticsWrapper_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, int32 CallFunc_DifficultyAsInt_Difficulty, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue);
    void FindMostDamagedPlayer(UPlayerCharacter*& Designated Decoy, float MaxDamageTakenByPlayer, UPlayerCharacter* CurrentTopDamagedPlayer, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<UPlayerCharacter*>& CallFunc_Map_Keys_Keys, UPlayerCharacter* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
    void ReceiveBeginPlay();
    void OnDamagedPlayer(UPlayerCharacter* Player, float Amount);
    void OnAllDwarvesDown();
    void ExecuteUbergraph_ENE_Spider_Boss_Base(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, DelegateEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Variable, UPlayerCharacter* K2Node_Event_player, float K2Node_Event_amount, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsDead_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, UGoogleAnalyticsWrapper* CallFunc_GetGoogleAnalyticsWrapper_ReturnValue, bool CallFunc_IsAlive_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue);
}

#endif
