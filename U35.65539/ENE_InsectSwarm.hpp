#ifndef UE4SS_SDK_ENE_InsectSwarm_HPP
#define UE4SS_SDK_ENE_InsectSwarm_HPP

class AENE_InsectSwarm_C : UInsectSwarmEnemy
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStatusEffectTriggerComponent* StatusEffectTrigger1;
    USphereComponent* DamageReceiveCollider;
    USphereComponent* DamageInflictCollider;
    UParticleSystemComponent* P_InsectSwarm01_Death;
    UAudioComponent* Audio;
    UEnemyComponent* enemy;
    UParticleSystemComponent* P_InsectSwarm;

    bool GetIsTargetable();
    void UserConstructionScript();
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature(float Amount);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_ENE_InsectSwarm(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, float K2Node_ComponentBoundEvent_Amount, FVector CallFunc_K2_GetActorLocation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, TArray<UBP_NewSandStorm_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue);
}

#endif
