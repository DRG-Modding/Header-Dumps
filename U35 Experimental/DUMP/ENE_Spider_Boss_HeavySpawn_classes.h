// BlueprintGeneratedClass ENE_Spider_Boss_HeavySpawn.ENE_Spider_Boss_HeavySpawn_C
// Size: 0x4e8 (Inherited: 0x4b4)
struct AENE_Spider_Boss_HeavySpawn_C : AENE_SpiderBase_Large_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UMeleeAttackComponent* CarveAttack; 
	UPROPERTY(BlueprintReadWrite) UAlignEnemyComponent* AlignEnemy; 
	UPROPERTY(BlueprintReadWrite) UCapsuleComponent* Capsule; 
	UPROPERTY(BlueprintReadWrite) UMeleeAttackComponent* BiteAttack; 
	UPROPERTY(BlueprintReadWrite) UMeleeAttackComponent* StabAttack; 

	UFUNCTION(BlueprintCallable) void OnRagdoll();
	UFUNCTION(BlueprintCallable) void OnDeathBase();
	UFUNCTION(BlueprintCallable) void OnFrozen(AActor* Source);
	UFUNCTION(BlueprintCallable) void OnUnFrozen();
	UFUNCTION(BlueprintCallable) void Play Frozen Death();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ENE_Spider_Boss_HeavySpawn(int32_t EntryPoint);
};

