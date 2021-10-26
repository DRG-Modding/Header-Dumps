// BlueprintGeneratedClass BP_FacilityElectricAttack.BP_FacilityElectricAttack_C
// Size: 0x180 (Inherited: 0xf0)
struct UBP_FacilityElectricAttack_C : UAttackBaseComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xf0(0x08)
	UParticleSystem* ParticleSystem; // 0xf8(0x08)
	UParticleSystemComponent* ParticleInstance; // 0x100(0x08)
	UDamageComponent* ParentDamage; // 0x108(0x08)
	float Delay; // 0x110(0x04)
	TArray<int32_t> Feedbackbar; // 0x118(0x10)
	float Progress; // 0x128(0x04)
	int32_t Stage; // 0x12c(0x04)
	TArray<FName> Ring_A_Sockets; // 0x130(0x10)
	TArray<FName> Ring_B_Sockets; // 0x140(0x10)
	TArray<FName> Ring_C_Sockets; // 0x150(0x10)
	TArray<FName> Ring_D_Sockets; // 0x160(0x10)
	TArray<ABP_Electrical_Antenna_C*> Antennaes; // 0x170(0x10)

	void OnRep_Stage();
	void SetupDamage(UDamageComponent* Damage, TArray<int32_t> Feedbackbar);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveAttackTarget(AActor* Target);
	void AttackEffets();
	void ReceiveAbortAttack();
	void ExecuteUbergraph_BP_FacilityElectricAttack(int32_t EntryPoint);
};

