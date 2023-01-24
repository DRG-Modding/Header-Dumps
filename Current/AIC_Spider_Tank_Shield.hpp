#ifndef UE4SS_SDK_AIC_Spider_Tank_Shield_HPP
#define UE4SS_SDK_AIC_Spider_Tank_Shield_HPP

class AAIC_Spider_Tank_Shield_C : public AAIC_Spider_Tank_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_AIC_Spider_Tank_Shield(int32 EntryPoint);
};

#endif
