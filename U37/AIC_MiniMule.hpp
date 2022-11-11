#ifndef UE4SS_SDK_AIC_MiniMule_HPP
#define UE4SS_SDK_AIC_MiniMule_HPP

class AAIC_MiniMule_C : public AFSDAIController
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void CustomEvent_0();
    void ExecuteUbergraph_AIC_MiniMule(int32 EntryPoint);
};

#endif
