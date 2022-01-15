#ifndef UE4SS_SDK_ENE_Harvester_HPP
#define UE4SS_SDK_ENE_Harvester_HPP

class AENE_Harvester_C : UDeepPathfinderCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;
    UEnemyComponent* enemy;
    UBoxComponent* PlayerRideCollision;
    UBoxComponent* Box;
    UParticleSystemComponent* P_Harvesting_A;
    USimpleHealthComponent* SimpleHealth;
    UAudioComponent* Audio;
    UOutlineComponent* outline;
    UParticleSystem* DeathParticle;
    float PlayerBeginRideTime;
    int32 EnemiesKilled;
    UFSDAchievement* FarmerAchievement;
    UFSDAchievement* CarPoolAchievement;

    void OnRep_Moving(bool Temp_bool_Variable, USoundBase* Temp_object_Variable, USoundBase* Temp_object_Variable_1, USoundBase* K2Node_Select_Default);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void BndEvt__PlayerRideCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__PlayerRideCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OnDamagedEnemy(const InterfaceProperty& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
    void ExecuteUbergraph_ENE_Harvester(int32 EntryPoint, DamagedEnemyEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FRotator CallFunc_K2_GetActorRotation_ReturnValue, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, AActor* K2Node_ComponentBoundEvent_OtherActor_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_1, UFSDPlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue_1, float CallFunc_GetTimeSeconds_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, const InterfaceProperty K2Node_CustomEvent_EnemyHealth, float K2Node_CustomEvent_Damage, float K2Node_CustomEvent_DamageModifier, float K2Node_CustomEvent_HealthRemaining, bool K2Node_CustomEvent_IsWeakpoint, bool K2Node_CustomEvent_IsRadial, float CallFunc_Subtract_FloatFloat_ReturnValue_1, bool CallFunc_IsDead_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, TArray<AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, UPlayerCharacter* CallFunc_GetLocalPlayerCharacter_ReturnValue, UFSDPlayerController* CallFunc_GetPlayerController_ReturnValue_1);
}

#endif
