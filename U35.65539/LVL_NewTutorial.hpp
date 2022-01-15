#ifndef UE4SS_SDK_LVL_NewTutorial_HPP
#define UE4SS_SDK_LVL_NewTutorial_HPP

class ALVL_NewTutorial_C : ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    ABP_TutorialTriggerManager_C* Manager;
    UEWC_TutorialGrunts_C* WaveManager;
    UHUD_TutorialLevelManager_C* WidgetManager;
    AFSDPlayerController* PlayerController;

    void MessageReceived_Event_0(FName TriggerName);
    void ReceiveBeginPlay();
    void objectivesCompleted();
    void ExecuteUbergraph_LVL_NewTutorial(int32 EntryPoint, UFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, UEnemyWaveManager* CallFunc_GetWaveManager_ReturnValue, UEWC_TutorialGrunts_C* CallFunc_TriggerWave_ReturnValue, bool CallFunc_IsValid_ReturnValue, DelegateEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UPlayerController* CallFunc_GetPlayerController_ReturnValue, AHUD* CallFunc_GetHUD_ReturnValue, UBP_HUD_C* K2Node_DynamicCast_AsBP_HUD, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsInitialized_out, FName K2Node_CustomEvent_TriggerName, FString CallFunc_Conv_NameToString_ReturnValue, MessageReceived__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, bool K2Node_SwitchName_CmpSuccess, TArray<ABP_TutorialTriggerManager_C*>& CallFunc_GetAllActorsOfClass_OutActors, ABP_TutorialTriggerManager_C* CallFunc_Array_Get_Item, UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, UFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1, UHUD_TutorialLevelManager_C* CallFunc_Create_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, AHUD* CallFunc_GetHUD_ReturnValue_1, UFSDHUD* K2Node_DynamicCast_AsFSDHUD, bool K2Node_DynamicCast_bSuccess_2);
}

#endif
