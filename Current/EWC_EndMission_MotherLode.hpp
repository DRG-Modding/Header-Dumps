#ifndef UE4SS_SDK_EWC_EndMission_MotherLode_HPP
#define UE4SS_SDK_EWC_EndMission_MotherLode_HPP

class UEWC_EndMission_MotherLode_C : public UEnemyWaveController
{
    FPointerToUberGraphFrame UberGraphFrame;

    void GetRandomPlayer(class APlayerCharacter*& Output_Get, bool& PlayerFound);
    void StartWave();
    void ExecuteUbergraph_EWC_EndMission_MotherLode(int32 EntryPoint);
};

#endif
