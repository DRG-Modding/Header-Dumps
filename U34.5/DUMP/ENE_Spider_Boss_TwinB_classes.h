// BlueprintGeneratedClass ENE_Spider_Boss_TwinB.ENE_Spider_Boss_TwinB_C
// Size: 0x608 (Inherited: 0x5ba)
struct AENE_Spider_Boss_TwinB_C : AENE_Spider_Boss_TwinBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x5c0(0x08)
	UAttackCooldownComponent* AttackCooldown; // 0x5c8(0x08)
	UMeleeAttackComponent* BiteAttack; // 0x5d0(0x08)
	UEnemyBufferComponent* EnemyBuffer; // 0x5d8(0x08)
	UMeleeAttackComponent* CarveAttack; // 0x5e0(0x08)
	UProjectileAttackComponent* ThreeWayAttack; // 0x5e8(0x08)
	UBP_ConeAttackBase_C* ConeAttack; // 0x5f0(0x08)
	UBP_BurrowAttackComponent_C* BurrowAttack; // 0x5f8(0x08)
	UCapsuleComponent* SpecialAttackCollider; // 0x600(0x08)

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnDeathBase();
	void OnMessageAI(FName TriggerName);
	void ApplyDR();
	void RemoveDR();
	void Grieve(FVector GreeveLocation);
	void ExecuteUbergraph_ENE_Spider_Boss_TwinB(int32_t EntryPoint);
};

