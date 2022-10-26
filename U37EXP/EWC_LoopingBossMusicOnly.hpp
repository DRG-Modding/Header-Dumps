#ifndef UE4SS_SDK_EWC_LoopingBossMusicOnly_HPP
#define UE4SS_SDK_EWC_LoopingBossMusicOnly_HPP

class UEWC_LoopingBossMusicOnly_C : public UEWC_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void StartWave();
    void ExecuteUbergraph_EWC_LoopingBossMusicOnly(int32 EntryPoint);
};

#endif
