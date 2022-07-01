#ifndef UE4SS_SDK_EWC_Salvage_Defend_HPP
#define UE4SS_SDK_EWC_Salvage_Defend_HPP

class UEWC_Salvage_Defend_C : public UEWC_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector SpawnLocation;
    class UEnemyGroupDescriptor* EnemyGroup;
    int32 Wave Count Waves;
    int32 Wave Count Constant Pressure;

    void StartWave();
    void ExecuteUbergraph_EWC_Salvage_Defend(int32 EntryPoint);
};

#endif
