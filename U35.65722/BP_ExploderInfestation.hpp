#ifndef UE4SS_SDK_BP_ExploderInfestation_HPP
#define UE4SS_SDK_BP_ExploderInfestation_HPP

class UBP_ExploderInfestation_C : public URunningMissionBP
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UEnemyGroupDescriptor* EnemyDescriptor;

    void StartLogic();
    void StartTimer();
    void SpawnExploders();
    void ExecuteUbergraph_BP_ExploderInfestation(int32 EntryPoint, FExecuteUbergraph_BP_ExploderInfestationK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, float CallFunc_RandomFloatInRange_ReturnValue, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, FVector CallFunc_GetSpawnPointInRange_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, FVector CallFunc_GetSpawnPointInRange_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess, FVector CallFunc_GetSpawnPointInRange_ReturnValue_2, FVector CallFunc_GetSpawnPointInRange_ReturnValue_3, FVector CallFunc_GetSpawnPointInRange_ReturnValue_4, FVector CallFunc_GetSpawnPointInRange_ReturnValue_5);
};

#endif
