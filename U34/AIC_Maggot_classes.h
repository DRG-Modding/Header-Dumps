// BlueprintGeneratedClass AIC_Maggot.AIC_Maggot_C
// Size: 0x368 (Inherited: 0x358)
struct AAIC_Maggot_C : AFSDAIController {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	struct UBehaviorTree* BehaviorTree; // 0x360(0x08)

	void ReceiveBeginPlay(); // Function AIC_Maggot.AIC_Maggot_C.ReceiveBeginPlay
	void OnDeath(struct UHealthComponentBase* HealthComponent); // Function AIC_Maggot.AIC_Maggot_C.OnDeath
	void ReceivePossess(struct APawn* PossessedPawn); // Function AIC_Maggot.AIC_Maggot_C.ReceivePossess
	void ExecuteUbergraph_AIC_Maggot(int32_t EntryPoint); // Function AIC_Maggot.AIC_Maggot_C.ExecuteUbergraph_AIC_Maggot
};

