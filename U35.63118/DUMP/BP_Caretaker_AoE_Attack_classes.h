// BlueprintGeneratedClass BP_Caretaker_AoE_Attack.BP_Caretaker_AoE_Attack_C
// Size: 0x130 (Inherited: 0xf8)
struct UBP_Caretaker_AoE_Attack_C : UDamageAttackComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xf8(0x08)
	FTimerHandle Timer_Charge; // 0x100(0x08)
	int32_t ChargeCount; // 0x108(0x04)
	FMulticastInlineDelegate OnChargeCountChanged; // 0x110(0x10)
	float ChareUpStageTime; // 0x120(0x04)
	int32_t AttackCountThisPhase; // 0x124(0x04)
	float ExtraDelayPerAttack; // 0x128(0x04)
	float MaxAllowedDelay; // 0x12c(0x04)

	void SpawnBarriers(int32_t Amount, float AngleOffset);
	void OnRep_ChargeCount();
	void EnableAttack();
	void TickTimer();
	void StopAttack();
	void ReceiveAttackTarget(AActor* Target);
	void Cheat_TestAttack();
	void ExecuteUbergraph_BP_Caretaker_AoE_Attack(int32_t EntryPoint);
	void OnChargeCountChanged__DelegateSignature(int32_t ChargeCount);
};

