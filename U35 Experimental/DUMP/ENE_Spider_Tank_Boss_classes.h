// BlueprintGeneratedClass ENE_Spider_Tank_Boss.ENE_Spider_Tank_Boss_C
// Size: 0x6b0 (Inherited: 0x544)
struct AENE_Spider_Tank_Boss_C : AENE_Spider_Boss_Base_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UWeakpointGlowComponent* WeakpointGlow; 
	UPROPERTY(BlueprintReadWrite) UCapsuleComponent* Capsule; 
	UPROPERTY(BlueprintReadWrite) UMeleeAttackComponent* CarveAttack; 
	UPROPERTY(BlueprintReadWrite) UBP_Boss_AoEAttack_C* SlamAttackk; 
	UPROPERTY(BlueprintReadWrite) UMeleeAttackComponent* MeleeAttack; 
	UPROPERTY(BlueprintReadWrite) UProjectileAttackComponent* EggProjectile; 
	UPROPERTY(BlueprintReadWrite) UProjectileAttackComponent* fireball; 
	UPROPERTY(BlueprintReadWrite) UAlignEnemyComponent* AlignEnemy; 
	UPROPERTY(BlueprintReadWrite) UEnemyTemperatureReplicatorComponent* EnemyTemperatureReplicator; 
	UPROPERTY(BlueprintReadWrite) UHealthDamageTracker* HealthDamageTracker; 
	UPROPERTY(BlueprintReadWrite) UDestructibleSubHealthComponent* DestructibleSubHealth; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Armor_Back_TankBoss; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* Light_BackBody; 
	UPROPERTY(BlueprintReadWrite) float Butt_FadeOut_TurnOffTime_16A7165B4C57BBF766638A80F23B7D1F; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection Butt_FadeOut__Direction_16A7165B4C57BBF766638A80F23B7D1F; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* Butt FadeOut; 
	UPROPERTY(BlueprintReadWrite) float Timeline_0_NewTrack_0_9F9D27D54BACF70E8270CB9172CF71EF; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection Timeline_0__Direction_9F9D27D54BACF70E8270CB9172CF71EF; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* Timeline_1; 
	UPROPERTY(BlueprintReadWrite) float LightIntensityCache; 
	UPROPERTY(BlueprintReadWrite) bool TankArmorIntact; 
	UPROPERTY(BlueprintReadWrite) UMaterialInstanceDynamic* ArmorBackDynamicMaterial; 
	UPROPERTY(BlueprintReadWrite) float HitGlow; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate OnArmorDestroyed; 
	UPROPERTY(BlueprintReadWrite) bool FaceTargetWhenStationary; 
	UPROPERTY(BlueprintReadWrite) float BaseGlowFrequency; 
	UPROPERTY(BlueprintReadWrite) float BaseGlowStrength; 
	UPROPERTY(BlueprintReadWrite) UFSDAchievement* DreadnaughtAchievement; 
	UPROPERTY(BlueprintReadWrite) TMap<APlayerCharacter*, float> PlayerToDamageMap; 
	UPROPERTY(BlueprintReadWrite) UFSDAchievement* DesignatedDecoyAchievement; 
	UPROPERTY(BlueprintReadWrite) UFSDAchievement* PestControlAchievement; 
	UPROPERTY(BlueprintReadWrite) UFSDAchievement* JustAnotherBugHuntAchievement; 
	UPROPERTY(BlueprintReadWrite) UMaterialInstanceDynamic* Dynamic Material; 
	UPROPERTY(BlueprintReadWrite) FLinearColor Butt Initial Color; 
	UPROPERTY(BlueprintReadWrite) FLinearColor Butt Final Color; 
	UPROPERTY(BlueprintReadWrite) FTimerHandle RegrowShieldTimer; 

	UFUNCTION(BlueprintCallable) void CheckIfOnlyOnePlayerAlive();
	UFUNCTION(BlueprintCallable) void TrySelectDeathAnimation(bool WasWeakpoint, int32_t AnimationIndex, bool HasSelectedAnimation);
	UFUNCTION(BlueprintCallable) bool ShouldExplode();
	UFUNCTION(BlueprintCallable) void Set achievement from server to all(UFSDAchievement* achievement to set, float Progress);
	UFUNCTION(BlueprintCallable) void CheckForPlayersAliveWithNoAmmo();
	UFUNCTION(BlueprintCallable) void OnRep_FaceTargetWhenStationary();
	UFUNCTION(BlueprintCallable) float GetEnemyDamageResistance();
	UFUNCTION(BlueprintCallable) void OnRep_TankArmorIntact();
	UFUNCTION(BlueprintCallable) void UserConstructionScript();
	UFUNCTION(BlueprintCallable) void Timeline_0__FinishedFunc();
	UFUNCTION(BlueprintCallable) void Timeline_0__UpdateFunc();
	UFUNCTION(BlueprintCallable) void Butt FadeOut__FinishedFunc();
	UFUNCTION(BlueprintCallable) void Butt FadeOut__UpdateFunc();
	UFUNCTION(BlueprintCallable) void BndEvt__DestructibleSubHealth_K2Node_ComponentBoundEvent_0_SubHealthDestroyed__DelegateSignature(UDestructibleSubHealthComponent* subHealth);
	UFUNCTION(BlueprintCallable) void BndEvt__DestructibleSubHealth_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature(float amount);
	UFUNCTION(BlueprintCallable) void OnRagdoll();
	UFUNCTION(BlueprintCallable) void RegrowShield();
	UFUNCTION(BlueprintCallable) void RegrowShieldFX();
	UFUNCTION(BlueprintCallable) void PlayAnimatedDeath(int32_t AnimationIndex);
	UFUNCTION(BlueprintCallable) void BndEvt__HealthDamageTracker_K2Node_ComponentBoundEvent_3_DamageSig__DelegateSignature(float amount);
	UFUNCTION(BlueprintCallable) void OnDeathBase();
	UFUNCTION(BlueprintCallable) void CheckForLastPlayerStanding();
	UFUNCTION(BlueprintCallable) void OnFrozen(AActor* Source);
	UFUNCTION(BlueprintCallable) void OnUnFrozen();
	UFUNCTION(BlueprintCallable) void PlayEnragedAnimation();
	UFUNCTION(BlueprintCallable) void WaitForHit();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void FractureArmor(FVector HitPoint);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ENE_Spider_Tank_Boss(int32_t EntryPoint);
	UFUNCTION(BlueprintCallable) void OnArmorDestroyed__DelegateSignature(float EnrageDuration);
};

