#ifndef UE4SS_SDK_BP_DropPod_Landing_Escort_HPP
#define UE4SS_SDK_BP_DropPod_Landing_Escort_HPP

class ABP_DropPod_Landing_Escort_C : public ABP_DropPod_Landing_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool ShouldDelaySpawnGarage;

    void OnFirstPlayerLeftPod();
    void BypassGarageSpawnDelay();
    void ReceiveDestroyed();
    void ExecuteUbergraph_BP_DropPod_Landing_Escort(int32 EntryPoint);
};

#endif
