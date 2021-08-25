// BlueprintGeneratedClass AIC_Harvester.AIC_Harvester_C
// Size: 0x370 (Inherited: 0x358)
struct AAIC_Harvester_C : AFSDAIController {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	struct UBehaviorTree* BehaviorTree; // 0x360(0x08)
	struct UHealthComponentBase* HealthComponent; // 0x368(0x08)

	void ReceiveBeginPlay(); // Function AIC_Harvester.AIC_Harvester_C.ReceiveBeginPlay
	void OnDeath(struct UHealthComponentBase* HealthComponent); // Function AIC_Harvester.AIC_Harvester_C.OnDeath
	void ReceivePossess(struct APawn* PossessedPawn); // Function AIC_Harvester.AIC_Harvester_C.ReceivePossess
	void ExecuteUbergraph_AIC_Harvester(int32_t EntryPoint); // Function AIC_Harvester.AIC_Harvester_C.ExecuteUbergraph_AIC_Harvester
};

