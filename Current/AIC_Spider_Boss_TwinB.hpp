#ifndef UE4SS_SDK_AIC_Spider_Boss_TwinB_HPP
#define UE4SS_SDK_AIC_Spider_Boss_TwinB_HPP

class AAIC_Spider_Boss_TwinB_C : public AAIC_Spider_Boss_TwinBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_AIC_Spider_Boss_TwinB(int32 EntryPoint);
};

#endif
