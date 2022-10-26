#ifndef UE4SS_SDK_BP_Bosco_FoamGlob_HPP
#define UE4SS_SDK_BP_Bosco_FoamGlob_HPP

class ABP_Bosco_FoamGlob_C : public APRJ_Foam_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Bosco_FoamGlob(int32 EntryPoint);
};

#endif
