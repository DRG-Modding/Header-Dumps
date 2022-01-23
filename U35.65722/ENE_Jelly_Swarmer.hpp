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
    void ExecuteUbergraph_ENE_Jelly_Swarmer(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, FVector CallFunc_GetSocketLocation_ReturnValue, class UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, bool CallFunc_HasAuthority_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class AActor* K2Node_Event_source, class APawn* CallFunc_GetInstigator_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class AAIController* CallFunc_GetAIController_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue);
};

#endif
