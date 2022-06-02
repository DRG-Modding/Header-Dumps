#ifndef UE4SS_SDK_EWC_Escort_EndDefense_HPP
#define UE4SS_SDK_EWC_Escort_EndDefense_HPP

class UEWC_Escort_EndDefense_C : public UEWC_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<FVector> SpawnLocations;
    FVector DestinationLocation;

    void GetDestinationLocation(FVector& Location);
    void StartWave();
    void StopConstantPreassure();
    void LoopWave();
    void SpawnNewWave();
    void SpawnLastWave();
    void SpawnExtraEnemiesDurringRockAttack();
    void ExecuteUbergraph_EWC_Escort_EndDefense(int32 EntryPoint);
};

#endif
