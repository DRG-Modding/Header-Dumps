// BlueprintGeneratedClass BP_TurretEMPDischarge.BP_TurretEMPDischarge_C
// Size: 0x248 (Inherited: 0x220)
struct ABP_TurretEMPDischarge_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UAudioComponent* Audio; // 0x228(0x08)
	struct UDamageComponent* Damage; // 0x230(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x238(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x240(0x08)

	void ReceiveBeginPlay(); // Function BP_TurretEMPDischarge.BP_TurretEMPDischarge_C.ReceiveBeginPlay
	void ExecuteUbergraph_BP_TurretEMPDischarge(int32_t EntryPoint); // Function BP_TurretEMPDischarge.BP_TurretEMPDischarge_C.ExecuteUbergraph_BP_TurretEMPDischarge
};

