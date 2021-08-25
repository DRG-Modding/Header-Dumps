// BlueprintGeneratedClass BP_Meet_Attack.BP_Meet_Attack_C
// Size: 0xfc (Inherited: 0xf0)
struct UBP_Meet_Attack_C : UAttackBaseComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf0(0x08)
	float BurrowDuration; // 0xf8(0x04)

	void ReceiveAbortAttack(); // Function BP_Meet_Attack.BP_Meet_Attack_C.ReceiveAbortAttack
	void StartMeeting(); // Function BP_Meet_Attack.BP_Meet_Attack_C.StartMeeting
	void OnUnburrowed(bool IsEmerging); // Function BP_Meet_Attack.BP_Meet_Attack_C.OnUnburrowed
	void OnBurrowedDone(bool IsEmerging); // Function BP_Meet_Attack.BP_Meet_Attack_C.OnBurrowedDone
	void ReceiveAttackTarget(struct AActor* Target); // Function BP_Meet_Attack.BP_Meet_Attack_C.ReceiveAttackTarget
	void ExecuteUbergraph_BP_Meet_Attack(int32_t EntryPoint); // Function BP_Meet_Attack.BP_Meet_Attack_C.ExecuteUbergraph_BP_Meet_Attack
};

