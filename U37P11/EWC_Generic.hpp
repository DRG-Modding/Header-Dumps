#ifndef UE4SS_SDK_EWC_Generic_HPP
#define UE4SS_SDK_EWC_Generic_HPP

class UEWC_Generic_C : public UEWC_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<FVector> SpawnLocations;

    void StartWave();
    void StopConstantPreassure();
    void ExecuteUbergraph_EWC_Generic(int32 EntryPoint);
};

#endif
