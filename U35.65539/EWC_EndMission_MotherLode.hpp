#ifndef UE4SS_SDK_EWC_EndMission_MotherLode_HPP
#define UE4SS_SDK_EWC_EndMission_MotherLode_HPP

class UEWC_EndMission_MotherLode_C : UEnemyWaveController
{
    FPointerToUberGraphFrame UberGraphFrame;

    void GetRandomPlayer(UPlayerCharacter*& Output_Get, bool& PlayerFound, UPlayerCharacter* Player, UPlayerCharacter* CallFunc_GetRandomPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void StartWave();
    void ExecuteUbergraph_EWC_EndMission_MotherLode(int32 EntryPoint, TArray<FVector>& CallFunc_GetSpawnPointsInRange_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, TArray<FVector>& CallFunc_GetSpawnPointsInRange_ReturnValue_1, TArray<FVector>& CallFunc_GetSpawnPointsInRange_ReturnValue_2, TArray<FVector>& CallFunc_GetSpawnPointsInRange_ReturnValue_3, UPlayerCharacter* CallFunc_GetRandomPlayer_Output_Get, bool CallFunc_GetRandomPlayer_PlayerFound, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_FindPointAlongPathTo_ReturnValue, FVector CallFunc_FindRandomNearbyPositionOnNavmesh_ReturnValue, const TArray<FVector>& K2Node_MakeArray_Array);
}

#endif
