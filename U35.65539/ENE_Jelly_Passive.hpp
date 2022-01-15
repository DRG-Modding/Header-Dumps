#ifndef UE4SS_SDK_ENE_Jelly_Passive_HPP
#define UE4SS_SDK_ENE_Jelly_Passive_HPP

class AENE_Jelly_Passive_C : UDeepPathfinderCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;
    UEnemyComponent* enemy;
    UAudioComponent* Audio;
    UPawnStatsComponent* PawnStats;
    USimpleHealthComponent* SimpleHealth;
    UParticleSystem* DeathParticle;
    USoundBase* DeathScream;

    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void OnDeath();
    void ExecuteUbergraph_ENE_Jelly_Passive(int32 EntryPoint, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, bool CallFunc_HasAuthority_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
}

#endif
