#ifndef UE4SS_SDK_AIC_Spider_Spawn_HPP
#define UE4SS_SDK_AIC_Spider_Spawn_HPP

class AAIC_Spider_Spawn_C : public AAIC_Spider_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_AIC_Spider_Spawn(int32 EntryPoint);
};

#endif
