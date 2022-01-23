#ifndef UE4SS_SDK_ENE_Jelly_Passive_HPP
#define UE4SS_SDK_ENE_Jelly_Passive_HPP

class AENE_Jelly_Passive_C : public ADeepPathfinderCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UEnemyComponent* enemy;
    class UAudioComponent* Audio;
    class UPawnStatsComponent* PawnStats;
    class USimpleHealthComponent* SimpleHealth;
    class UParticleSystem* DeathParticle;
    class USoundBase* DeathScream;

    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void OnDeath();
    void ExecuteUbergraph_ENE_Jelly_Passive(int32 EntryPoint, class UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, bool CallFunc_HasAuthority_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
};

#endif
