#ifndef UE4SS_SDK_ENE_Prospector_HPP
#define UE4SS_SDK_ENE_Prospector_HPP

class AENE_Prospector_C : UProspectorRobot
{
    FPointerToUberGraphFrame UberGraphFrame;
    USkeletalMeshComponent* ShieldMesh;
    UNiagaraComponent* NS_Idle;
    UNiagaraComponent* NS_Trail;
    UNiagaraComponent* Niagara_RadioWaves;
    UAudioComponent* ProspectingAlarmedIdle_Cue;
    UAudioComponent* ProspectingDroneStartSampling_Cue;
    UAudioComponent* ProspectingDroneScreamAlerted_Cue;
    UAudioComponent* Prospector_Idle_Cue;
    UAudioComponent* ProspectingDroneStartScanning_Cue;
    UCapsuleComponent* Capsule;
    UParticleSystemComponent* Particles_Dirt;
    UGroundToAirComponent* GroundToAir;
    UHealthDamageTracker* HealthDamageTracker;
    UPointLightComponent* PointLight_Eye;
    URectLightComponent* Light_Exhausts;
    URectLightComponent* Light_Engine;
    UPointLightComponent* PointLight_Weakpoint_L;
    UPointLightComponent* PointLight_Weakpoint_R;
    UOutlineComponent* outline;
    UBoxComponent* EjectCoreBox;
    UStaticMeshComponent* SM_LightCone001;
    UWeakpointGlowComponent* WeakpointGlow;
    UArmorHealthDamageComponent* ArmorHealthDamage;
    UInstantUsable* EjectDataCoreUsable;
    UAlignEnemyComponent* AlignEnemy;
    UEnemyComponent* enemy;
    UPawnSensingComponent* PawnSensing;
    UPawnStatsComponent* PawnStats;
    int32 WeakpointsLeft;
    AActor* Target_0;
    bool HasBeenHacked;
    float CooldownDuration;
    int32 DirtSamplesTaken;
    int32 MaxDirtSamples;
    FVector2D ChunkValueRange;
    TArray<UResourceData*> ResourceTypes;
    UAudioComponent* NewVar_0;
    float ReinforcementsAllowed;
    FTimerHandle SamplingCarveTimer;
    FVector SamplingLocation;
    TArray<UMaterialInterface*> LightMaterials;
    UMaterialInterface* WeakPointMaterial;
    float AlarmDuration;
    bool BossFightActive;
    FGameplayTagContainer DroneTag;
    bool Shielded;
    float ReinforcementDelay;
    float ReinforcementCooldown;
    TArray<AFSDPawn*> SpawnedPatrolBots;
    bool SpawnLimitExceeded;
    int32 SpawnLimit;
    int32 PatrolBotDifficulty;
    float LimitTimer;

    void SetSpawnDifficulty(int32 NumAdditionalPlayers, bool CallFunc_Greater_IntInt_ReturnValue);
    void SetPatrolBotSpawnLimit(UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, int32 CallFunc_Array_Length_ReturnValue);
    bool GetIsTargetable(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsAlive_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void OnRep_Shielded(bool Temp_bool_Variable, UPhysicsAsset* Temp_object_Variable, UPhysicsAsset* Temp_object_Variable_1, bool CallFunc_Not_PreBool_ReturnValue, UPhysicsAsset* K2Node_Select_Default);
    void SetUpWeakpointGlowAndMaterial(UMaterialInterface* CallFunc_GetMaterial_ReturnValue, int32 CallFunc_SetUpWeakPointGlowOnMesh_ReturnValue, int32 CallFunc_SetUpWeakPointGlowOnMesh_ReturnValue_1);
    void CheckForDamageCause(AActor* DamageCauser, bool& ShouldReact, InterfaceProperty K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess_1, bool Temp_bool_Variable, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue, UPlayerCharacter* CallFunc_GetNearestPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
    void ToggleBossFight(bool IsActive, UBossFightSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, UBP_BossFight_NeutralEvent_C* CallFunc_SpawnObject_ReturnValue, InterfaceProperty CallFunc_RegisterBossFight_BossFight_CastInput, FBossFight K2Node_MakeStruct_BossFight);
    void TriggerAlarmedFeedback(bool BlinkLights, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
    void SwitchTraversalMode(bool SetFlyMode, InterfaceProperty K2Node_DynamicCast_AsI_Flying_ABP, bool K2Node_DynamicCast_bSuccess);
    void SetupGameplayTags(TArray<FGameplayTag>& TagsToAdd, TArray<FGameplayTag>& TagsToRemove, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, FGameplayTag CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, FGameplayTag CallFunc_Array_Get_Item_1, bool CallFunc_RemoveGameplayTag_ReturnValue);
    void SetupResources(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, AProceduralSetup* CallFunc_GetProceduralSetup_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, FResourceSpawner CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue);
    void AddDirtSample(bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
    void Spawn Dirt Samples(FVector CallFunc_GetActorRightVector_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, FVector CallFunc_GetActorForwardVector_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_2, FVector CallFunc_Multiply_VectorFloat_ReturnValue_1, FVector CallFunc_GetActorRightVector_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_3, float CallFunc_RandomFloatInRange_ReturnValue_4, FVector CallFunc_GetActorForwardVector_ReturnValue_1, FVector CallFunc_Multiply_VectorFloat_ReturnValue_2, float CallFunc_RandomFloatInRange_ReturnValue_5, FVector CallFunc_GetActorRightVector_ReturnValue_2, FVector CallFunc_Multiply_VectorFloat_ReturnValue_3, float CallFunc_RandomFloatInRange_ReturnValue_6, float CallFunc_RandomFloatInRange_ReturnValue_7, FVector CallFunc_GetActorForwardVector_ReturnValue_2, FVector CallFunc_Multiply_VectorFloat_ReturnValue_4, float CallFunc_RandomFloatInRange_ReturnValue_8, FVector CallFunc_Multiply_VectorFloat_ReturnValue_5, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, int32 CallFunc_RandomIntegerInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_9, int32 CallFunc_Subtract_IntInt_ReturnValue, FVector CallFunc_GetActorUpVector_ReturnValue, const FTransform CallFunc_GetTransform_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue_6, FVector CallFunc_Multiply_VectorFloat_ReturnValue_7, FVector CallFunc_Add_VectorVector_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_10, FVector CallFunc_Add_VectorVector_ReturnValue_1, bool CallFunc_PercentageCheck_ReturnValue, UResourceChunk* CallFunc_SpawnResource_ReturnValue, UResourceChunk* CallFunc_SpawnResource_ReturnValue_1, FVector CallFunc_GetActorUpVector_ReturnValue_1, int32 Temp_int_Variable, FVector CallFunc_Multiply_VectorFloat_ReturnValue_8, FVector CallFunc_Add_VectorVector_ReturnValue_2, bool CallFunc_LessEqual_IntInt_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue, FVector CallFunc_GetActorUpVector_ReturnValue_2, FVector CallFunc_Multiply_VectorFloat_ReturnValue_9, FVector CallFunc_Multiply_VectorFloat_ReturnValue_10, FVector CallFunc_Add_VectorVector_ReturnValue_4, const FTransform CallFunc_GetTransform_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue_5, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, UResourceData* CallFunc_Array_Get_Item, float CallFunc_RandomFloatInRange_ReturnValue_11, UResourceChunk* CallFunc_SpawnResource_ReturnValue_2, int32 CallFunc_RandomIntegerInRange_ReturnValue_2, int32 Temp_int_Variable_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, FVector CallFunc_RandomUnitVector_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_12, FVector CallFunc_Multiply_VectorFloat_ReturnValue_11, FVector CallFunc_MakeVector_ReturnValue, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, FTransform CallFunc_MakeTransform_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, UBP_DirtChunk_C* CallFunc_FinishSpawningActor_ReturnValue);
    void SpawnReinforcements(int32 PatrolBotAmount, int32 ShredderAmount, FVector CallFunc_K2_GetActorLocation_ReturnValue, TArray<FVector>& CallFunc_GetSpawnPointsFromLocation_ReturnValue, FVector CallFunc_Array_GetRandom_Item);
    void OnRep_Target();
    void GetAIController(UAIC_Prospector_C*& AsAIC Prospector, UFSDAIController* CallFunc_GetFSDAIController_ReturnValue, UAIC_Prospector_C* K2Node_DynamicCast_AsAIC_Prospector, bool K2Node_DynamicCast_bSuccess);
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_HitSig__DelegateSignature(float Damage, UDamageClass* DamageClass, AActor* DamageCauser, bool anyHealthLost);
    void ToggleScanning(bool IsScanning);
    void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_8_SeePawnDelegate__DelegateSignature(APawn* Pawn);
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_9_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void ReceiveBeginPlay();
    void SetNewTaget(AActor* Target);
    void EjectDataCore();
    void OnStateBegin(EProspectorRobotState NewState);
    void OnStateEnd(EProspectorRobotState oldState);
    void ToggleSampling(bool Active);
    void BndEvt__ArmorHealthDamage_K2Node_ComponentBoundEvent_1_AmorPartDestroyedDelegate__DelegateSignature(FName Name);
    void BndEvt__HealthDamageTracker_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature(float Amount);
    void SmapleCarve();
    void ResetSpawn();
    void TriggerCooldown();
    void SpawnDrones(int32 PatrolBotAmount, int32 ShredderAmount);
    void OnEnemySpawned(APawn* enemy);
    void OnDeathEvent(UHealthComponentBase* HealthComponent);
    void SetPhysicsAsset(UPhysicsAsset* NewPhysicsAsset);
    void ExecuteUbergraph_ENE_Prospector(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_2, bool Temp_bool_IsClosed_Variable_1, float K2Node_ComponentBoundEvent_Damage, UDamageClass* K2Node_ComponentBoundEvent_damageClass, AActor* K2Node_ComponentBoundEvent_DamageCauser, bool K2Node_ComponentBoundEvent_anyHealthLost, bool K2Node_CustomEvent_IsScanning, bool CallFunc_CheckForDamageCause_ShouldReact, bool CallFunc_Not_PreBool_ReturnValue, UAIC_Prospector_C* CallFunc_GetAIController_AsAIC_Prospector, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, APawn* K2Node_ComponentBoundEvent_Pawn, UAIC_Prospector_C* CallFunc_GetAIController_AsAIC_Prospector_1, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, bool Temp_bool_IsClosed_Variable_2, UAIC_Prospector_C* CallFunc_GetAIController_AsAIC_Prospector_2, int32 CallFunc_Subtract_IntInt_ReturnValue, AActor* K2Node_CustomEvent_Target, FVector CallFunc_RandomUnitVectorInConeInDegrees_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, FVector CallFunc_RandomUnitVector_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, FVector CallFunc_Multiply_VectorFloat_ReturnValue_1, FTransform CallFunc_MakeTransform_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, EProspectorRobotState K2Node_Event_newState, UBP_DataCell_C* CallFunc_FinishSpawningActor_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, EProspectorRobotState K2Node_Event_oldState, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_CustomEvent_Active, bool CallFunc_IsStateActive_ReturnValue, bool CallFunc_IsStateActive_ReturnValue_1, bool Temp_bool_IsClosed_Variable_3, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue_1, bool Temp_bool_IsClosed_Variable_4, bool Temp_bool_Has_Been_Initd_Variable_3, bool CallFunc_HasAuthority_ReturnValue, FName K2Node_ComponentBoundEvent_name, bool CallFunc_EqualEqual_NameName_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, FVector CallFunc_GetSocketLocation_ReturnValue, EnemySpawnedDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, TArray<FGameplayTag>& K2Node_MakeArray_Array, TArray<FGameplayTag>& K2Node_MakeArray_Array_1, float K2Node_ComponentBoundEvent_Amount, FVector CallFunc_GetSocketLocation_ReturnValue_1, UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult, ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue, UAIC_Prospector_C* CallFunc_GetAIController_AsAIC_Prospector_3, UAIC_Prospector_C* CallFunc_GetAIController_AsAIC_Prospector_4, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue_1, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, float CallFunc_PlaySlotAnimation_ReturnValue, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, UABP_Prospector_Shield_C* K2Node_DynamicCast_AsABP_Prospector_Shield, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsStateActive_ReturnValue_2, bool CallFunc_IsAlive_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, int32 K2Node_CustomEvent_PatrolBotAmount, int32 K2Node_CustomEvent_ShredderAmount, DeathSig__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, APawn* K2Node_CustomEvent_enemy, FVector CallFunc_K2_GetActorLocation_ReturnValue, UFSDPawn* K2Node_DynamicCast_AsFSDPawn, bool K2Node_DynamicCast_bSuccess_1, TArray<FVector>& CallFunc_GetSpawnPointsFromLocation_ReturnValue, UHealthComponentBase* CallFunc_GetHealthComponent_ReturnValue, FVector CallFunc_Array_GetRandom_Item, UHealthComponentBase* K2Node_CustomEvent_HealthComponent, int32 CallFunc_Array_Add_ReturnValue, AActor* CallFunc_GetOwner_ReturnValue, UFSDPawn* K2Node_DynamicCast_AsFSDPawn_1, bool K2Node_DynamicCast_bSuccess_2, bool Temp_bool_Has_Been_Initd_Variable_4, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, int32 CallFunc_GetNumAdditionalPlayers_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, UPhysicsAsset* K2Node_CustomEvent_NewPhysicsAsset, bool CallFunc_Less_FloatFloat_ReturnValue, FVector CallFunc_GetSocketLocation_ReturnValue_2, FRotator CallFunc_GetSocketRotation_ReturnValue, ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue_1, FVector CallFunc_GetForwardVector_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, FVector CallFunc_Multiply_VectorFloat_ReturnValue_2, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_2, FCSGRaycastHitInfo CallFunc_Linecast_hitInfo, bool CallFunc_Linecast_ReturnValue, FVector CallFunc_RandomUnitVector_ReturnValue_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, FVector CallFunc_MakeVector_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_3, FRotator CallFunc_Conv_VectorToRotator_ReturnValue, FVector CallFunc_MakeVector_ReturnValue_2, FVector CallFunc_Add_VectorVector_ReturnValue_1, FTransform CallFunc_MakeTransform_ReturnValue_1);
}

#endif
