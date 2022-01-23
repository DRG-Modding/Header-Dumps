#ifndef UE4SS_SDK_ENE_InsectSwarm_HPP
#define UE4SS_SDK_ENE_InsectSwarm_HPP

class AENE_InsectSwarm_C : public AInsectSwarmEnemy
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStatusEffectTriggerComponent* StatusEffectTrigger1;
    class USphereComponent* DamageReceiveCollider;
    class USphereComponent* DamageInflictCollider;
    class UParticleSystemComponent* P_InsectSwarm01_Death;
    class UAudioComponent* Audio;
    class UEnemyComponent* enemy;
    class UParticleSystemComponent* P_InsectSwarm;

    bool GetIsTargetable();
    void UserConstructionScript();
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature(float Amount);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_ENE_InsectSwarm(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, class UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, float K2Node_ComponentBoundEvent_Amount, FVector CallFunc_K2_GetActorLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, TArray<class ABP_NewSandStorm_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue);
};

#endif
