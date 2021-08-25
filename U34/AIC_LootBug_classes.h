// BlueprintGeneratedClass AIC_LootBug.AIC_LootBug_C
// Size: 0x360 (Inherited: 0x358)
struct AAIC_LootBug_C : AFSDAIController {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)

	void ReceiveBeginPlay(); // Function AIC_LootBug.AIC_LootBug_C.ReceiveBeginPlay
	void ReceivePossess(struct APawn* PossessedPawn); // Function AIC_LootBug.AIC_LootBug_C.ReceivePossess
	void OnDeath(struct UHealthComponentBase* HealthComponent); // Function AIC_LootBug.AIC_LootBug_C.OnDeath
	void ExecuteUbergraph_AIC_LootBug(int32_t EntryPoint); // Function AIC_LootBug.AIC_LootBug_C.ExecuteUbergraph_AIC_LootBug
};

