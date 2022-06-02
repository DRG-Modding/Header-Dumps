#ifndef UE4SS_SDK_EWC_EggHunt_Ambush_HPP
#define UE4SS_SDK_EWC_EggHunt_Ambush_HPP

class UEWC_EggHunt_Ambush_C : public UEWC_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector SpawnLocation;

    void StartWave();
    void ExecuteUbergraph_EWC_EggHunt_Ambush(int32 EntryPoint);
};

#endif
