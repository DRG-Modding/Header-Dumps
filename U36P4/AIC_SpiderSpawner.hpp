#ifndef UE4SS_SDK_AIC_SpiderSpawner_HPP
#define UE4SS_SDK_AIC_SpiderSpawner_HPP

class AAIC_SpiderSpawner_C : public AFSDAIController
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_AIC_SpiderSpawner(int32 EntryPoint);
};

#endif
