#ifndef UE4SS_SDK_BP_LocalWaveTrigger_HPP
#define UE4SS_SDK_BP_LocalWaveTrigger_HPP

class ABP_LocalWaveTrigger_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void CheckForNearbyPlayers();
    void ExecuteUbergraph_BP_LocalWaveTrigger(int32 EntryPoint, UFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool Temp_bool_IsClosed_Variable, UPlayerCharacter* CallFunc_FindNearestPlayerCharacter_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, UFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue_1, UEnemyWaveManager* CallFunc_GetWaveManager_ReturnValue, UEWC_Refinery_BokenPipe_LocalWave_C* CallFunc_TriggerWave_ReturnValue);
}

#endif
