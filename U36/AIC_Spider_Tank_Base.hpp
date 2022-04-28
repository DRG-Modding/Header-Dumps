#ifndef UE4SS_SDK_AIC_Spider_Tank_Base_HPP
#define UE4SS_SDK_AIC_Spider_Tank_Base_HPP

class AAIC_Spider_Tank_Base_C : public AAIC_Spider_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool HasSpecialAttack;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_AIC_Spider_Tank_Base(int32 EntryPoint);
};

#endif
