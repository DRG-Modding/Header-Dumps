#ifndef UE4SS_SDK_EWC_Salvage_Ambush_HPP
#define UE4SS_SDK_EWC_Salvage_Ambush_HPP

class UEWC_Salvage_Ambush_C : public UEWC_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector MuleLocation;

    void StartWave();
    void ExecuteUbergraph_EWC_Salvage_Ambush(int32 EntryPoint);
};

#endif
