#ifndef UE4SS_SDK_WND_MissionComplete_Manager_HPP
#define UE4SS_SDK_WND_MissionComplete_Manager_HPP

class UWND_MissionComplete_Manager_C : UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UITM_MissionComplete_MissionState_C* ITM_MissionResultAnim;
    USafeZone* SafeZone_0;
    UOverlay* ScreenOverlay;
    UUI_PlayerSpeaking_List_C* UI_PlayerSpeaking_List;
    USCREEN_MissionComplete_DeepDive_C* DeepDiveOverlay;
    UAudioComponent* MenuMusicComponent;
    int32 SafetyValve;

    bool ShowSpaceLoadRigOnContinue(bool CallFunc_WasFinalDeepDiveStage_ReturnValue, UDeepDiveManager* CallFunc_GetDeepDiveManager_ReturnValue, UDeepDive* CallFunc_GetActiveDeepDive_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void FadeoutMenuMusic(float FadeoutDuration, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsPlaying_ReturnValue);
    void StartMenuMusic(USoundBase* MenuMusic, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, USoundBase* Temp_object_Variable, USoundBase* Temp_object_Variable_1, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, UGeneratedMission* CallFunc_GetGeneratedMission_ReturnValue, bool CallFunc_IsDeepDive_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, bool CallFunc_GetMissionSuccessful_ReturnValue, USoundBase* K2Node_Select_Default);
    bool WasFinalDeepDiveStage(UDeepDiveManager* CallFunc_GetDeepDiveManager_ReturnValue, UDeepDive* CallFunc_GetActiveDeepDive_ReturnValue, int32 CallFunc_GetCurrentDeepDiveStage_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
    void AreAllEndResultsReady(bool& AllPlayersReady, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, UPlayerState* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, UFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsEndMissionResultReady_ReturnValue);
    void SetOverlay(UUserWidget* Content, UOverlaySlot* Child, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue);
    void OnLoaded_FD59AC8A419416B6454AA4BD22EFF1A7(UObject* Loaded);
    void OnLoaded_FD59AC8A419416B6454AA4BDCCA31D69(UObject* Loaded);
    void Start Normal End Screen();
    void Start Deep Dive End Screen();
    void BndEvt__ITM_MissionComplete_MissionState_K2Node_ComponentBoundEvent_0_OnAnnouncementFinished__DelegateSignature();
    void BndEvt__ITM_MissionComplete_MissionState_K2Node_ComponentBoundEvent_1_OnFadeOutOverlayFinished__DelegateSignature();
    void BndEvt__ITM_MissionComplete_MissionState_K2Node_ComponentBoundEvent_2_OnFadeOutBackgroundFinished__DelegateSignature();
    void On Deep Dive Continue Clicked();
    void Mark Ready To Continue();
    void OnRegularContinue();
    void OnDeepDiveContinueCountdownChanged();
    void Transition To Normal End Screen();
    void OnContinueCountdownChanged();
    void Setup Continue Count Down();
    void OnShown();
    void ExecuteUbergraph_WND_MissionComplete_Manager(int32 EntryPoint, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, OnContinue__DelegateSignature K2Node_CreateDelegate_OutputDelegate, OnContinue__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, DelegateEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, DelegateEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, bool Temp_bool_IsClosed_Variable, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable, UObject* K2Node_CustomEvent_Loaded, bool CallFunc_IsScreenFading_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsScreenFading_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, UObject* Temp_object_Variable, UTexture* K2Node_DynamicCast_AsTexture, bool K2Node_DynamicCast_bSuccess, SoftObjectProperty CallFunc_GetRandomSpacerigLoadImagePath_Output, UObject* K2Node_CustomEvent_Loaded_1, SoftObjectProperty CallFunc_GetRandomSpacerigLoadImagePath_Output_1, OnAssetLoaded__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool CallFunc_GetMissionSuccessful_ReturnValue, UGeneratedMission* CallFunc_GetGeneratedMission_ReturnValue, bool CallFunc_IsSingleMission_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, USCREEN_MissionComplete_Regular_C* CallFunc_Create_ReturnValue, OnAssetLoaded__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, USCREEN_MissionComplete_DeepDive_C* CallFunc_Create_ReturnValue_1, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_3, UFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_AreAllEndResultsReady_AllPlayersReady, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue_1, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue_2, bool CallFunc_IsCountingDown_ReturnValue, bool CallFunc_WasFinalDeepDiveStage_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_WasFinalDeepDiveStage_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable_1, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue_3, bool Temp_bool_Has_Been_Initd_Variable_2, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue_4, bool CallFunc_LessEqual_IntInt_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue_5, UGameStateBase* CallFunc_GetGameState_ReturnValue, UObject* Temp_object_Variable_1, UTexture* K2Node_DynamicCast_AsTexture_1, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue_6, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue_7, bool CallFunc_Not_PreBool_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool Temp_bool_IsClosed_Variable_2, bool CallFunc_ShowSpaceLoadRigOnContinue_ReturnValue, bool CallFunc_ShowSpaceLoadRigOnContinue_ReturnValue_1, float K2Node_Select_Default, float K2Node_Select_Default_1);
}

#endif
