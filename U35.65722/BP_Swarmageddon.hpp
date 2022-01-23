#ifndef UE4SS_SDK_BP_Swarmageddon_HPP
#define UE4SS_SDK_BP_Swarmageddon_HPP

class UBP_Swarmageddon_C : public URunningMissionBP
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UEnemyGroupDescriptor* EnemyDescriptor;

    void StartLogic();
    void StartTimer();
    void SpawnExploders();
    void ExecuteUbergraph_BP_Swarmageddon(int32 EntryPoint, FVector CallFunc_GetSpawnPointInRange_ReturnValue, FExecuteUbergraph_BP_SwarmageddonK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, float CallFunc_RandomFloatInRange_ReturnValue, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, FVector CallFunc_GetSpawnPointInRange_ReturnValue_1, int32 CallFunc_RandomIntegerInRange_ReturnValue, FVector CallFunc_GetSpawnPointInRange_ReturnValue_2, bool K2Node_SwitchInteger_CmpSuccess, FVector CallFunc_GetSpawnPointInRange_ReturnValue_3, FVector CallFunc_GetSpawnPointInRange_ReturnValue_4);
};

#endif
