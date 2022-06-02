#ifndef UE4SS_SDK_AIC_Jelly_Passive_Mother_HPP
#define UE4SS_SDK_AIC_Jelly_Passive_Mother_HPP

class AAIC_Jelly_Passive_Mother_C : public AFSDAIController
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_AIC_Jelly_Passive_Mother(int32 EntryPoint);
};

#endif
