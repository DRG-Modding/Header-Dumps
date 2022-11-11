#ifndef UE4SS_SDK_EWC_Escort_EndMission_HPP
#define UE4SS_SDK_EWC_Escort_EndMission_HPP

class UEWC_Escort_EndMission_C : public UEWC_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector SpawnLocation;
    class UEnemyGroupDescriptor* EnemyGroup;

    void StartWave();
    void ExecuteUbergraph_EWC_Escort_EndMission(int32 EntryPoint);
};

#endif
