#ifndef UE4SS_SDK_BP_GameState_HPP
#define UE4SS_SDK_BP_GameState_HPP

class ABP_GameState_C : UFSDGameState
{
    FPointerToUberGraphFrame UberGraphFrame;
    USceneComponent* DefaultSceneRoot;
    TArray<UPlayerCharacterID*> InitialHeroes;
    TArray<UPlayerCharacterID*> InitialHeroesLeft;
    TSoftObjectPtr<UObject> MaggotAnimationSharing;

    TArray<UPlayerCharacterID*> GetPlayableCharacterIDs(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UGameData* CallFunc_GetFSDGameData_ReturnValue, const TArray<UPlayerCharacterID*>& CallFunc_GetRankedHeroIDs_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, UPlayerCharacterID* CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue);
    void GetRandomIntialHero(UPlayerCharacterID*& HeroClass, UPlayerCharacterID* Result, int32 Index, UPlayerCharacterID* CallFunc_Array_Get_Item, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
    void UserConstructionScript(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, UPlayerCharacterID* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
    void ReceiveBeginPlay();
    void StartGame();
    void HandleSeamlessTravelEvent();
    void ReceiveTick(float DeltaSeconds);
    void CustomEvent_0();
    void ExecuteUbergraph_BP_GameState(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, UGameModeBase* CallFunc_GetGameMode_ReturnValue, UFSDGameMode* K2Node_DynamicCast_AsFSDGame_Mode, bool K2Node_DynamicCast_bSuccess, UPlayerCharacterID* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, float K2Node_Event_DeltaSeconds, int32 CallFunc_Array_Add_ReturnValue, AsyncLoadCompleteDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Has_Been_Initd_Variable, UAsyncManager* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool Temp_bool_IsClosed_Variable, bool CallFunc_IsOnSpaceRig_OnSpaceRig, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, UObject* CallFunc_LoadAsset_Blocking_ReturnValue, UAnimationSharingSetup* K2Node_DynamicCast_AsAnimation_Sharing_Setup, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_CreateAnimationSharingManager_ReturnValue);
}

#endif
