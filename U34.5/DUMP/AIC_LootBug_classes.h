// BlueprintGeneratedClass AIC_LootBug.AIC_LootBug_C
// Size: 0x360 (Inherited: 0x358)
struct AAIC_LootBug_C : AFSDAIController {
	FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)

	void ReceiveBeginPlay();
	void ReceivePossess(APawn* PossessedPawn);
	void OnDeath(UHealthComponentBase* HealthComponent);
	void ExecuteUbergraph_AIC_LootBug(int32_t EntryPoint);
};

