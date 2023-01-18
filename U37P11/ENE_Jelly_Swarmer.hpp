#ifndef UE4SS_SDK_ENE_Jelly_Swarmer_HPP
#define UE4SS_SDK_ENE_Jelly_Swarmer_HPP

class AENE_Jelly_Swarmer_C : public AEnemyDeepPathfinderCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPawnAlertComponent* PawnAlert;
    class UParticleSystemComponent* Trail;
    class UAudioComponent* JellySwarmerIdle;
    class UOutlineComponent* outline;
    class UEnemyComponent* enemy;
    class UPawnSensingComponent* PawnSensing;
    class USphereComponent* Sphere;
    class UParticleSystem* Deathpaticles;

    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void OnFrozen(class AActor* Source);
    void ExecuteUbergraph_ENE_Jelly_Swarmer(int32 EntryPoint);
};

#endif
