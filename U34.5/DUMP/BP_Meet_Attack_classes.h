// BlueprintGeneratedClass BP_Meet_Attack.BP_Meet_Attack_C
// Size: 0xfc (Inherited: 0xf0)
struct UBP_Meet_Attack_C : UAttackBaseComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xf0(0x08)
	float BurrowDuration; // 0xf8(0x04)

	void ReceiveAbortAttack();
	void StartMeeting();
	void OnUnburrowed(bool IsEmerging);
	void OnBurrowedDone(bool IsEmerging);
	void ReceiveAttackTarget(AActor* Target);
	void ExecuteUbergraph_BP_Meet_Attack(int32_t EntryPoint);
};

