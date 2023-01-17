#ifndef UE4SS_SDK_BP_LockOnRifle_AoE_HPP
#define UE4SS_SDK_BP_LockOnRifle_AoE_HPP

class ABP_LockOnRifle_AoE_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystemComponent* P_Grenade_Cluster_Fragment;
    class UDamageComponent* Damage;
    class UAudioComponent* audio;
    class UNiagaraComponent* particle;
    class USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_LockOnRifle_AoE(int32 EntryPoint);
};

#endif
