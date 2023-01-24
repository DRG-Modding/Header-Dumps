#ifndef UE4SS_SDK_EWC_EndMission_HPP
#define UE4SS_SDK_EWC_EndMission_HPP

class UEWC_EndMission_C : public UEWC_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector SpawnLocation;

    void StartWave();
    void ExecuteUbergraph_EWC_EndMission(int32 EntryPoint);
};

#endif
