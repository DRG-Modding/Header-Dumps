#ifndef UE4SS_SDK_ENE_SpiderSpawner_HPP
#define UE4SS_SDK_ENE_SpiderSpawner_HPP

class AENE_SpiderSpawner_C : UENE_EnemySpawner_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    USphereComponent* Sphere_Eye4;
    USphereComponent* Sphere_Eye3;
    USphereComponent* Sphere_Eye1;
    UTerrainPlacementComponent* terrainPlacement;
    USphereComponent* Sphere_Eye2;
    UCapsuleComponent* PlayerCollision;
    UPathfinderCollisionComponent* PathfinderCollision;
    UOutlineComponent* outline;
    UBP_SpawnerEyeComponent_C* Eye4;
    UBP_SpawnerEyeComponent_C* Eye3;
    UBP_SpawnerEyeComponent_C* Eye2;
    UBP_SpawnerEyeComponent_C* Eye1;
    USkeletalMeshComponent* Spawner_Eye1_Rig;
    USkeletalMeshComponent* Spawner_Eye4_Rig;
    USkeletalMeshComponent* Spawner_Eye3_Rig;
    USkeletalMeshComponent* Spawner_Eye2_Rig;
    UPawnSensingComponent* PawnSensing;
    USkeletalMeshComponent* SK_Spawner;
    float NextSound;
    UParticleSystem* DamageParticles;
    USoundCue* Damage Sound;
    USoundCue* Death Sound;
    USoundCue* LastSound;
    FLinearColor StartColor;
    FLinearColor DeadEyeColor;
    UMaterialInstanceDynamic* EyeMaterial;
    TArray<UBP_SpawnerEyeComponent_C*> Eyes;
    UEnemyDescriptor* DeathSpawn;
    int32 DeathSpawnCount;

    USkeletalMeshComponent* GetMesh();
    void SpawnDeathEffects(FVector CallFunc_K2_GetActorLocation_ReturnValue, UDecalComponent* CallFunc_SpawnDecalAtActor_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
    void UserConstructionScript(FLinearColor CallFunc_K2_GetVectorParameterValue_ReturnValue, float CallFunc_GetHealth_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
    void Spawn Sound(USoundCue* Sound, float Volume);
    void ReceiveBeginPlay();
    void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(APawn* Pawn);
    void BndEvt__EnemyHealth_K2Node_ComponentBoundEvent_1_DamageSig__DelegateSignature(float Amount);
    void OnBodypartHit(float Amount, float BaseAmount, UPrimitiveComponent* Component, UFSDPhysicalMaterial* PhysMat, const FName& BoneName);
    void OnFrozen(AActor* Source);
    void OnUnFrozen();
    void BndEvt__Health_K2Node_ComponentBoundEvent_0_HealthChangedSig__DelegateSignature(float Health);
    void BndEvt__Health_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void PlayHitReact();
    void ExecuteUbergraph_ENE_SpiderSpawner(int32 EntryPoint, bool Temp_bool_True_if_break_was_hit_Variable, bool Temp_bool_IsClosed_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_HasAuthority_ReturnValue, BodypartHitSig__DelegateSignature K2Node_CreateDelegate_OutputDelegate, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, USoundCue* K2Node_CustomEvent_Sound, float K2Node_CustomEvent_Volume, bool CallFunc_NotEqual_ObjectObject_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, FVector CallFunc_Add_VectorVector_ReturnValue, APawn* K2Node_ComponentBoundEvent_Pawn, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, float K2Node_ComponentBoundEvent_Amount, float K2Node_CustomEvent_Amount, float K2Node_CustomEvent_BaseAmount, UPrimitiveComponent* K2Node_CustomEvent_component, UFSDPhysicalMaterial* K2Node_CustomEvent_physmat, const FName K2Node_CustomEvent_boneName, bool CallFunc_LessEqual_FloatFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_Less_IntInt_ReturnValue, UBP_SpawnerEyeComponent_C* CallFunc_Array_Get_Item, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_TakeDamage_Died, bool CallFunc_IsEyeThatWasHit_WasHit, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, float CallFunc_Montage_Play_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, bool CallFunc_HasAuthority_ReturnValue_2, float CallFunc_RandomFloatInRange_ReturnValue, FRotator CallFunc_K2_GetActorRotation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, AActor* K2Node_Event_source, float CallFunc_GetHealthPct_ReturnValue, FLinearColor CallFunc_LinearColorLerp_ReturnValue, float K2Node_ComponentBoundEvent_health, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, UGameData* CallFunc_GetFSDGameData_ReturnValue, UGoogleAnalyticsWrapper* CallFunc_GetGoogleAnalyticsWrapper_ReturnValue, bool CallFunc_IsValid_ReturnValue, UCommunityGoal* CallFunc_GetGoal_ReturnValue);
}

#endif
