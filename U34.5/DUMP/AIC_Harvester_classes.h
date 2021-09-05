// BlueprintGeneratedClass AIC_Harvester.AIC_Harvester_C
// Size: 0x370 (Inherited: 0x358)
struct AAIC_Harvester_C : AFSDAIController {
	FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	UBehaviorTree* BehaviorTree; // 0x360(0x08)
	UHealthComponentBase* HealthComponent; // 0x368(0x08)

	void ReceiveBeginPlay();
	void OnDeath(UHealthComponentBase* HealthComponent);
	void ReceivePossess(APawn* PossessedPawn);
	void ExecuteUbergraph_AIC_Harvester(int32_t EntryPoint);
};

