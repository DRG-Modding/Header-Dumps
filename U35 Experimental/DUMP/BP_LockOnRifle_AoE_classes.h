// BlueprintGeneratedClass BP_LockOnRifle_AoE.BP_LockOnRifle_AoE_C
// Size: 0x250 (Inherited: 0x220)
struct ABP_LockOnRifle_AoE_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UParticleSystemComponent* P_Grenade_Cluster_Fragment; // 0x228(0x08)
	UDamageComponent* Damage; // 0x230(0x08)
	UAudioComponent* Audio; // 0x238(0x08)
	UNiagaraComponent* particle; // 0x240(0x08)
	USceneComponent* DefaultSceneRoot; // 0x248(0x08)

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_LockOnRifle_AoE(int32_t EntryPoint);
};

