#ifndef UE4SS_SDK_AIC_Donkey_HPP
#define UE4SS_SDK_AIC_Donkey_HPP

class AAIC_Donkey_C : public AFSDAIController
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void OnOverlapsChanged(int32 OverlapCount);
    void ExecuteUbergraph_AIC_Donkey(int32 EntryPoint);
};

#endif
