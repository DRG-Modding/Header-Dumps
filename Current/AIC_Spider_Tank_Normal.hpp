#ifndef UE4SS_SDK_AIC_Spider_Tank_Normal_HPP
#define UE4SS_SDK_AIC_Spider_Tank_Normal_HPP

class AAIC_Spider_Tank_Normal_C : public AAIC_Spider_Tank_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_AIC_Spider_Tank_Normal(int32 EntryPoint);
};

#endif
