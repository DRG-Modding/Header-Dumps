#ifndef UE4SS_SDK_EWC_OktoberFest_BeerAmbush_HPP
#define UE4SS_SDK_EWC_OktoberFest_BeerAmbush_HPP

class UEWC_OktoberFest_BeerAmbush_C : public UEWC_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector MugLocation;

    void StartWave();
    void ExecuteUbergraph_EWC_OktoberFest_BeerAmbush(int32 EntryPoint);
};

#endif
