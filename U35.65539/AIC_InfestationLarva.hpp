#ifndef UE4SS_SDK_AIC_InfestationLarva_HPP
#define UE4SS_SDK_AIC_InfestationLarva_HPP

class AAIC_InfestationLarva_C : UFSDAIController
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_AIC_InfestationLarva(int32 EntryPoint, bool CallFunc_RunBehaviorTree_ReturnValue);
}

#endif
