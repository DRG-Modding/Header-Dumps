#ifndef UE4SS_SDK_EWC_EndMission_Tutorial_HPP
#define UE4SS_SDK_EWC_EndMission_Tutorial_HPP

class UEWC_EndMission_Tutorial_C : public UEWC_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void StartWave();
    void ExecuteUbergraph_EWC_EndMission_Tutorial(int32 EntryPoint);
};

#endif
