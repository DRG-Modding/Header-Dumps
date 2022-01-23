#ifndef UE4SS_SDK_ENE_SpiderSpawner_HPP
#define UE4SS_SDK_ENE_SpiderSpawner_HPP

class AENE_SpiderSpawner_C : public AENE_EnemySpawner_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* Sphere_Eye4;
    class USphereComponent* Sphere_Eye3;
    class USphereComponent* Sphere_Eye1;
    class UTerrainPlacementComponent* terrainPlacement;
    class USphereComponent* Sphere_Eye2;
    class UCapsuleComponent* PlayerCollision;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class UOutlineComponent* outline;
    class UBP_SpawnerEyeComponent_C* Eye4;
    class UBP_SpawnerEyeComponent_C* Eye3;
    class UBP_SpawnerEyeComponent_C* Eye2;
    class UBP_SpawnerEyeComponent_C* Eye1;
    class USkeletalMeshComponent* Spawner_Eye1_Rig;
    class USkeletalMeshComponent* Spawner_Eye4_Rig;
    class USkeletalMeshComponent* Spawner_Eye3_Rig;
    class USkeletalMeshComponent* Spawner_Eye2_Rig;
    class UPawnSensingComponent* PawnSensing;
    class USkeletalMeshComponent* SK_Spawner;
    float NextSound;
    class UParticleSystem* DamageParticles;
    class USoundCue* Damage Sound;
    class USoundCue* Death Sound;
    class USoundCue* LastSound;
    FLinearColor StartColor;
    FLinearColor DeadEyeColor;
    class UMaterialInstanceDynamic* EyeMaterial;
    TArray<class UBP_SpawnerEyeComponent_C*> Eyes;
    class UEnemyDescriptor* DeathSpawn;
    int32 DeathSpawnCount;

    class USkeletalMeshComponent* GetMesh();
    void SpawnDeathEffects(FVector CallFunc_K2_GetActorLocation_ReturnValue, class UDecalComponent* CallFunc_SpawnDecalAtActor_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
    void UserConstructionScript(FLinearColor CallFunc_K2_GetVectorParameterValue_ReturnValue, float CallFunc_GetHealth_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
    void Spawn Sound(class USoundCue* Sound, float Volume);
    void ReceiveBeginPlay();
    void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(class APawn* Pawn);
    void BndEvt__EnemyHealth_K2Node_ComponentBoundEvent_1_DamageSig__DelegateSignature(float Amount);
    void OnBodypartHit(float Amount, float BaseAmount, class UPrimitiveComponent* Component, class UFSDPhysicalMaterial* PhysMat, const FName& BoneName);
    void OnFrozen(class AActor* Source);
    void OnUnFrozen();
    void BndEvt__Health_K2Node_ComponentBoundEvent_0_HealthChangedSig__DelegateSignature(float Health);
    void BndEvt__Health_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void PlayHitReact();
    void ExecuteUbergraph_ENE_SpiderSpawner(int32 EntryPoint, bool Temp_bool_True_if_break_was_hit_Variable, bool Temp_bool_IsClosed_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_HasAuthority_ReturnValue, FExecuteUbergraph_ENE_SpiderSpawnerK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, class USoundCue* K2Node_CustomEvent_Sound, float K2Node_CustomEvent_Volume, bool CallFunc_NotEqual_ObjectObject_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, FVector CallFunc_Add_VectorVector_ReturnValue, class APawn* K2Node_ComponentBoundEvent_Pawn, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, float K2Node_ComponentBoundEvent_Amount, float K2Node_CustomEvent_Amount, float K2Node_CustomEvent_BaseAmount, class UPrimitiveComponent* K2Node_CustomEvent_component, class UFSDPhysicalMaterial* K2Node_CustomEvent_physmat, const FName K2Node_CustomEvent_boneName, bool CallFunc_LessEqual_FloatFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_Less_IntInt_ReturnValue, class UBP_SpawnerEyeComponent_C* CallFunc_Array_Get_Item, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_TakeDamage_Died, bool CallFunc_IsEyeThatWasHit_WasHit, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, float CallFunc_Montage_Play_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, bool CallFunc_HasAuthority_ReturnValue_2, float CallFunc_RandomFloatInRange_ReturnValue, FRotator CallFunc_K2_GetActorRotation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, class AActor* K2Node_Event_source, float CallFunc_GetHealthPct_ReturnValue, FLinearColor CallFunc_LinearColorLerp_ReturnValue, float K2Node_ComponentBoundEvent_health, class UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, class UGameData* CallFunc_GetFSDGameData_ReturnValue, class UGoogleAnalyticsWrapper* CallFunc_GetGoogleAnalyticsWrapper_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UCommunityGoal* CallFunc_GetGoal_ReturnValue);
};

#endif
