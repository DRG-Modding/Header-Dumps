// BlueprintGeneratedClass BP_ConeAttackBase.BP_ConeAttackBase_C
// Size: 0x139 (Inherited: 0x120)
struct UBP_ConeAttackBase_C : USpecialAttackComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x120(0x08)
	struct UPrimitiveComponent* ConeCollider; // 0x128(0x08)
	struct UStatusEffect* StatusEffect; // 0x130(0x08)
	bool AttackIsActive; // 0x138(0x01)

	void ReceiveBeginPlay(); // Function BP_ConeAttackBase.BP_ConeAttackBase_C.ReceiveBeginPlay
	void OnAttackActionNotify_Event(struct FName nameValue); // Function BP_ConeAttackBase.BP_ConeAttackBase_C.OnAttackActionNotify_Event
	void SetConeCollider(struct UPrimitiveComponent* ConeCollider); // Function BP_ConeAttackBase.BP_ConeAttackBase_C.SetConeCollider
	void Cone_Begin_Overlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_ConeAttackBase.BP_ConeAttackBase_C.Cone_Begin_Overlap
	void Cone_End_Overlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_ConeAttackBase.BP_ConeAttackBase_C.Cone_End_Overlap
	void OnFrozen(bool IsFrozen); // Function BP_ConeAttackBase.BP_ConeAttackBase_C.OnFrozen
	void ReceiveAbortAttack(); // Function BP_ConeAttackBase.BP_ConeAttackBase_C.ReceiveAbortAttack
	void ExecuteUbergraph_BP_ConeAttackBase(int32_t EntryPoint); // Function BP_ConeAttackBase.BP_ConeAttackBase_C.ExecuteUbergraph_BP_ConeAttackBase
};

