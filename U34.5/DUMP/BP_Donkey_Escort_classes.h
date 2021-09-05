// BlueprintGeneratedClass BP_Donkey_Escort.BP_Donkey_Escort_C
// Size: 0x550 (Inherited: 0x530)
struct ABP_Donkey_Escort_C : ABP_Donkey_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)
	UParticleSystemComponent* P_OmoranHeartStoneMagic_01; // 0x538(0x08)
	UStaticMeshComponent* SM_OmoranStrap_01; // 0x540(0x08)
	UStaticMeshComponent* HearthStone; // 0x548(0x08)

	void ReceiveBeginPlay();
	void OnResourceIncreased(UCappedResource* Resource, float amount);
	void ExecuteUbergraph_BP_Donkey_Escort(int32_t EntryPoint);
};

