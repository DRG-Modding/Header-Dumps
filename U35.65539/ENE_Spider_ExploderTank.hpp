#ifndef UE4SS_SDK_ENE_Spider_ExploderTank_HPP
#define UE4SS_SDK_ENE_Spider_ExploderTank_HPP

class AENE_Spider_ExploderTank_C : UENE_SpiderBase_Large_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWeakpointGlowComponent* WeakpointGlow;
    UMeleeAttackComponent* CarveAttack;
    UAlignEnemyComponent* AlignEnemy;
    UCapsuleComponent* Capsule;
    UParticleSystemComponent* P_ExploderTank_CollectingEmbers;
    UDamageComponent* DamageDeathExplosion;
    UArmorHealthDamageComponent* ArmorHealthDamage;
    UBillboardComponent* ExplosionOrigin;
    UBillboardComponent* ClusterOrigin;
    UDamageComponent* Damage;
    USphereComponent* Sphere;
    UPointLightComponent* Light_BackBody;
    UParticleSystem* ExplosionParticles;
    float WeakspotDamageMult;
    int32 NumClusterBombs;
    int32 NumWeakspotsDestroyed;
    UParticleSystem* AoeAttackParticles;
    bool IsSucking;
    UFSDAchievement* CyaDetonatorAchievement;
    float PushForce;
    TSubclassOf<AProjectileBase> ClusterProjectileType;
    UTerrainMaterial* OvverideBurnedMaterial;
    float BurnThickness;
    float CarveDiameter;

    void SetupWeakpointGlow(int32 CallFunc_SetUpWeakPointGlowOnMesh_ReturnValue, int32 CallFunc_SetUpWeakPointGlowOnMesh_ReturnValue_1, int32 CallFunc_SetUpWeakPointGlowOnMesh_ReturnValue_2);
    void MakeCrater(FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue);
    void Apply Force to Players in Range(TArray<UPlayerCharacter*>& Array of Players, float Directional Force to Apply, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, UPlayerCharacter* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_Subtract_VectorVector_ReturnValue, FVector CallFunc_Normal_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, FVector CallFunc_MakeVector_ReturnValue);
    bool GetIsTargetable(bool CallFunc_IsAlive_ReturnValue);
    void GetEnemySpawnedCount(int32& SpawnCount);
    bool ShouldExplode(TArray<UDamageTag*>& Tags);
    void SetAchievementFromServerToAll(UFSDAchievement* AchievementToSet, float Progress, int32 Temp_int_Array_Index_Variable, bool CallFunc_HasAuthority_ReturnValue, int32 Temp_int_Loop_Counter_Variable, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, UPlayerCharacter* CallFunc_Array_Get_Item, UFSDPlayerController* CallFunc_GetPlayerController_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsLocalController_ReturnValue);
    void OnRep_IsSucking();
    float GetDistanceToLocalPlayer(UCharacter* CallFunc_GetPlayerCharacter_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue);
    void DamageAndCarve(float NewLocalVar_0, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue);
    void PlayRumbeAndShake(FVector CallFunc_K2_GetActorLocation_ReturnValue);
    void OnRep_Exploded();
    void OnMessageAI(FName TriggerName);
    void SetRagdollImpulse(UDamageClass* DamageClass, UFSDPhysicalMaterial* PhysMat);
    void OnFrozen(AActor* Source);
    void OnUnFrozen();
    void Play Frozen Death();
    void ShootClusterBombs();
    void Play Body Death Effects();
    void Play Burn Death();
    void Spawn Headshot Gibs(uint8 DeathType);
    void Attack(FName nameValue);
    void BndEvt__ArmorHealthDamage_K2Node_ComponentBoundEvent_0_AmorPartDestroyedDelegate__DelegateSignature(FName Name);
    void ReceiveBeginPlay();
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void Frozen Explosion();
    void MakeElite();
    void CorrosiveDeath();
    void ExecuteUbergraph_ENE_Spider_ExploderTank(int32 EntryPoint, NameDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasAuthority_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_HasAuthority_ReturnValue_1, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool CallFunc_HasAuthority_ReturnValue_2, UCharacter* CallFunc_GetPlayerCharacter_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsCloseToLocalPlayer_ReturnValue, int32 Temp_int_Variable, bool CallFunc_IsCloseToLocalPlayer_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_IsClosed_Variable, UCharacter* CallFunc_GetPlayerCharacter_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_IsCloseToLocalPlayer_ReturnValue_2, bool CallFunc_IsCloseToLocalPlayer_ReturnValue_3, bool CallFunc_HasAuthority_ReturnValue_3, bool CallFunc_HasAuthority_ReturnValue_4, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, FRotator CallFunc_K2_GetActorRotation_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_1, FName K2Node_Event_triggerName, bool K2Node_SwitchName_CmpSuccess, UDamageClass* K2Node_Event_DamageClass, UFSDPhysicalMaterial* K2Node_Event_PhysMat, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, FVector CallFunc_K2_GetActorLocation_ReturnValue_4, bool Temp_bool_IsClosed_Variable_1, AActor* K2Node_Event_source, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, const FTransform CallFunc_GetTransform_ReturnValue, uint8 K2Node_Event_DeathType, FRotator CallFunc_TransformRotation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_5, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UEnemyAnimInstance* K2Node_DynamicCast_AsEnemy_Anim_Instance, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, FRotator CallFunc_K2_GetActorRotation_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_6, bool CallFunc_IsInRangeOfLocalPlayer_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_7, FName K2Node_CustomEvent_nameValue, bool CallFunc_NotEqual_NameName_ReturnValue, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, float CallFunc_Montage_Play_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_2, FVector CallFunc_Subtract_VectorVector_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, FName K2Node_ComponentBoundEvent_name, FVector CallFunc_K2_GetActorLocation_ReturnValue_8, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, InterfaceProperty CallFunc_QueueMontage_self_CastInput, float CallFunc_QueueMontage_ReturnValue, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1, bool CallFunc_IsInRangeOfLocalPlayer_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable_2, bool CallFunc_HasAuthority_ReturnValue_5, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, UGameData* CallFunc_GetFSDGameData_ReturnValue, UCommunityGoal* CallFunc_GetGoal_ReturnValue, UGoogleAnalyticsWrapper* CallFunc_GetGoogleAnalyticsWrapper_ReturnValue, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_9, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_2, bool Temp_bool_IsClosed_Variable_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_10, TArray<UPlayerCharacter*>& CallFunc_GetPlayersInRange_ReturnValue, AProjectileBase* CallFunc_SpawnProjectile_ReturnValue, UDecalComponent* CallFunc_SpawnDecalAtActor_ReturnValue, AController* CallFunc_GetController_ReturnValue, UAIController* K2Node_DynamicCast_AsAIController, bool K2Node_DynamicCast_bSuccess_1, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_2);
}

#endif
