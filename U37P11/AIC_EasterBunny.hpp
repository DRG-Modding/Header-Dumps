#ifndef UE4SS_SDK_AIC_EasterBunny_HPP
#define UE4SS_SDK_AIC_EasterBunny_HPP

class AAIC_EasterBunny_C : public AFSDAIController
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_AIC_EasterBunny(int32 EntryPoint);
};

#endif
