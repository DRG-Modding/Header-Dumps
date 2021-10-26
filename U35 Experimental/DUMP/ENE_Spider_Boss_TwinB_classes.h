// BlueprintGeneratedClass ENE_Spider_Boss_TwinB.ENE_Spider_Boss_TwinB_C
// Size: 0x608 (Inherited: 0x5ba)
struct AENE_Spider_Boss_TwinB_C : AENE_Spider_Boss_TwinBase_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UAttackCooldownComponent* AttackCooldown; 
	UPROPERTY(BlueprintReadWrite) UMeleeAttackComponent* BiteAttack; 
	UPROPERTY(BlueprintReadWrite) UEnemyBufferComponent* EnemyBuffer; 
	UPROPERTY(BlueprintReadWrite) UMeleeAttackComponent* CarveAttack; 
	UPROPERTY(BlueprintReadWrite) UProjectileAttackComponent* ThreeWayAttack; 
	UPROPERTY(BlueprintReadWrite) UBP_ConeAttackBase_C* ConeAttack; 
	UPROPERTY(BlueprintReadWrite) UBP_BurrowAttackComponent_C* BurrowAttack; 
	UPROPERTY(BlueprintReadWrite) UCapsuleComponent* SpecialAttackCollider; 

	UFUNCTION(BlueprintCallable) void UserConstructionScript();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void OnDeathBase();
	UFUNCTION(BlueprintCallable) void OnMessageAI(FName TriggerName);
	UFUNCTION(BlueprintCallable) void ApplyDR();
	UFUNCTION(BlueprintCallable) void RemoveDR();
	UFUNCTION(BlueprintCallable) void Grieve(FVector GreeveLocation);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ENE_Spider_Boss_TwinB(int32_t EntryPoint);
};

