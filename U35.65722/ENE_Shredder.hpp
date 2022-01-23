#ifndef UE4SS_SDK_ENE_Shredder_HPP
#define UE4SS_SDK_ENE_Shredder_HPP

class AENE_Shredder_C : public AShredder
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* spawnParticles;
    class UParticleSystemComponent* P_TMP_Shredder_Trail;
    class UPawnStatsComponent* PawnStats;
    class UNiagaraComponent* NS_Trail;
    class UMeleeAttackComponent* MeleeAttack;
    class UPawnAlertComponent* PawnAlert;
    class UAudioComponent* IdleSound;
    class UOutlineComponent* outline;
    class UEnemyComponent* enemy;
    class UPawnSensingComponent* PawnSensing;
    class USphereComponent* Sphere;

    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void OnFrozen(class AActor* Source);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_ENE_Shredder(int32 EntryPoint, FVector CallFunc_K2_GetActorLocation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, bool CallFunc_HasAuthority_ReturnValue, class UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, float CallFunc_RandomFloatInRange_ReturnValue, FVector CallFunc_GetSocketLocation_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, class AActor* K2Node_Event_source, class APawn* CallFunc_GetInstigator_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class AAIController* CallFunc_GetAIController_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, FVector CallFunc_RandomUnitVectorInEllipticalConeInDegrees_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_RandomBool_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, float K2Node_Select_Default, float CallFunc_RandomFloatInRange_ReturnValue_1, FVector CallFunc_MakeVector_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue);
};

#endif
