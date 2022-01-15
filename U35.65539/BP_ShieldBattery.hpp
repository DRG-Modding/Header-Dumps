#ifndef UE4SS_SDK_BP_ShieldBattery_HPP
#define UE4SS_SDK_BP_ShieldBattery_HPP

class ABP_ShieldBattery_C : UBP_ExplosiveBarrel_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_ShieldBattery(int32 EntryPoint);
}

#endif
