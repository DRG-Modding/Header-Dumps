#ifndef UE4SS_SDK_BP_ExploderInfestation_HPP
#define UE4SS_SDK_BP_ExploderInfestation_HPP

class UBP_ExploderInfestation_C : public URunningMissionBP
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UEnemyGroupDescriptor* EnemyDescriptor;

    void StartLogic();
    void StartTimer();
    void SpawnExploders();
    void ExecuteUbergraph_BP_ExploderInfestation(int32 EntryPoint);
};

#endif
