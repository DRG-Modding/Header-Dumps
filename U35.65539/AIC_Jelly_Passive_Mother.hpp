#ifndef UE4SS_SDK_AIC_Jelly_Passive_Mother_HPP
#define UE4SS_SDK_AIC_Jelly_Passive_Mother_HPP

class AAIC_Jelly_Passive_Mother_C : UFSDAIController
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_AIC_Jelly_Passive_Mother(int32 EntryPoint, bool CallFunc_RunBehaviorTree_ReturnValue);
}

#endif
