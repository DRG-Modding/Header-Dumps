#ifndef UE4SS_SDK_ENE_Shredder_HPP
#define UE4SS_SDK_ENE_Shredder_HPP

class AENE_Shredder_C : UShredder
{
    FPointerToUberGraphFrame UberGraphFrame;
    UNiagaraComponent* spawnParticles;
    UParticleSystemComponent* P_TMP_Shredder_Trail;
    UPawnStatsComponent* PawnStats;
    UNiagaraComponent* NS_Trail;
    UMeleeAttackComponent* MeleeAttack;
    UPawnAlertComponent* PawnAlert;
    UAudioComponent* IdleSound;
    UOutlineComponent* outline;
    UEnemyComponent* enemy;
    UPawnSensingComponent* PawnSensing;
    USphereComponent* Sphere;

    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void OnFrozen(AActor* Source);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_ENE_Shredder(int32 EntryPoint, FVector CallFunc_K2_GetActorLocation_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, bool CallFunc_HasAuthority_ReturnValue, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, float CallFunc_RandomFloatInRange_ReturnValue, FVector CallFunc_GetSocketLocation_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, AActor* K2Node_Event_source, APawn* CallFunc_GetInstigator_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, UAIController* CallFunc_GetAIController_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, FVector CallFunc_RandomUnitVectorInEllipticalConeInDegrees_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_RandomBool_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, float K2Node_Select_Default, float CallFunc_RandomFloatInRange_ReturnValue_1, FVector CallFunc_MakeVector_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue);
}

#endif
