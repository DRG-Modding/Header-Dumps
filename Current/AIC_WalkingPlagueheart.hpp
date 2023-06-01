#ifndef UE4SS_SDK_AIC_WalkingPlagueheart_HPP
#define UE4SS_SDK_AIC_WalkingPlagueheart_HPP

class AAIC_WalkingPlagueheart_C : public AAIC_Spider_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_AIC_WalkingPlagueheart(int32 EntryPoint);
};

#endif
