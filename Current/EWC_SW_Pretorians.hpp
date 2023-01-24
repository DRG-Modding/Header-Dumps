#ifndef UE4SS_SDK_EWC_SW_Pretorians_HPP
#define UE4SS_SDK_EWC_SW_Pretorians_HPP

class UEWC_SW_Pretorians_C : public UEWC_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector SpawnLocation;
    class UEnemyGroupDescriptor* EnemyGroup;

    void StartWave();
    void StopConstantPreassure();
    void ExecuteUbergraph_EWC_SW_Pretorians(int32 EntryPoint);
};

#endif
