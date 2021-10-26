// BlueprintGeneratedClass BP_Tentacle_RangedAttack.BP_Tentacle_RangedAttack_C
// Size: 0x188 (Inherited: 0x178)
struct UBP_Tentacle_RangedAttack_C : UProjectileAttackBaseComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0x178(0x08)
	FTimerHandle LookAtHandle; // 0x180(0x08)

	void ReceiveAttackTarget(AActor* Target);
	void ReceiveCompleteAttack();
	void ReceiveAbortAttack();
	void Face();
	void ExecuteUbergraph_BP_Tentacle_RangedAttack(int32_t EntryPoint);
};

