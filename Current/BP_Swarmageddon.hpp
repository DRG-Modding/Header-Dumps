#ifndef UE4SS_SDK_BP_Swarmageddon_HPP
#define UE4SS_SDK_BP_Swarmageddon_HPP

class UBP_Swarmageddon_C : public URunningMissionBP
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UEnemyGroupDescriptor* EnemyDescriptor;

    void StartLogic();
    void StartTimer();
    void SpawnExploders();
    void ExecuteUbergraph_BP_Swarmageddon(int32 EntryPoint);
};

#endif
