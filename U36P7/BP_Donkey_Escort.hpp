#ifndef UE4SS_SDK_BP_Donkey_Escort_HPP
#define UE4SS_SDK_BP_Donkey_Escort_HPP

class ABP_Donkey_Escort_C : public ABP_Donkey_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystemComponent* P_OmoranHeartStoneMagic_01;
    class UStaticMeshComponent* SM_OmoranStrap_01;
    class UStaticMeshComponent* HearthStone;

    void ReceiveBeginPlay();
    void OnResourceAdded_Event_0(class UCappedResource* Resource);
    void ExecuteUbergraph_BP_Donkey_Escort(int32 EntryPoint);
};

#endif
