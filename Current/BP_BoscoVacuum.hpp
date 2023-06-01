#ifndef UE4SS_SDK_BP_BoscoVacuum_HPP
#define UE4SS_SDK_BP_BoscoVacuum_HPP

class ABP_BoscoVacuum_C : public ADroneVacuumStream
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystemComponent* ParticleSystem;
    class UAudioComponent* VacuumSound;

    void ReceiveDestroyed();
    void Receive_OnAbilityDataSet();
    void ExecuteUbergraph_BP_BoscoVacuum(int32 EntryPoint);
};

#endif
