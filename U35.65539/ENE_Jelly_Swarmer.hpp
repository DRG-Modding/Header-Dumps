#ifndef UE4SS_SDK_ENE_Jelly_Swarmer_HPP
#define UE4SS_SDK_ENE_Jelly_Swarmer_HPP

class AENE_Jelly_Swarmer_C : UEnemyDeepPathfinderCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;
    UPawnAlertComponent* PawnAlert;
    UParticleSystemComponent* Trail;
    UAudioComponent* JellySwarmerIdle;
    UOutlineComponent* outline;
    UEnemyComponent* enemy;
    UPawnSensingComponent* PawnSensing;
    USphereComponent* Sphere;
    UParticleSystem* Deathpaticles;

    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void OnFrozen(AActor* Source);
    void ExecuteUbergraph_ENE_Jelly_Swarmer(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, FVector CallFunc_GetSocketLocation_ReturnValue, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, bool CallFunc_HasAuthority_ReturnValue_1, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, AActor* K2Node_Event_source, APawn* CallFunc_GetInstigator_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, UAIController* CallFunc_GetAIController_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue);
}

#endif
