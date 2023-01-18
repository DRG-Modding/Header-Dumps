#ifndef UE4SS_SDK_BP_OxygenTankSound_HPP
#define UE4SS_SDK_BP_OxygenTankSound_HPP

class ABP_OxygenTankSound_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* audio;
    class USoundAttenuation* OverrideAttenuation;

    void ReceiveBeginPlay();
    void OnOxygenActivationChanged_Event_0(bool IsActive);
    void ExecuteUbergraph_BP_OxygenTankSound(int32 EntryPoint);
};

#endif
