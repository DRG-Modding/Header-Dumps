#ifndef UE4SS_SDK_AIC_InfestationLarva_HPP
#define UE4SS_SDK_AIC_InfestationLarva_HPP

class AAIC_InfestationLarva_C : public AFSDAIController
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_AIC_InfestationLarva(int32 EntryPoint);
};

#endif
