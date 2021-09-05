// BlueprintGeneratedClass BP_ConeAttackBase.BP_ConeAttackBase_C
// Size: 0x139 (Inherited: 0x120)
struct UBP_ConeAttackBase_C : USpecialAttackComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0x120(0x08)
	UPrimitiveComponent* ConeCollider; // 0x128(0x08)
	UStatusEffect* StatusEffect; // 0x130(0x08)
	bool AttackIsActive; // 0x138(0x01)

	void ReceiveBeginPlay();
	void OnAttackActionNotify_Event(FName nameValue);
	void SetConeCollider(UPrimitiveComponent* ConeCollider);
	void Cone_Begin_Overlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void Cone_End_Overlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
	void OnFrozen(bool IsFrozen);
	void ReceiveAbortAttack();
	void ExecuteUbergraph_BP_ConeAttackBase(int32_t EntryPoint);
};

