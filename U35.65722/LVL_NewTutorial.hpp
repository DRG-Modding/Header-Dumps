#ifndef UE4SS_SDK_LVL_NewTutorial_HPP
#define UE4SS_SDK_LVL_NewTutorial_HPP

class ALVL_NewTutorial_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class ABP_TutorialTriggerManager_C* Manager;
    class UEWC_TutorialGrunts_C* WaveManager;
    class UHUD_TutorialLevelManager_C* WidgetManager;
    class AFSDPlayerController* PlayerController;

    void MessageReceived_Event_0(FName TriggerName);
    void ReceiveBeginPlay();
    void objectivesCompleted();
    void ExecuteUbergraph_LVL_NewTutorial(int32 EntryPoint, class AFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, class UEnemyWaveManager* CallFunc_GetWaveManager_ReturnValue, class UEWC_TutorialGrunts_C* CallFunc_TriggerWave_ReturnValue, bool CallFunc_IsValid_ReturnValue, FExecuteUbergraph_LVL_NewTutorialK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AHUD* CallFunc_GetHUD_ReturnValue, class ABP_HUD_C* K2Node_DynamicCast_AsBP_HUD, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsInitialized_out, FName K2Node_CustomEvent_TriggerName, FString CallFunc_Conv_NameToString_ReturnValue, FExecuteUbergraph_LVL_NewTutorialK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, bool K2Node_SwitchName_CmpSuccess, TArray<class ABP_TutorialTriggerManager_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABP_TutorialTriggerManager_C* CallFunc_Array_Get_Item, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, class AFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1, class UHUD_TutorialLevelManager_C* CallFunc_Create_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, class AHUD* CallFunc_GetHUD_ReturnValue_1, class AFSDHUD* K2Node_DynamicCast_AsFSDHUD, bool K2Node_DynamicCast_bSuccess_2);
};

#endif
