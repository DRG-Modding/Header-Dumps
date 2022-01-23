#ifndef UE4SS_SDK_ENE_Spider_Tank_Boss_HPP
#define UE4SS_SDK_ENE_Spider_Tank_Boss_HPP

class AENE_Spider_Tank_Boss_C : public AENE_Spider_Boss_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWeakpointGlowComponent* WeakpointGlow;
    class UCapsuleComponent* Capsule;
    class UMeleeAttackComponent* CarveAttack;
    class UBP_Boss_AoEAttack_C* SlamAttackk;
    class UMeleeAttackComponent* MeleeAttack;
    class UProjectileAttackComponent* EggProjectile;
    class UProjectileAttackComponent* fireball;
    class UAlignEnemyComponent* AlignEnemy;
    class UEnemyTemperatureReplicatorComponent* EnemyTemperatureReplicator;
    class UHealthDamageTracker* HealthDamageTracker;
    class UDestructibleSubHealthComponent* DestructibleSubHealth;
    class UStaticMeshComponent* Armor_Back_TankBoss;
    class UPointLightComponent* Light_BackBody;
    float Butt_FadeOut_TurnOffTime_16A7165B4C57BBF766638A80F23B7D1F;
    TEnumAsByte<ETimelineDirection::Type> Butt_FadeOut__Direction_16A7165B4C57BBF766638A80F23B7D1F;
    class UTimelineComponent* Butt FadeOut;
    float Timeline_0_NewTrack_0_9F9D27D54BACF70E8270CB9172CF71EF;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_9F9D27D54BACF70E8270CB9172CF71EF;
    class UTimelineComponent* Timeline_0;
    float LightIntensityCache;
    bool TankArmorIntact;
    class UMaterialInstanceDynamic* ArmorBackDynamicMaterial;
    float HitGlow;
    FENE_Spider_Tank_Boss_COnArmorDestroyed OnArmorDestroyed;
    void OnArmorDestroyed(float EnrageDuration);
    bool FaceTargetWhenStationary;
    float BaseGlowFrequency;
    float BaseGlowStrength;
    class UFSDAchievement* DreadnaughtAchievement;
    TMap<APlayerCharacter*, float> PlayerToDamageMap;
    class UFSDAchievement* DesignatedDecoyAchievement;
    class UFSDAchievement* PestControlAchievement;
    class UFSDAchievement* JustAnotherBugHuntAchievement;
    class UMaterialInstanceDynamic* Dynamic Material;
    FLinearColor Butt Initial Color;
    FLinearColor Butt Final Color;
    FTimerHandle RegrowShieldTimer;

    void CheckIfOnlyOnePlayerAlive(class APlayerCharacter* OnlyPlayerAlive, int32 AlivePlayers, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_1, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class APlayerCharacter* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsAlive_ReturnValue);
    void TrySelectDeathAnimation(bool WasWeakpoint, int32& AnimationIndex, bool& HasSelectedAnimation, int32 CallFunc_RandomIntegerInRange_ReturnValue, FVector CallFunc_GetActorUpVector_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
    bool ShouldExplode(TArray<class UDamageTag*>& Tags);
    void Set achievement from server to all(class UFSDAchievement* achievement to set, float Progress, int32 Temp_int_Array_Index_Variable, bool CallFunc_HasAuthority_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerCharacter* CallFunc_Array_Get_Item, class AFSDPlayerController* CallFunc_GetPlayerController_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
    void CheckForPlayersAliveWithNoAmmo(class APlayerCharacter* OnlyPlayerAlive, class UFSDAchievement* WithoutAPaddleAchievement, int32 AlivePlayers, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class APlayerCharacter* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsAlive_ReturnValue);
    void OnRep_FaceTargetWhenStationary();
    float GetEnemyDamageResistance(class AFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, class UDifficultyManager* CallFunc_GetDifficultyManager_ReturnValue, float CallFunc_GetEnemyDamageResistance_ReturnValue);
    void OnRep_TankArmorIntact(class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, FVector CallFunc_GetSocketLocation_ReturnValue);
    void UserConstructionScript(FLinearColor CallFunc_K2_GetVectorParameterValue_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1);
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
    void BndEvt__DestructibleSubHealth_K2Node_ComponentBoundEvent_0_SubHealthDestroyed__DelegateSignature(class UDestructibleSubHealthComponent* subHealth);
    void CheckForLastPlayerStanding();
    void OnFrozen(class AActor* Source);
    void OnUnFrozen();
    void ReceiveBeginPlay();
    void FractureArmor(FVector HitPoint);
    void PlayEnragedAnimation();
    void WaitForHit();
    void ExecuteUbergraph_ENE_Spider_Tank_Boss(int32 EntryPoint, FExecuteUbergraph_ENE_Spider_Tank_BossK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, int32 Temp_int_Variable, class UAnimSequenceBase* Temp_object_Variable, class UAnimSequenceBase* Temp_object_Variable_1, FVector CallFunc_K2_GetActorLocation_ReturnValue, FExecuteUbergraph_ENE_Spider_Tank_BossK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, class APlayerCharacter* CallFunc_FindNearestPlayerCharacter_ReturnValue, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, class UDifficultyManager* CallFunc_GetDifficultyManager_ReturnValue, float CallFunc_GetBossDifficultyScaler_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float K2Node_Select_Default, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue_1, int32 K2Node_Event_AnimationIndex, class UAnimSequenceBase* K2Node_Select_Default_1, FLinearColor CallFunc_LinearColorLerp_ReturnValue, bool CallFunc_IsAlive_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float K2Node_ComponentBoundEvent_Amount_1, float CallFunc_GetHealthPct_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_IsAlive_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class UGoogleAnalyticsWrapper* CallFunc_GetGoogleAnalyticsWrapper_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, float CallFunc_GetHealthPct_ReturnValue_1, class USpiderAnimInstance* K2Node_DynamicCast_AsSpider_Anim_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_FloatFloat_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, float K2Node_ComponentBoundEvent_Amount, int32 CallFunc_AddModifier_ReturnValue, class UDestructibleSubHealthComponent* K2Node_ComponentBoundEvent_subHealth, float CallFunc_GetHealthPct_ReturnValue_2, float K2Node_MathExpression_ReturnValue, float K2Node_MathExpression_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, class AActor* K2Node_Event_source, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_2, int32 CallFunc_SetUpWeakPointGlowOnMesh_ReturnValue, FVector K2Node_CustomEvent_HitPoint, FTransform CallFunc_GetSocketTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_Spider_TankBoss_FracturedArmor_C* CallFunc_FinishSpawningActor_ReturnValue);
    void OnArmorDestroyed__DelegateSignature(float EnrageDuration);
};

#endif
