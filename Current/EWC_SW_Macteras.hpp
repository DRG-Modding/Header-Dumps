#ifndef UE4SS_SDK_EWC_SW_Macteras_HPP
#define UE4SS_SDK_EWC_SW_Macteras_HPP

class UEWC_SW_Macteras_C : public UEWC_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector SpawnLocation;
    class UEnemyGroupDescriptor* EnemyGroup;

    void StartWave();
    void StopConstantPreassure();
    void ExecuteUbergraph_EWC_SW_Macteras(int32 EntryPoint);
};

#endif
