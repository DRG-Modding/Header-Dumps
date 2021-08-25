// BlueprintGeneratedClass BP_Donkey_Escort.BP_Donkey_Escort_C
// Size: 0x550 (Inherited: 0x530)
struct ABP_Donkey_Escort_C : ABP_Donkey_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)
	struct UParticleSystemComponent* P_OmoranHeartStoneMagic_01; // 0x538(0x08)
	struct UStaticMeshComponent* SM_OmoranStrap_01; // 0x540(0x08)
	struct UStaticMeshComponent* HearthStone; // 0x548(0x08)

	void ReceiveBeginPlay(); // Function BP_Donkey_Escort.BP_Donkey_Escort_C.ReceiveBeginPlay
	void OnResourceIncreased(struct UCappedResource* Resource, float amount); // Function BP_Donkey_Escort.BP_Donkey_Escort_C.OnResourceIncreased
	void ExecuteUbergraph_BP_Donkey_Escort(int32_t EntryPoint); // Function BP_Donkey_Escort.BP_Donkey_Escort_C.ExecuteUbergraph_BP_Donkey_Escort
};

