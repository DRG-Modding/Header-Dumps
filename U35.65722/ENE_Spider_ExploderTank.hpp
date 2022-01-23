#ifndef UE4SS_SDK_ENE_Spider_ExploderTank_HPP
#define UE4SS_SDK_ENE_Spider_ExploderTank_HPP

class AENE_Spider_ExploderTank_C : public AENE_SpiderBase_Large_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWeakpointGlowComponent* WeakpointGlow;
    class UMeleeAttackComponent* CarveAttack;
    class UAlignEnemyComponent* AlignEnemy;
    class UCapsuleComponent* Capsule;
    class UParticleSystemComponent* P_ExploderTank_CollectingEmbers;
    class UDamageComponent* DamageDeathExplosion;
    class UArmorHealthDamageComponent* ArmorHealthDamage;
    class UBillboardComponent* ExplosionOrigin;
    class UBillboardComponent* ClusterOrigin;
    class UDamageComponent* Damage;
    class USphereComponent* Sphere;
    class UPointLightComponent* Light_BackBody;
    class UParticleSystem* ExplosionParticles;
    float WeakspotDamageMult;
    int32 NumClusterBombs;
    int32 NumWeakspotsDestroyed;
    class UParticleSystem* AoeAttackParticles;
    bool IsSucking;
    class UFSDAchievement* CyaDetonatorAchievement;
    float PushForce;
    TSubclassOf<class AProjectileBase> ClusterProjectileType;
    class UTerrainMaterial* OvverideBurnedMaterial;
    float BurnThickness;
    float CarveDiameter;

    void SetupWeakpointGlow(int32 CallFunc_SetUpWeakPointGlowOnMesh_ReturnValue, int32 CallFunc_SetUpWeakPointGlowOnMesh_ReturnValue_1, int32 CallFunc_SetUpWeakPointGlowOnMesh_ReturnValue_2);
    void MakeCrater(FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue);
    void Apply Force to Players in Range(TArray<class APlayerCharacter*>& Array of Players, float Directional Force to Apply, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class APlayerCharacter* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_Subtract_VectorVector_ReturnValue, FVector CallFunc_Normal_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, FVector CallFunc_MakeVector_ReturnValue);
    bool GetIsTargetable(bool CallFunc_IsAlive_ReturnValue);
    void GetEnemySpawnedCount(int32& SpawnCount);
    bool ShouldExplode(TArray<class UDamageTag*>& Tags);
    void SetAchievementFromServerToAll(class UFSDAchievement* AchievementToSet, float Progress, int32 Temp_int_Array_Index_Variable, bool CallFunc_HasAuthority_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerCharacter* CallFunc_Array_Get_Item, class AFSDPlayerController* CallFunc_GetPlayerController_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsLocalController_ReturnValue);
    void OnRep_IsSucking();
    float GetDistanceToLocalPlayer(class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue);
    void DamageAndCarve(float NewLocalVar_0, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue);
    void PlayRumbeAndShake(FVector CallFunc_K2_GetActorLocation_ReturnValue);
    void OnRep_Exploded();
    void OnMessageAI(FName TriggerName);
    void SetRagdollImpulse(class UDamageClass* DamageClass, class UFSDPhysicalMaterial* PhysMat);
    void OnFrozen(class AActor* Source);
    void OnUnFrozen();
    void Play Frozen Death();
    void ShootClusterBombs();
    void Play Body Death Effects();
    void Play Burn Death();
    void Spawn Headshot Gibs(TEnumAsByte<Spider_DeathType::Type> DeathType);
    void Attack(FName nameValue);
    void BndEvt__ArmorHealthDamage_K2Node_ComponentBoundEvent_0_AmorPartDestroyedDelegate__DelegateSignature(FName Name);
    void ReceiveBeginPlay();
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void Frozen Explosion();
    void MakeElite();
    void CorrosiveDeath();
    void ExecuteUbergraph_ENE_Spider_ExploderTank(int32 EntryPoint, FExecuteUbergraph_ENE_Spider_ExploderTankK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasAuthority_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_HasAuthority_ReturnValue_1, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool CallFunc_HasAuthority_ReturnValue_2, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsCloseToLocalPlayer_ReturnValue, int32 Temp_int_Variable, bool CallFunc_IsCloseToLocalPlayer_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_IsClosed_Variable, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_IsCloseToLocalPlayer_ReturnValue_2, bool CallFunc_IsCloseToLocalPlayer_ReturnValue_3, bool CallFunc_HasAuthority_ReturnValue_3, bool CallFunc_HasAuthority_ReturnValue_4, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, FRotator CallFunc_K2_GetActorRotation_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_1, FName K2Node_Event_triggerName, bool K2Node_SwitchName_CmpSuccess, class UDamageClass* K2Node_Event_DamageClass, class UFSDPhysicalMaterial* K2Node_Event_PhysMat, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, FVector CallFunc_K2_GetActorLocation_ReturnValue_4, bool Temp_bool_IsClosed_Variable_1, class AActor* K2Node_Event_source, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, const FTransform CallFunc_GetTransform_ReturnValue, TEnumAsByte<Spider_DeathType::Type> K2Node_Event_DeathType, FRotator CallFunc_TransformRotation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_5, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UEnemyAnimInstance* K2Node_DynamicCast_AsEnemy_Anim_Instance, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, FRotator CallFunc_K2_GetActorRotation_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_6, bool CallFunc_IsInRangeOfLocalPlayer_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_7, FName K2Node_CustomEvent_nameValue, bool CallFunc_NotEqual_NameName_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, float CallFunc_Montage_Play_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_2, FVector CallFunc_Subtract_VectorVector_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, FName K2Node_ComponentBoundEvent_name, FVector CallFunc_K2_GetActorLocation_ReturnValue_8, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, TScriptInterface<class INetMontageAble> CallFunc_QueueMontage_self_CastInput, float CallFunc_QueueMontage_ReturnValue, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1, bool CallFunc_IsInRangeOfLocalPlayer_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable_2, bool CallFunc_HasAuthority_ReturnValue_5, class UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, class UGameData* CallFunc_GetFSDGameData_ReturnValue, class UCommunityGoal* CallFunc_GetGoal_ReturnValue, class UGoogleAnalyticsWrapper* CallFunc_GetGoogleAnalyticsWrapper_ReturnValue, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_9, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_2, bool Temp_bool_IsClosed_Variable_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_10, TArray<class APlayerCharacter*>& CallFunc_GetPlayersInRange_ReturnValue, class AProjectileBase* CallFunc_SpawnProjectile_ReturnValue, class UDecalComponent* CallFunc_SpawnDecalAtActor_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class AAIController* K2Node_DynamicCast_AsAIController, bool K2Node_DynamicCast_bSuccess_1, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_2);
};

#endif
