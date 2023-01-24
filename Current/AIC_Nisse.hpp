#ifndef UE4SS_SDK_AIC_Nisse_HPP
#define UE4SS_SDK_AIC_Nisse_HPP

class AAIC_Nisse_C : public AFSDAIController
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_AIC_Nisse(int32 EntryPoint);
};

#endif
