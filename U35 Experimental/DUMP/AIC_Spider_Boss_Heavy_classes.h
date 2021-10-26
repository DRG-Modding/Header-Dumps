// BlueprintGeneratedClass AIC_Spider_Boss_Heavy.AIC_Spider_Boss_Heavy_C
// Size: 0x3d8 (Inherited: 0x374)
struct AAIC_Spider_Boss_Heavy_C : AAIC_Spider_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) bool Enraged; 
	UPROPERTY(BlueprintReadWrite) TSet<AFSDPawn*> spawnedEnemies; 

	UFUNCTION(BlueprintCallable) void SetEnemyState(enum class Spider_Boss_Heavy_State State);
	UFUNCTION(BlueprintCallable) void GetTankBoss(AENE_Spider_Boss_Heavy_C* AsENE Tank Boss Heavy);
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void OnMessageBehaviorTreeEvent_Event_1(FName Message);
	UFUNCTION(BlueprintCallable) void SpawnEnemies();
	UFUNCTION(BlueprintCallable) void OnEnemySpawned(APawn* enemy);
	UFUNCTION(BlueprintCallable) void OnDeathEvent(UHealthComponentBase* HealthComponent);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_AIC_Spider_Boss_Heavy(int32_t EntryPoint);
};

