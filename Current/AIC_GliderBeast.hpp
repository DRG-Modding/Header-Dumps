#ifndef UE4SS_SDK_AIC_GliderBeast_HPP
#define UE4SS_SDK_AIC_GliderBeast_HPP

class AAIC_GliderBeast_C : public AFSDAIController
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_AIC_GliderBeast(int32 EntryPoint);
};

#endif
