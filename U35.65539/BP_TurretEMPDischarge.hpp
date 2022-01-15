#ifndef UE4SS_SDK_BP_TurretEMPDischarge_HPP
#define UE4SS_SDK_BP_TurretEMPDischarge_HPP

class ABP_TurretEMPDischarge_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAudioComponent* Audio;
    UDamageComponent* Damage;
    UParticleSystemComponent* ParticleSystem;
    USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_TurretEMPDischarge(int32 EntryPoint, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue);
}

#endif
