// BlueprintGeneratedClass ENE_Spider_Boss_Heavy.ENE_Spider_Boss_Heavy_C
// Size: 0x5e0 (Inherited: 0x544)
struct AENE_Spider_Boss_Heavy_C : AENE_Spider_Boss_Base_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UCapsuleComponent* Capsule; 
	UPROPERTY(BlueprintReadWrite) UMeleeAttackComponent* CarveAttack; 
	UPROPERTY(BlueprintReadWrite) UWeakpointGlowComponent* WeakpointGlow_Ass; 
	UPROPERTY(BlueprintReadWrite) UCapsuleComponent* Weakspot_C; 
	UPROPERTY(BlueprintReadWrite) UCapsuleComponent* Weakspot_L; 
	UPROPERTY(BlueprintReadWrite) UCapsuleComponent* Weakspot_R; 
	UPROPERTY(BlueprintReadWrite) UProjectileAttackComponent* ProjectileFireball; 
	UPROPERTY(BlueprintReadWrite) UMeleeAttackComponent* MeleeAttack1; 
	UPROPERTY(BlueprintReadWrite) UDamageComponent* SpecialAttackAoE; 
	UPROPERTY(BlueprintReadWrite) UEnemyTemperatureReplicatorComponent* EnemyTemperatureReplicator; 
	UPROPERTY(BlueprintReadWrite) UHealthDamageTracker* HealthDamageTracker; 
	UPROPERTY(BlueprintReadWrite) UDestructibleSubHealthComponent* WeakspotHealth_L; 
	UPROPERTY(BlueprintReadWrite) USpawnActorWithDebrisPosComponent* SpecialAttackSpawn; 
	UPROPERTY(BlueprintReadWrite) UDestructibleSubHealthComponent* WeakspotHealth_C; 
	UPROPERTY(BlueprintReadWrite) UDestructibleSubHealthComponent* WeakspotHealth_R; 
	UPROPERTY(BlueprintReadWrite) UAlignEnemyComponent* AlignEnemy; 
	UPROPERTY(BlueprintReadWrite) enum class Spider_Boss_Heavy_State HeavyTankState; 
	UPROPERTY(BlueprintReadWrite) UNiagaraComponent* WhirlwindParticles; 

	UFUNCTION(BlueprintCallable) bool GetIsTargetable();
	UFUNCTION(BlueprintCallable) void SetupWeakspotGlow();
	UFUNCTION(BlueprintCallable) void TrySelectDeathAnimation(bool WasWeakpoint, int32_t AnimationIndex, bool HasSelectedAnimation);
	UFUNCTION(BlueprintCallable) void SetArmorMeshState(bool ArmorOpen);
	UFUNCTION(BlueprintCallable) bool ShouldExplode();
	UFUNCTION(BlueprintCallable) void OnRep_HeavyTankState();
	UFUNCTION(BlueprintCallable) bool IsArmorIntact();
	UFUNCTION(BlueprintCallable) void SetWeakpointVisibility(bool Visible, UDestructibleSubHealthComponent* Health);
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void BndEvt__DestructibleSubHealth_K2Node_ComponentBoundEvent_0_SubHealthDestroyed__DelegateSignature(UDestructibleSubHealthComponent* subHealth);
	UFUNCTION(BlueprintCallable) void BndEvt__DestructibleSubHealth1_K2Node_ComponentBoundEvent_1_SubHealthDestroyed__DelegateSignature(UDestructibleSubHealthComponent* subHealth);
	UFUNCTION(BlueprintCallable) void StartSpecialAttack();
	UFUNCTION(BlueprintCallable) void ForceVulnerable();
	UFUNCTION(BlueprintCallable) void BndEvt__DestructibleSubHealth2_K2Node_ComponentBoundEvent_2_SubHealthDestroyed__DelegateSignature(UDestructibleSubHealthComponent* subHealth);
	UFUNCTION(BlueprintCallable) void OnMessageAI(FName TriggerName);
	UFUNCTION(BlueprintCallable) void OnRagdoll();
	UFUNCTION(BlueprintCallable) void BndEvt__HealthDamageTracker_K2Node_ComponentBoundEvent_3_DamageSig__DelegateSignature(float amount);
	UFUNCTION(BlueprintCallable) void GrowWeakpoints();
	UFUNCTION(BlueprintCallable) void PlayAnimatedDeath(int32_t AnimationIndex);
	UFUNCTION(BlueprintCallable) void ForceEnraged();
	UFUNCTION(BlueprintCallable) void OnDeathBase();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ENE_Spider_Boss_Heavy(int32_t EntryPoint);
};

