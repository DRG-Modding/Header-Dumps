// BlueprintGeneratedClass AIC_Spider_Boss_Heavy.AIC_Spider_Boss_Heavy_C
// Size: 0x3d8 (Inherited: 0x374)
struct AAIC_Spider_Boss_Heavy_C : AAIC_Spider_C {
	char UnknownData_374[0x4]; // 0x374(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x378(0x08)
	bool Enraged; // 0x380(0x01)
	char UnknownData_381[0x7]; // 0x381(0x07)
	struct TSet<struct AFSDPawn*> spawnedEnemies; // 0x388(0x50)

	void SetEnemyState(char State); // Function AIC_Spider_Boss_Heavy.AIC_Spider_Boss_Heavy_C.SetEnemyState
	void GetTankBoss(struct AENE_Spider_Boss_Heavy_C* AsENE Tank Boss Heavy); // Function AIC_Spider_Boss_Heavy.AIC_Spider_Boss_Heavy_C.GetTankBoss
	void ReceiveBeginPlay(); // Function AIC_Spider_Boss_Heavy.AIC_Spider_Boss_Heavy_C.ReceiveBeginPlay
	void OnMessageBehaviorTreeEvent_Event_1(struct FName Message); // Function AIC_Spider_Boss_Heavy.AIC_Spider_Boss_Heavy_C.OnMessageBehaviorTreeEvent_Event_1
	void SpawnEnemies(); // Function AIC_Spider_Boss_Heavy.AIC_Spider_Boss_Heavy_C.SpawnEnemies
	void OnEnemySpawned(struct APawn* enemy); // Function AIC_Spider_Boss_Heavy.AIC_Spider_Boss_Heavy_C.OnEnemySpawned
	void OnDeathEvent(struct UHealthComponentBase* HealthComponent); // Function AIC_Spider_Boss_Heavy.AIC_Spider_Boss_Heavy_C.OnDeathEvent
	void ExecuteUbergraph_AIC_Spider_Boss_Heavy(int32_t EntryPoint); // Function AIC_Spider_Boss_Heavy.AIC_Spider_Boss_Heavy_C.ExecuteUbergraph_AIC_Spider_Boss_Heavy
};

