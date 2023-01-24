#ifndef UE4SS_SDK_BP_FriendlyParasite_HPP
#define UE4SS_SDK_BP_FriendlyParasite_HPP

class ABP_FriendlyParasite_C : public AFriendlyParasite
{
    FPointerToUberGraphFrame UberGraphFrame;
    float MaxParasiteLifetime;

    void ReceiveBeginPlay();
    void LifetimeExceded();
    void ExecuteUbergraph_BP_FriendlyParasite(int32 EntryPoint);
};

#endif
