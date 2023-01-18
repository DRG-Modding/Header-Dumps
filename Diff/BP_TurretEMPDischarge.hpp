#ifndef UE4SS_SDK_BP_TurretEMPDischarge_HPP
#define UE4SS_SDK_BP_TurretEMPDischarge_HPP

class ABP_TurretEMPDischarge_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* audio;
    class UDamageComponent* Damage;
    class UParticleSystemComponent* ParticleSystem;
    class USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_TurretEMPDischarge(int32 EntryPoint);
};

#endif
