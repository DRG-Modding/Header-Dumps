#ifndef UE4SS_SDK_AIC_FriendlyParasite_HPP
#define UE4SS_SDK_AIC_FriendlyParasite_HPP

class AAIC_FriendlyParasite_C : public AFSDAIController
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_AIC_FriendlyParasite(int32 EntryPoint);
};

#endif
