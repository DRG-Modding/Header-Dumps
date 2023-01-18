#ifndef UE4SS_SDK_EWC_SW_Grunts_HPP
#define UE4SS_SDK_EWC_SW_Grunts_HPP

class UEWC_SW_Grunts_C : public UEWC_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector SpawnLocation;
    class UEnemyGroupDescriptor* EnemyGroup;
    TArray<FVector> SpawnLocations;

    void StartWave();
    void StopConstantPreassure();
    void ExecuteUbergraph_EWC_SW_Grunts(int32 EntryPoint);
};

#endif
