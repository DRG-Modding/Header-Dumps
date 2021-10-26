// BlueprintGeneratedClass ENE_Spider_Grunt_Normal.ENE_Spider_Grunt_Normal_C
// Size: 0x4d8 (Inherited: 0x4c8)
struct AENE_Spider_Grunt_Normal_C : AENE_Spider_Grunt_Base_C {
	UPROPERTY(BlueprintReadWrite) UMeleeAttackComponent* MeleeAttack; 
	UPROPERTY(BlueprintReadWrite) USimpleArmorDamageComponent* SimpleArmorDamage; 

	UFUNCTION(BlueprintCallable) void GetEnemySpawnedCount(int32_t SpawnCount);
};

