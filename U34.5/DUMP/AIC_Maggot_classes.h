// BlueprintGeneratedClass AIC_Maggot.AIC_Maggot_C
// Size: 0x368 (Inherited: 0x358)
struct AAIC_Maggot_C : AFSDAIController {
	FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	UBehaviorTree* BehaviorTree; // 0x360(0x08)

	void ReceiveBeginPlay();
	void OnDeath(UHealthComponentBase* HealthComponent);
	void ReceivePossess(APawn* PossessedPawn);
	void ExecuteUbergraph_AIC_Maggot(int32_t EntryPoint);
};

