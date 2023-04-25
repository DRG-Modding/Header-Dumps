#ifndef UE4SS_SDK_AIC_GreatEggHunt_SpringBunny_HPP
#define UE4SS_SDK_AIC_GreatEggHunt_SpringBunny_HPP

class AAIC_GreatEggHunt_SpringBunny_C : public AFSDAIController
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_AIC_GreatEggHunt_SpringBunny(int32 EntryPoint);
};

#endif
