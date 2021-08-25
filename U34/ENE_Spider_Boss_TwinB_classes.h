// BlueprintGeneratedClass ENE_Spider_Boss_TwinB.ENE_Spider_Boss_TwinB_C
// Size: 0x608 (Inherited: 0x5ba)
struct AENE_Spider_Boss_TwinB_C : AENE_Spider_Boss_TwinBase_C {
	char UnknownData_5BA[0x6]; // 0x5ba(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5c0(0x08)
	struct UAttackCooldownComponent* AttackCooldown; // 0x5c8(0x08)
	struct UMeleeAttackComponent* BiteAttack; // 0x5d0(0x08)
	struct UEnemyBufferComponent* EnemyBuffer; // 0x5d8(0x08)
	struct UMeleeAttackComponent* CarveAttack; // 0x5e0(0x08)
	struct UProjectileAttackComponent* ThreeWayAttack; // 0x5e8(0x08)
	struct UBP_ConeAttackBase_C* ConeAttack; // 0x5f0(0x08)
	struct UBP_BurrowAttackComponent_C* BurrowAttack; // 0x5f8(0x08)
	struct UCapsuleComponent* SpecialAttackCollider; // 0x600(0x08)

	void UserConstructionScript(); // Function ENE_Spider_Boss_TwinB.ENE_Spider_Boss_TwinB_C.UserConstructionScript
	void ReceiveBeginPlay(); // Function ENE_Spider_Boss_TwinB.ENE_Spider_Boss_TwinB_C.ReceiveBeginPlay
	void OnDeathBase(); // Function ENE_Spider_Boss_TwinB.ENE_Spider_Boss_TwinB_C.OnDeathBase
	void OnMessageAI(struct FName TriggerName); // Function ENE_Spider_Boss_TwinB.ENE_Spider_Boss_TwinB_C.OnMessageAI
	void ApplyDR(); // Function ENE_Spider_Boss_TwinB.ENE_Spider_Boss_TwinB_C.ApplyDR
	void RemoveDR(); // Function ENE_Spider_Boss_TwinB.ENE_Spider_Boss_TwinB_C.RemoveDR
	void Grieve(struct FVector GreeveLocation); // Function ENE_Spider_Boss_TwinB.ENE_Spider_Boss_TwinB_C.Grieve
	void ExecuteUbergraph_ENE_Spider_Boss_TwinB(int32_t EntryPoint); // Function ENE_Spider_Boss_TwinB.ENE_Spider_Boss_TwinB_C.ExecuteUbergraph_ENE_Spider_Boss_TwinB
};

