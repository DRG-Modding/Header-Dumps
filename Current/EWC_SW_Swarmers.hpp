#ifndef UE4SS_SDK_EWC_SW_Swarmers_HPP
#define UE4SS_SDK_EWC_SW_Swarmers_HPP

class UEWC_SW_Swarmers_C : public UEWC_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector SpawnLocation;
    class UEnemyGroupDescriptor* EnemyGroup;

    void StartWave();
    void StopConstantPreassure();
    void ExecuteUbergraph_EWC_SW_Swarmers(int32 EntryPoint);
};

#endif
