#ifndef UE4SS_SDK_ENE_BoughWasp_Swarm_HPP
#define UE4SS_SDK_ENE_BoughWasp_Swarm_HPP

class AENE_BoughWasp_Swarm_C : public AInsectSwarmEnemy
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStatusEffectTriggerComponent* StatusEffectTrigger1;
    class USphereComponent* DamageReceiveCollider;
    class USphereComponent* DamageInflictCollider;
    class UParticleSystemComponent* P_InsectSwarm01_Death;
    class UAudioComponent* audio;
    class UEnemyComponent* enemy;
    class UParticleSystemComponent* P_InsectSwarm;

    bool GetIsTargetable();
    void UserConstructionScript();
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature(float Amount);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_ENE_BoughWasp_Swarm(int32 EntryPoint);
};

#endif
