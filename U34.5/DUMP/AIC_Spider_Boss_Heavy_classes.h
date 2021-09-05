// BlueprintGeneratedClass AIC_Spider_Boss_Heavy.AIC_Spider_Boss_Heavy_C
// Size: 0x3d8 (Inherited: 0x374)
struct AAIC_Spider_Boss_Heavy_C : AAIC_Spider_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x378(0x08)
	bool Enraged; // 0x380(0x01)
	TSet<AFSDPawn*> spawnedEnemies; // 0x388(0x50)

	void SetEnemyState(enum class Spider_Boss_Heavy_State State);
	void GetTankBoss(AENE_Spider_Boss_Heavy_C* AsENE Tank Boss Heavy);
	void ReceiveBeginPlay();
	void OnMessageBehaviorTreeEvent_Event_1(FName Message);
	void SpawnEnemies();
	void OnEnemySpawned(APawn* enemy);
	void OnDeathEvent(UHealthComponentBase* HealthComponent);
	void ExecuteUbergraph_AIC_Spider_Boss_Heavy(int32_t EntryPoint);
};

