#ifndef UE4SS_SDK_EWC_Refinery_BokenPipe_LocalWave_HPP
#define UE4SS_SDK_EWC_Refinery_BokenPipe_LocalWave_HPP

class UEWC_Refinery_BokenPipe_LocalWave_C : public UEWC_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector SpawnLocation;

    void StartWave();
    void ExecuteUbergraph_EWC_Refinery_BokenPipe_LocalWave(int32 EntryPoint);
};

#endif
