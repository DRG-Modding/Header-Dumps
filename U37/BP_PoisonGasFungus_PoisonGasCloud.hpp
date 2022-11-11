#ifndef UE4SS_SDK_BP_PoisonGasFungus_PoisonGasCloud_HPP
#define UE4SS_SDK_BP_PoisonGasFungus_PoisonGasCloud_HPP

class ABP_PoisonGasFungus_PoisonGasCloud_C : public ABP_Damage_Cloud_Flamable_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    float InitialDamageDelay;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_PoisonGasFungus_PoisonGasCloud(int32 EntryPoint);
};

#endif
