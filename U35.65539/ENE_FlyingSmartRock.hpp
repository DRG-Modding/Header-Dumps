#ifndef UE4SS_SDK_ENE_FlyingSmartRock_HPP
#define UE4SS_SDK_ENE_FlyingSmartRock_HPP

class AENE_FlyingSmartRock_C : UEnemyDeepPathfinderCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;
    UParticleSystemComponent* P_FlyingRock_Birth;
    UParticleSystemComponent* Trail;
    UPointLightComponent* PointLight;
    USphereComponent* Sphere;
    UStaticMeshComponent* Core;
    UAudioComponent* RockAttack_FloatingLoop_Cue;
    UAudioComponent* PrepareToAttack_Cue;
    UDamageComponent* Damage;
    UOutlineComponent* outline;
    UEnemyComponent* enemy;
    float Timeline_1_ScaleMesh_EC054E764BE887708377689ABBE38A90;
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_EC054E764BE887708377689ABBE38A90;
    UTimelineComponent* Timeline_1;
    float Timeline_0_Size_3A168B64422F3454BD6578A9FC2C38D3;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_3A168B64422F3454BD6578A9FC2C38D3;
    UTimelineComponent* Timeline_0;
    float AttackTell_ParticleScale_AADFBFDA4F8A42D878B608A53FD58DB2;
    float AttackTell_Light_AADFBFDA4F8A42D878B608A53FD58DB2;
    TEnumAsByte<ETimelineDirection::Type> AttackTell__Direction_AADFBFDA4F8A42D878B608A53FD58DB2;
    UTimelineComponent* AttackTell;
    FTimerHandle TimeLOS;
    float AttackDistance;
    FVector CoreSize;
    float LightRadiusBoost;
    float LightIntensityBoost;
    UMaterialInstanceDynamic* DynamicMaterial_Core;
    float EmissiveBoost;
    UParticleSystemComponent* ConnectionParticles;
    AEscortDestination* Heartstone;
    FVector FinalMeshSize;

    void UserConstructionScript(UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
    void AttackTell__FinishedFunc();
    void AttackTell__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void CollideDamageDie(AActor* OtherActor);
    void ReceiveBeginPlay();
    void CheckTargetLOS();
    void AttackTargetEffects(FVector TargetLocation);
    void StopTell();
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ScaleCore();
    void ReceiveTick(float DeltaSeconds);
    void SpawnConnectionParticles();
    void RemoveConnectionParticles();
    void ReceiveDestroyed();
    void ScaleMesh();
    void ExecuteUbergraph_ENE_FlyingSmartRock(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, FVector CallFunc_K2_GetActorLocation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, AActor* K2Node_CustomEvent_OtherActor, float CallFunc_GetMaxHealth_ReturnValue, UENE_FlyingSmartRock_C* K2Node_DynamicCast_AsENE_Flying_Smart_Rock, bool K2Node_DynamicCast_bSuccess, FString CallFunc_GetDisplayName_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, FString CallFunc_GetDisplayName_ReturnValue_1, FName CallFunc_MakeLiteralName_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, UObject* CallFunc_GetValueAsObject_ReturnValue, AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_GetHorizontalDistanceTo_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, FVector CallFunc_Add_VectorVector_ReturnValue, FVector K2Node_CustomEvent_TargetLocation, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, FVector CallFunc_Subtract_VectorVector_ReturnValue, FRotator CallFunc_Conv_VectorToRotator_ReturnValue, AProjectileBase* CallFunc_SpawnProjectile_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_1, FName CallFunc_MakeLiteralName_ReturnValue_1, FVector CallFunc_GetValueAsVector_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_IsAlive_ReturnValue, UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, FVector K2Node_ComponentBoundEvent_NormalImpulse, const FHitResult K2Node_ComponentBoundEvent_Hit, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_1, bool Temp_bool_IsClosed_Variable, FVector CallFunc_K2_GetActorLocation_ReturnValue_5, float K2Node_Event_DeltaSeconds, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, UObjective* CallFunc_GetPrimaryObjective_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_6, UEscortObjective* K2Node_DynamicCast_AsEscort_Objective, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_GetWorldDeltaSeconds_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_7, FRotator CallFunc_K2_GetComponentRotation_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue_1, FRotator CallFunc_MakeRotFromY_ReturnValue, UBP_EscortDestination_C* K2Node_DynamicCast_AsBP_Escort_Destination, bool K2Node_DynamicCast_bSuccess_3, FRotator CallFunc_RInterpTo_ReturnValue, FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult, bool CallFunc_HasAuthority_ReturnValue_2, UBP_EscortDestination_C* K2Node_DynamicCast_AsBP_Escort_Destination_1, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsValid_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_2, FVector CallFunc_Multiply_VectorFloat_ReturnValue_1, USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, UFSDCheatManager* CallFunc_GetCheatManager_ReturnValue, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue_2, bool CallFunc_IsShippingBuild_ReturnValue, UAIController* CallFunc_GetAIController_ReturnValue);
}

#endif
