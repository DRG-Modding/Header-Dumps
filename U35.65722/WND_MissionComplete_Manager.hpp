#ifndef UE4SS_SDK_WND_MissionComplete_Manager_HPP
#define UE4SS_SDK_WND_MissionComplete_Manager_HPP

class UWND_MissionComplete_Manager_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UITM_MissionComplete_MissionState_C* ITM_MissionResultAnim;
    class USafeZone* SafeZone_0;
    class UOverlay* ScreenOverlay;
    class UUI_PlayerSpeaking_List_C* UI_PlayerSpeaking_List;
    class USCREEN_MissionComplete_DeepDive_C* DeepDiveOverlay;
    class UAudioComponent* MenuMusicComponent;
    int32 SafetyValve;

    bool ShowSpaceLoadRigOnContinue(bool CallFunc_WasFinalDeepDiveStage_ReturnValue, class UDeepDiveManager* CallFunc_GetDeepDiveManager_ReturnValue, class UDeepDive* CallFunc_GetActiveDeepDive_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void FadeoutMenuMusic(float FadeoutDuration, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsPlaying_ReturnValue);
    void StartMenuMusic(class USoundBase* MenuMusic, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, class USoundBase* Temp_object_Variable, class USoundBase* Temp_object_Variable_1, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class UGeneratedMission* CallFunc_GetGeneratedMission_ReturnValue, bool CallFunc_IsDeepDive_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, bool CallFunc_GetMissionSuccessful_ReturnValue, class USoundBase* K2Node_Select_Default);
    bool WasFinalDeepDiveStage(class UDeepDiveManager* CallFunc_GetDeepDiveManager_ReturnValue, class UDeepDive* CallFunc_GetActiveDeepDive_ReturnValue, int32 CallFunc_GetCurrentDeepDiveStage_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
    void AreAllEndResultsReady(bool& AllPlayersReady, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class APlayerState* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class AFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsEndMissionResultReady_ReturnValue);
    void SetOverlay(class UUserWidget* Content, class UOverlaySlot* Child, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue);
    void OnLoaded_FD59AC8A419416B6454AA4BD22EFF1A7(class UObject* Loaded);
    void OnLoaded_FD59AC8A419416B6454AA4BDCCA31D69(class UObject* Loaded);
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
    void ExecuteUbergraph_WND_MissionComplete_Manager(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, FExecuteUbergraph_WND_MissionComplete_ManagerK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_WND_MissionComplete_ManagerK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FExecuteUbergraph_WND_MissionComplete_ManagerK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, FExecuteUbergraph_WND_MissionComplete_ManagerK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, bool Temp_bool_IsClosed_Variable, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable, class UObject* K2Node_CustomEvent_Loaded, bool CallFunc_IsScreenFading_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsScreenFading_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, class UObject* Temp_object_Variable, class UTexture* K2Node_DynamicCast_AsTexture, bool K2Node_DynamicCast_bSuccess, TSoftObjectPtr<UTexture> CallFunc_GetRandomSpacerigLoadImagePath_Output, class UObject* K2Node_CustomEvent_Loaded_1, TSoftObjectPtr<UTexture> CallFunc_GetRandomSpacerigLoadImagePath_Output_1, FExecuteUbergraph_WND_MissionComplete_ManagerK2Node_CreateDelegate_OutputDelegate_4 K2Node_CreateDelegate_OutputDelegate_4, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool CallFunc_GetMissionSuccessful_ReturnValue, class UGeneratedMission* CallFunc_GetGeneratedMission_ReturnValue, bool CallFunc_IsSingleMission_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class USCREEN_MissionComplete_Regular_C* CallFunc_Create_ReturnValue, FExecuteUbergraph_WND_MissionComplete_ManagerK2Node_CreateDelegate_OutputDelegate_5 K2Node_CreateDelegate_OutputDelegate_5, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, class USCREEN_MissionComplete_DeepDive_C* CallFunc_Create_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_3, class AFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_AreAllEndResultsReady_AllPlayersReady, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue_1, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue_2, bool CallFunc_IsCountingDown_ReturnValue, bool CallFunc_WasFinalDeepDiveStage_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_WasFinalDeepDiveStage_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable_1, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue_3, bool Temp_bool_Has_Been_Initd_Variable_2, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue_4, bool CallFunc_LessEqual_IntInt_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue_5, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class UObject* Temp_object_Variable_1, class UTexture* K2Node_DynamicCast_AsTexture_1, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue_6, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue_7, bool CallFunc_Not_PreBool_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool Temp_bool_IsClosed_Variable_2, bool CallFunc_ShowSpaceLoadRigOnContinue_ReturnValue, bool CallFunc_ShowSpaceLoadRigOnContinue_ReturnValue_1, float K2Node_Select_Default, float K2Node_Select_Default_1);
};

#endif
