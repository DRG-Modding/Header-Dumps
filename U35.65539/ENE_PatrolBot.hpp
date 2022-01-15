#ifndef UE4SS_SDK_ENE_PatrolBot_HPP
#define UE4SS_SDK_ENE_PatrolBot_HPP

class AENE_PatrolBot_C : UPatrolBot
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAudioComponent* FacilityDroneHackable_Cue;
    UNiagaraComponent* spawnParticles;
    UNiagaraComponent* JetParticles3;
    UNiagaraComponent* JetParticles2;
    UNiagaraComponent* JetParticles1;
    UNiagaraComponent* JetParticles;
    UParticleSystemComponent* Trail1;
    UAudioComponent* DroneJump;
    UAudioComponent* FacilityDroneHacked_Cue;
    USphereComponent* HackUse;
    UPointLightComponent* PointLight;
    UPointLightComponent* PointLight_HeadGlow;
    UWeakpointGlowComponent* WeakpointGlow;
    USingleUsableComponent* HackUsable;
    UPawnStatsComponent* PawnStats;
    UTerrainPlacementComponent* terrainPlacement;
    UCapsuleComponent* ProjectileCollision;
    UOutlineComponent* outline;
    UParticleSystemComponent* Dirt particles;
    FTimerHandle RandomImpulseTimer;
    USoundBase* LandingImpact_Cue;
    int32 RocketIndex;
    UPhysicalMaterial* WeakPointMaterial;
    UMaterialInstanceDynamic* HackpointDynamicMaterial;
    FLinearColor GreenColor;
    FLinearColor RedColor;
    TEnumAsByte<EPatrolBotDeathReason::Type> DeathReason;
    float HackedRegainModifier;
    float HackChance;
    bool WasFlyingDeath;
    FTimerHandle DisabledTimer;
    bool WasRevived;
    USoundBase* WeakpointDeathSound;

    void UpdateLookAtShout(bool Temp_bool_Variable, UDialogDataAsset* Temp_object_Variable, UDialogDataAsset* Temp_object_Variable_1, bool CallFunc_GetIsHacked_ReturnValue, UDialogDataAsset* K2Node_Select_Default);
    bool CheckCanBeHacked(float CalculatedHackChanceModifier, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, TArray<UPatrolBot*>& CallFunc_GetAllActorsOfClass_OutActors, UPatrolBot* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsHacked_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, bool CallFunc_PercentageCheck_ReturnValue);
    void GetAIController(UAIC_PatrolBot_C*& AsAIC Facility Drone, UFSDAIController* CallFunc_GetFSDAIController_ReturnValue, UAIC_PatrolBot_C* K2Node_DynamicCast_AsAIC_Patrol_Bot, bool K2Node_DynamicCast_bSuccess);
    void OnRep_DeathReason(bool K2Node_SwitchEnum_CmpSuccess);
    void SoundHandling(bool RollingSound, bool FlyingSound, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_IsPlaying_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1);
    void OnStateChangedEvent(EPatrolBotState CurrentState);
    void OnLandedEvent();
    void OnLockedOn();
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSigDetailed__DelegateSignature(UHealthComponent* HealthComponent, float damageAmount, UDamageClass* DamageClass, AActor* damageCause, AController* Instigator, UFSDPhysicalMaterial* PhysicalMaterial, bool IsRadial, const TArray<UDamageTag*>& Tags);
    void NormalDeath();
    void WeakpointDeath();
    void ReceiveBeginPlay();
    void OnDroneHacked();
    void BndEvt__HackingUsable_K2Node_ComponentBoundEvent_3_HackedDelegate__DelegateSignature(UPlayerCharacter* InHackedBy);
    void BndEvt__HackHealth_K2Node_ComponentBoundEvent_2_DamageSig__DelegateSignature(float Amount);
    void BndEvt__CollisionSphere_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void OnMessageAI(FName TriggerName);
    void WeakpointDeath_Flying();
    void OnJumpEvent();
    void DisabledElapsed();
    void BndEvt__HackingUsable_K2Node_ComponentBoundEvent_5_UsableChangedSignature__DelegateSignature(bool CanUse);
    void OnRevived();
    void OnProjectileSpawned();
    void OnDisabled();
    void ExecuteUbergraph_ENE_PatrolBot(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_HasAuthority_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_3, bool CallFunc_HasAuthority_ReturnValue_4, EPatrolBotState K2Node_Event_currentState, bool K2Node_SwitchEnum_CmpSuccess, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, UHealthComponent* K2Node_ComponentBoundEvent_HealthComponent, float K2Node_ComponentBoundEvent_damageAmount, UDamageClass* K2Node_ComponentBoundEvent_damageClass, AActor* K2Node_ComponentBoundEvent_damageCause, AController* K2Node_ComponentBoundEvent_instigator, UFSDPhysicalMaterial* K2Node_ComponentBoundEvent_physicalMaterial, bool K2Node_ComponentBoundEvent_isRadial, const TArray<UDamageTag*>& K2Node_ComponentBoundEvent_tags, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, FVector CallFunc_GetSocketLocation_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, FVector CallFunc_RandomUnitVector_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Abs_ReturnValue, FVector CallFunc_GetSocketLocation_ReturnValue_1, FVector CallFunc_MakeVector_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue_1, FVector CallFunc_Multiply_VectorFloat_ReturnValue, UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, UFSDAIController* CallFunc_GetFSDAIController_ReturnValue, UAIC_PatrolBot_C* K2Node_DynamicCast_AsAIC_Patrol_Bot, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAuthority_ReturnValue_5, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, UProjectileAttack* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, UNormalProjectileAttack* K2Node_DynamicCast_AsNormal_Projectile_Attack, bool K2Node_DynamicCast_bSuccess_1, UPlayerCharacter* K2Node_ComponentBoundEvent_InHackedBy, UPlayerCharacter* CallFunc_GetHackedBy_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, float K2Node_ComponentBoundEvent_Amount, FTransform CallFunc_GetSocketTransform_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, ABP_PatrolBot_Wheel_C* CallFunc_FinishSpawningActor_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, FVector K2Node_ComponentBoundEvent_NormalImpulse, const FHitResult K2Node_ComponentBoundEvent_Hit, bool CallFunc_IsAlive_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_6, float CallFunc_GetHealthPct_ReturnValue, FLinearColor CallFunc_LinearColorLerp_ReturnValue, float CallFunc_Heal_ReturnValue, float CallFunc_GetMaxHealth_ReturnValue, bool CallFunc_GetIsHacked_ReturnValue, FName K2Node_Event_triggerName, bool CallFunc_PushActiveStatusEffect_ReturnValue, bool K2Node_SwitchName_CmpSuccess, float CallFunc_Multiply_FloatFloat_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, float CallFunc_Heal_ReturnValue_1, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_1, bool CallFunc_RemoveGameplayTag_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue_1, bool CallFunc_GetIsBeingHacked_ReturnValue, UAIC_PatrolBot_C* CallFunc_GetAIController_AsAIC_Facility_Drone, float CallFunc_GetMaxHealth_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Heal_ReturnValue_2, UAIC_PatrolBot_C* CallFunc_GetAIController_AsAIC_Facility_Drone_1, UAIController* CallFunc_GetAIController_ReturnValue, int32 Temp_int_Array_Index_Variable_1, UProjectileAttack* CallFunc_Array_Get_Item_1, UNormalProjectileAttack* K2Node_DynamicCast_AsNormal_Projectile_Attack_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_CheckCanBeHacked_ReturnValue, bool K2Node_ComponentBoundEvent_canUse, bool CallFunc_HasAuthority_ReturnValue_7, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsHacked_ReturnValue, bool CallFunc_IsHacked_ReturnValue_1, bool CallFunc_IsHacked_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue_2, bool Temp_bool_IsClosed_Variable, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_2);
}

#endif
