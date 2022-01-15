#ifndef UE4SS_SDK_BP_LockOnRifle_AoE_HPP
#define UE4SS_SDK_BP_LockOnRifle_AoE_HPP

class ABP_LockOnRifle_AoE_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UParticleSystemComponent* P_Grenade_Cluster_Fragment;
    UDamageComponent* Damage;
    UAudioComponent* Audio;
    UNiagaraComponent* particle;
    USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_LockOnRifle_AoE(int32 EntryPoint, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue);
}

#endif
