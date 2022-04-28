#ifndef UE4SS_SDK_AIC_Terminator_HPP
#define UE4SS_SDK_AIC_Terminator_HPP

class AAIC_Terminator_C : public AFSDAIController
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_AIC_Terminator(int32 EntryPoint);
};

#endif
