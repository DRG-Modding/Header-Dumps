#ifndef UE4SS_SDK_ENE_Spider_Tank_Boss_HPP
#define UE4SS_SDK_ENE_Spider_Tank_Boss_HPP

class AENE_Spider_Tank_Boss_C : UENE_Spider_Boss_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWeakpointGlowComponent* WeakpointGlow;
    UCapsuleComponent* Capsule;
    UMeleeAttackComponent* CarveAttack;
    UBP_Boss_AoEAttack_C* SlamAttackk;
    UMeleeAttackComponent* MeleeAttack;
    UProjectileAttackComponent* EggProjectile;
    UProjectileAttackComponent* fireball;
    UAlignEnemyComponent* AlignEnemy;
    UEnemyTemperatureReplicatorComponent* EnemyTemperatureReplicator;
    UHealthDamageTracker* HealthDamageTracker;
    UDestructibleSubHealthComponent* DestructibleSubHealth;
    UStaticMeshComponent* Armor_Back_TankBoss;
    UPointLightComponent* Light_BackBody;
    float Butt_FadeOut_TurnOffTime_16A7165B4C57BBF766638A80F23B7D1F;
    TEnumAsByte<ETimelineDirection::Type> Butt_FadeOut__Direction_16A7165B4C57BBF766638A80F23B7D1F;
    UTimelineComponent* Butt FadeOut;
    float Timeline_0_NewTrack_0_9F9D27D54BACF70E8270CB9172CF71EF;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_9F9D27D54BACF70E8270CB9172CF71EF;
    UTimelineComponent* Timeline_0;
    float LightIntensityCache;
    bool TankArmorIntact;
    UMaterialInstanceDynamic* ArmorBackDynamicMaterial;
    float HitGlow;
    FENE_Spider_Tank_Boss_COnArmorDestroyed OnArmorDestroyed;
    void OnArmorDestroyed(float EnrageDuration);
    bool FaceTargetWhenStationary;
    float BaseGlowFrequency;
    float BaseGlowStrength;
    UFSDAchievement* DreadnaughtAchievement;
    TMap<APlayerCharacter*, float> PlayerToDamageMap;
    UFSDAchievement* DesignatedDecoyAchievement;
    UFSDAchievement* PestControlAchievement;
    UFSDAchievement* JustAnotherBugHuntAchievement;
    UMaterialInstanceDynamic* Dynamic Material;
    FLinearColor Butt Initial Color;
    FLinearColor Butt Final Color;
    FTimerHandle RegrowShieldTimer;

    void CheckIfOnlyOnePlayerAlive(UPlayerCharacter* OnlyPlayerAlive, int32 AlivePlayers, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_1, UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, UPlayerCharacter* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsAlive_ReturnValue);
    void TrySelectDeathAnimation(bool WasWeakpoint, int32& AnimationIndex, bool& HasSelectedAnimation, int32 CallFunc_RandomIntegerInRange_ReturnValue, FVector CallFunc_GetActorUpVector_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
    bool ShouldExplode(TArray<UDamageTag*>& Tags);
    void Set achievement from server to all(UFSDAchievement* achievement to set, float Progress, int32 Temp_int_Array_Index_Variable, bool CallFunc_HasAuthority_ReturnValue, int32 Temp_int_Loop_Counter_Variable, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, UPlayerCharacter* CallFunc_Array_Get_Item, UFSDPlayerController* CallFunc_GetPlayerController_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
    void CheckForPlayersAliveWithNoAmmo(UPlayerCharacter* OnlyPlayerAlive, UFSDAchievement* WithoutAPaddleAchievement, int32 AlivePlayers, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, UPlayerCharacter* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsAlive_ReturnValue);
    void OnRep_FaceTargetWhenStationary();
    float GetEnemyDamageResistance(UFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, UDifficultyManager* CallFunc_GetDifficultyManager_ReturnValue, float CallFunc_GetEnemyDamageResistance_ReturnValue);
    void OnRep_TankArmorIntact(UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, FVector CallFunc_GetSocketLocation_ReturnValue);
    void UserConstructionScript(FLinearColor CallFunc_K2_GetVectorParameterValue_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1);
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Butt FadeOut__FinishedFunc();
    void Butt FadeOut__UpdateFunc();
    void OnRagdoll();
    void RegrowShield();
    void RegrowShieldFX();
    void PlayAnimatedDeath(int32 AnimationIndex);
    void BndEvt__HealthDamageTracker_K2Node_ComponentBoundEvent_3_DamageSig__DelegateSignature(float Amount);
    void OnDeathBase();
    void BndEvt__DestructibleSubHealth_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature(float Amount);
    void BndEvt__DestructibleSubHealth_K2Node_ComponentBoundEvent_0_SubHealthDestroyed__DelegateSignature(UDestructibleSubHealthComponent* subHealth);
    void CheckForLastPlayerStanding();
    void OnFrozen(AActor* Source);
    void OnUnFrozen();
    void ReceiveBeginPlay();
    void FractureArmor(FVector HitPoint);
    void PlayEnragedAnimation();
    void WaitForHit();
    void ExecuteUbergraph_ENE_Spider_Tank_Boss(int32 EntryPoint, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, int32 Temp_int_Variable, UAnimSequenceBase* Temp_object_Variable, UAnimSequenceBase* Temp_object_Variable_1, FVector CallFunc_K2_GetActorLocation_ReturnValue, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, UPlayerCharacter* CallFunc_FindNearestPlayerCharacter_ReturnValue, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsValid_ReturnValue, UFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, UDifficultyManager* CallFunc_GetDifficultyManager_ReturnValue, float CallFunc_GetBossDifficultyScaler_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float K2Node_Select_Default, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue_1, int32 K2Node_Event_AnimationIndex, UAnimSequenceBase* K2Node_Select_Default_1, FLinearColor CallFunc_LinearColorLerp_ReturnValue, bool CallFunc_IsAlive_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float K2Node_ComponentBoundEvent_Amount_1, float CallFunc_GetHealthPct_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_IsAlive_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, UGoogleAnalyticsWrapper* CallFunc_GetGoogleAnalyticsWrapper_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, float CallFunc_GetHealthPct_ReturnValue_1, USpiderAnimInstance* K2Node_DynamicCast_AsSpider_Anim_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_FloatFloat_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, float K2Node_ComponentBoundEvent_Amount, int32 CallFunc_AddModifier_ReturnValue, UDestructibleSubHealthComponent* K2Node_ComponentBoundEvent_subHealth, float CallFunc_GetHealthPct_ReturnValue_2, float K2Node_MathExpression_ReturnValue, float K2Node_MathExpression_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, AActor* K2Node_Event_source, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_2, int32 CallFunc_SetUpWeakPointGlowOnMesh_ReturnValue, FVector K2Node_CustomEvent_HitPoint, FTransform CallFunc_GetSocketTransform_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, ABP_Spider_TankBoss_FracturedArmor_C* CallFunc_FinishSpawningActor_ReturnValue);
    void OnArmorDestroyed__DelegateSignature(float EnrageDuration);
}

#endif
